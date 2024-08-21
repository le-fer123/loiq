#include <QApplication>
#include "xppflooder.h"
#include "main_window.h"


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QTranslator appTranslator; 
	appTranslator.load("loiq-" + QLocale::system().name(),  ":/translations");
	app.installTranslator(&appTranslator);

	main_window *mw = new main_window();
	mw->show();

        return app.exec();

}

