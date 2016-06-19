#include "usb_gen_v2_qt.h"
#include <QApplication>
#include <QtGui>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);



	QTextCodec *codec = QTextCodec::codecForName("CP1251");
    QTextCodec::setCodecForTr(codec);
	//QApplication::setStyle(QStyleFactory::create("Cleanlooks")); //WindowsVista,WindowsXP,CDE,Motif,Cleanlooks


	usb_gen_v2_qt w;
	w.show();
	return a.exec();
}
