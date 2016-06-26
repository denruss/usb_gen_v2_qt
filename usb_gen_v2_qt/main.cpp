#include "usb_gen_v2_qt.h"
#include <QtWidgets/QApplication>
#include <QtGui>
#include <QTextCodec>
#include <QTranslator>

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);




	// Вызываем поддержку перевода
	QTranslator * qt_translator = new QTranslator;
	QString file_translate = QApplication::applicationDirPath() + "/lang/ru.qm";
	if (!qt_translator->load(file_translate)) {
		delete qt_translator;
	}
	else {
		qApp->installTranslator(qt_translator);
	}


	usb_gen_v2_qt w;
	w.show();
	return a.exec();
}
