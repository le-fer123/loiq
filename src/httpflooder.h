#include <iostream>
#include <QThread>
#include <QString>
#include <QApplication>
#include <QTcpSocket>
#include <QUdpSocket>
#include <QtNetwork>


#ifndef HTTPFLOODER_H_1285973835
#define HTTPFLOODER_H_1285973835

enum thread_state { idle, connecting, requesting, downloading };

class httpflooder : public QThread
{
    Q_OBJECT

public:
	volatile quint64 FloodCount;
	volatile quint64 Downloaded;
	volatile quint64 Requested;
	volatile quint64 Failed;
	QString IP;
	quint32 Port;
	QString Protocol;
	quint32 Delay;
	quint32 Timeout;
	bool Response;
	QString Subsite;
	httpflooder(QString ip, quint32 port, QString protocol, quint32 delay, quint32 timeout, bool resp, QString subsite);
	void stop();
	volatile thread_state Status;

protected:
	void run();
private:
	volatile bool active;
};

#endif