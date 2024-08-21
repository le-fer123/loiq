#include <iostream>
#include <QThread>
#include <QString>
#include <QApplication>
#include <QTcpSocket>
#include <QUdpSocket>
#include <QtNetwork>
#include <QRegExp>
#include <QTextStream>
#include <QUuid>

#ifndef SYNAPSE_H_1291947531
#define SYNAPSE_H_1291947531

class synapse : public QThread
{
    Q_OBJECT

public:
	QTcpSocket* Socket;
	QString IP;
	quint32 Port;
	QString Channel;
	synapse(QString ip, quint32 port, QString channel);
	void stop();
	void run();
protected:
	
private:
	volatile bool active;
	volatile bool connected;
	QStringList righteous;
	QUuid guid;
	void change_nick();	
	void join_channel();
	QString tmp;
private slots:
	void receiving_transmission();
signals:
	void synapse_adjust_ip(QString ip);
	void synapse_adjust_host(QString host);
	void synapse_adjust_subsite(QString subsite);
	void synapse_adjust_message(QString msg);
	void synapse_adjust_port(quint32 port);
	void synapse_adjust_method(QString protocol);
	void synapse_adjusting_complete();
	void synapse_abort();
};

#endif
