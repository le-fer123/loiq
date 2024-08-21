#include <vector>
#include <QtNetwork>
#include <QHostInfo>
#include <QEvent>
#include <QRegExp>
#include <QTimer>
#include "ui_main_window.h"
#include "xppflooder.h"
#include "httpflooder.h"
#include "synapse.h"

#ifndef MAINWINDOW_H_1285891172
#define MAINWINDOW_H_1285891172

#define STATUSBAR_TIMEOUT 3333
#define POLLING_FREQ 333

class main_window : public QMainWindow, public Ui_LOIQ 
{
	Q_OBJECT
public:
	main_window(QWidget *parent = 0);
	

private:
  	std::vector<xppflooder*> threads;
	std::vector<httpflooder*> threads_h;
	synapse* Synapse;
	QLabel* Permalabel;
	quint32 timer;
	QString Protocol;
	bool active;
	bool synapse_active;
	void clear_stats();
	quint64 active_time;
	quint64 floodcount;

	quint64 Requested;
	quint64 Failed;
	quint64 Downloaded;
	quint32 Status_idle;
	quint32 Status_connecting;
	quint32 Status_requesting;
	quint32 Status_downloading;

protected:
	void timerEvent(QTimerEvent *event);

private slots:
	void start_flooding();
	
	void change_speed(int value);
	void set_target_by_IP();
	void set_target_by_URL();

	void activate_synapse();

	void synapse_set_ip(QString ip);
	void synapse_set_host(QString host);
	void synapse_set_port(quint32 port);
	void synapse_set_message(QString message);
	void synapse_set_method(QString protocol);
	void synapse_set_subsite(QString subsite);
	void synapse_obey();
	void synapse_abort();
};
#endif
