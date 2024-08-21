#include <iostream>
#include <QThread>
#include <QString>
#include <QApplication>
#include <QTcpSocket>
#include <QUdpSocket>
#include <QtNetwork>


#ifndef XPPFLOODER_H_1285891192
#define XPPFLOODER_H_1285891192

class xppflooder : public QThread
{
    Q_OBJECT

public:
	volatile quint64 FloodCount;
	volatile quint64 Failed;
	QString IP;
	quint32 Port;
	QString Protocol;
	quint32 Delay;
	quint32 Timeout;
	bool Response;
	QString Data;
	xppflooder(QString ip, quint32 port, QString protocol, quint32 delay, quint32 timeout, bool resp, QString data);
	void stop();

protected:
	void run();
private:
	volatile bool active;
};

#endif