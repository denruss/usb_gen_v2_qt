#ifndef USB_GEN_V2_QT_H
#define USB_GEN_V2_QT_H

#include <QtWidgets/QMainWindow>
#include "ui_usb_gen_v2_qt.h"
#include <QTimer>
#include "hidapi.h"

#include <windows.h>



class usb_gen_v2_qt : public QMainWindow
{
	Q_OBJECT

public:
	usb_gen_v2_qt(QWidget *parent = 0);
	~usb_gen_v2_qt();

private:
	Ui::usb_gen_v2_qtClass ui;
	QTimer *timer;
	void SetFreq(double);


private slots:
	void doubleSpinBox(double);
	void doubleSpinBox_2(double);

	//void checkBox(void);
	void en(void);
	void save(void);
	void update(void);
	void SetMode(void);
	void SetParam(void);
	void firmware_update(void);


};



#endif // USB_GEN_V2_QT_H
