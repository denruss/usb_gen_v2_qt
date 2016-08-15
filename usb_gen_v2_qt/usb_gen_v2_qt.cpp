#include "usb_gen_v2_qt.h"


unsigned short VendorID = 0x0483;
unsigned short ProductID = 0x5750;
const wchar_t Serial[] = L"000000005443";

hid_device *handle;
bool flag;
unsigned char verFW[2];
unsigned char verSW[2] = {1, 8};




usb_gen_v2_qt::usb_gen_v2_qt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	connect(ui.doubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(doubleSpinBox(double)));
	connect(ui.doubleSpinBox_2, SIGNAL(valueChanged(double)), this, SLOT(doubleSpinBox_2(double)));
	connect(ui.radioButton, SIGNAL(clicked()), this, SLOT(SetMode(void)));
	connect(ui.radioButton_2, SIGNAL(clicked()), this, SLOT(SetMode(void)));
	connect(ui.radioButton_3, SIGNAL(clicked()), this, SLOT(SetMode(void)));

	connect(ui.doubleSpinBox_7, SIGNAL(valueChanged(double)), this, SLOT(SetParam(void)));
	connect(ui.doubleSpinBox_8, SIGNAL(valueChanged(double)), this, SLOT(SetParam(void)));
	connect(ui.doubleSpinBox_9, SIGNAL(valueChanged(double)), this, SLOT(SetParam(void)));
	connect(ui.spinBox_2, SIGNAL(valueChanged(int)), this, SLOT(SetParam(void)));


	//connect(ui.checkBox, SIGNAL(stateChanged(int)), this, SLOT(checkBox()));



	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(en()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(save()));
	connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(firmware_update()));

	ui.pushButton->setText(tr("On"));
	ui.pushButton_2->setText(tr("Save"));
	ui.groupBox->setTitle(tr("Frequency"));
	ui.groupBox_3->setTitle(tr("Attenuation"));
	ui.label->setText(tr("MHz"));
	ui.label_3->setText(tr("dB"));
	this->setWindowTitle(tr("USB Microwave Generator (25-6000 MHz)"));
	ui.label_9->setText(tr("Version SW : ") + QString::number((int)verSW[0], 10).toUpper() + "." + QString::number((int)verSW[1], 10).toUpper());
	ui.label_8->setText(tr("Version FW : ") );
	ui.tabWidget->setTabText(0, tr("Control"));
	ui.tabWidget->setTabText(1, tr("Settings"));
	ui.pushButton_5->setText(tr("Update FW"));
	ui.pushButton_6->setText(tr("Update SW"));

	ui.groupBox_4->setTitle(tr("Mode"));
	ui.radioButton->setText(tr("SSG"));
	ui.radioButton_2->setText(tr("Sweep"));
	ui.radioButton_3->setText(tr("Hopping"));

	ui.label_12->setText(tr("Begin"));
	ui.label_11->setText(tr("MHz"));
	ui.label_13->setText(tr("End"));
	ui.label_14->setText(tr("MHz"));
	ui.label_2->setText(tr("MHz"));
	//ui.label_18->setText(tr("∆f"));
	ui.label_17->setText(tr("MHz"));
	//ui.label_15->setText(tr("∆t"));
	ui.label_16->setText(tr("ms"));


	connect(ui.pushButton_6, SIGNAL(clicked()), this, SLOT(MyLink()));

	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	timer->start(300);



}


usb_gen_v2_qt::~usb_gen_v2_qt()
{
	hid_close(handle);
}

void usb_gen_v2_qt::doubleSpinBox(double freq)
{
	SetFreq(freq);
}


void usb_gen_v2_qt::MyLink()
{
	QUrl url("https://github.com/denruss/usb_gen_v2_qt/tree/master/Win32/Release");
	QDesktopServices::openUrl(url);
}

void usb_gen_v2_qt::doubleSpinBox_2(double att)
{
	if (handle) {
		unsigned char buf[64];

		buf[0] = 0; // ID
		buf[1] = 2; // instructions

		buf[5] = (unsigned char)(63 - att*-2);
		hid_write(handle, (const unsigned char*)buf, 64);
	}
}

void usb_gen_v2_qt::en()
{
	if (handle && flag) {

		unsigned char buf[64];

		buf[0] = 0; // ID
		buf[1] = 3; // instructions
		buf[2] = 4;
		buf[3] = 5;
		buf[4] = 6;

		if (!ui.pushButton->isChecked()) // выключение
		{
			buf[5] = 0;
			ui.pushButton->setText(tr("On"));
		}
		else
		{
			buf[5] = 1;
			ui.pushButton->setText(tr("Off"));
		}
		hid_write(handle, (const unsigned char*)buf, 64);

	}
}

void usb_gen_v2_qt::save()
{
    if (handle) {
		unsigned char buf[64];

        buf[0] = 0; // ID
        buf[1] = 4; // instructions

        hid_write(handle, (const unsigned char*)buf, 64);

    }
}


void usb_gen_v2_qt::firmware_update()
{
	if (handle && flag) {
		unsigned char buf[64];

		buf[0] = 0; // ID
		buf[1] = 255; // instructions

		hid_write(handle, (const unsigned char*)buf, 64);

	}
}





void usb_gen_v2_qt::update()
{
    int res;

	float freq, att, XTAL, R, freq_start, freq_stop, freq_step;
	int att_int, enable, mode, delay, K, Nint, Nfract;

	unsigned char buf[64];

    if (handle) {
        // включаем элементы UI
        ui.doubleSpinBox->setEnabled(true);
        ui.doubleSpinBox_2->setEnabled(true);
        ui.pushButton->setEnabled(true);
        ui.pushButton_2->setEnabled(true);
		ui.pushButton_5->setEnabled(true);
		ui.groupBox_4->setEnabled(true);
		ui.groupBox_5->setEnabled(true);

        // считываем состояние устройства
        res = hid_read(handle, buf, 64);
        if (res == -1) 	handle = 0;
        }

    else {
        // выключаем элементы UI
        ui.doubleSpinBox->setEnabled(false);
        ui.doubleSpinBox_2->setEnabled(false);
        ui.pushButton->setEnabled(false);
        ui.pushButton_2->setEnabled(false);
		ui.pushButton_5->setEnabled(false);
		ui.groupBox_4->setEnabled(false);
		ui.groupBox_5->setEnabled(false);

        //пробуем открыть
        handle = hid_open(VendorID, ProductID, Serial); //Serial
        if (handle)  {

            hid_set_nonblocking(handle, 1);
            Sleep(700);
            // считываем состояние устройства
            res = hid_read(handle, buf, 64);

			flag = 0;
            if (res == -1) 	handle = 0;
			else {
				//if (buf[4] == 1) ui.pushButton->setChecked(true); else ui.pushButton->setChecked(false);

				switch (buf[3])
				{
				case 0: ui.statusBar->showMessage(tr("The generator is detected. Chips HMC not found."));
					break;
				case 1: ui.statusBar->showMessage(tr("The generator is detected. HMC833LP6GE not found."));
					break;
				case 2: ui.statusBar->showMessage(tr("The generator is detected. HMC625LP5E not found."));
					break;
				case 3: ui.statusBar->showMessage(tr("The generator is detected. All is well."));
					break;
				default:
					break;
				}


				// извлекаем версию
				verFW[0] = buf[0]; verFW[1] = buf[1];
				ui.label_8->setText(tr("Version FW : ") + QString::number((int)verFW[0], 10).toUpper() + "." + QString::number((int)verFW[1], 10).toUpper());

				// извлекаем режим
				mode = (int)buf[2];
				if (mode == 1) ui.radioButton_2->setChecked(true);
				if (mode == 2) ui.radioButton_3->setChecked(true);

				
				if (mode == 0) { ui.doubleSpinBox_7->setEnabled(false); ui.doubleSpinBox_8->setEnabled(false); ui.doubleSpinBox_9->setEnabled(false); ui.groupBox_5->setEnabled(false); ui.spinBox_2->setEnabled(false); }
				if (mode == 1) { ui.doubleSpinBox_7->setEnabled(true); ui.doubleSpinBox_8->setEnabled(true); ui.doubleSpinBox_9->setEnabled(true); ui.groupBox_5->setEnabled(true); ui.spinBox_2->setEnabled(true); }
				if (mode == 2) { ui.doubleSpinBox_7->setEnabled(true); ui.doubleSpinBox_8->setEnabled(true); ui.doubleSpinBox_9->setEnabled(false); ui.groupBox_5->setEnabled(true); ui.spinBox_2->setEnabled(true); }

				// извлекаем частоту
				memcpy(&freq, &buf[4], 4);  ui.doubleSpinBox->setValue(freq);

				// извлекаем ослабление
				memcpy(&att_int, &buf[8], 4); att = ((att_int / 2.0) - 31.5);  ui.doubleSpinBox_2->setValue(att);

				// извлекаем вкл/выкл
				//memcpy(&enable, &buf[12], 4);
				enable = buf[12];
				if (enable == 1) { ui.pushButton->setChecked(true); ui.pushButton->setText(tr("Off")); }
				else { ui.pushButton->setChecked(false); ui.pushButton->setText(tr("On"));	}

				// извлекаем XTAL
				memcpy(&XTAL, &buf[16], 4); ui.doubleSpinBox_3->setValue(XTAL);

				// извлекаем R
				memcpy(&R, &buf[20], 4); ui.spinBox->setValue(R);

				// извлекаем начальную частоту для ГКЧ
				memcpy(&freq_start, &buf[24], 4); ui.doubleSpinBox_7->setValue(freq_start);

				// извлекаем конечную частоту для ГКЧ
				memcpy(&freq_stop, &buf[28], 4); ui.doubleSpinBox_8->setValue(freq_stop);

				// извлекаем шаг для ГКЧ
				memcpy(&freq_step, &buf[32], 4); ui.doubleSpinBox_9->setValue(freq_step);

				// извлекаем шаг по времени для ГКЧ
				delay = (int)buf[36]; ui.spinBox_2->setValue(delay);

				// извлекаем K
				//memcpy(&K, &buf[37], 4); ui.label_20->setText("K=0x" + QString("%1").arg(K, 1, 16, QLatin1Char('0')));


				flag = 1;

            }

        }
        else ui.statusBar->showMessage(tr("The generator is not connected."));

    }
}


void usb_gen_v2_qt::SetFreq(double freq)
{
	if (handle && flag) {

		unsigned char buf[64];

		float freq1 = (float)freq;

		buf[0] = 0; // ID
		buf[1] = 1; // instructions

		memcpy(&buf[2], &freq1, 4);
		hid_write(handle, (const unsigned char*)buf, 64);
	}
}


void usb_gen_v2_qt::SetMode(void)
{
		if (handle && flag) {

			unsigned char buf[64];
		
			int mode = 0;
			if (ui.radioButton_2->isChecked()) mode = 1;
			if (ui.radioButton_3->isChecked()) mode = 2;


			if (mode == 0) { ui.doubleSpinBox_7->setEnabled(false); ui.doubleSpinBox_8->setEnabled(false); ui.doubleSpinBox_9->setEnabled(false); ui.groupBox_5->setEnabled(false); ui.spinBox_2->setEnabled(false); }
			if (mode == 1) { ui.doubleSpinBox_7->setEnabled(true); ui.doubleSpinBox_8->setEnabled(true); ui.doubleSpinBox_9->setEnabled(true); ui.groupBox_5->setEnabled(true); ui.spinBox_2->setEnabled(true); }
			if (mode == 2) { ui.doubleSpinBox_7->setEnabled(true); ui.doubleSpinBox_8->setEnabled(true); ui.doubleSpinBox_9->setEnabled(false); ui.groupBox_5->setEnabled(true); ui.spinBox_2->setEnabled(true); }

	
		buf[0] = 0; // ID
		buf[1] = 5; // instructions

		buf[5] = (unsigned char)mode;

		hid_write(handle, (const unsigned char*)buf, 64);
	}
}

void usb_gen_v2_qt::SetParam(void)
{
	if (handle && flag) {

		unsigned char buf[64];

		float freq_start = (float)ui.doubleSpinBox_7->value();
		float freq_stop = (float)ui.doubleSpinBox_8->value();
		float freq_step = (float)ui.doubleSpinBox_9->value();
		int delay = (float)ui.spinBox_2->value();

		
		buf[0] = 0; // ID
		buf[1] = 6; // instructions



		memcpy(&buf[2], &freq_start, 4);
		memcpy(&buf[6], &freq_stop, 4);
		memcpy(&buf[10], &freq_step, 4);
		buf[14] = (unsigned char)delay;

		hid_write(handle, (const unsigned char*)buf, 64);
	}
}




