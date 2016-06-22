#include "usb_gen_v2_qt.h"

unsigned char buf[64];
unsigned short VendorID = 0x0483;
unsigned short ProductID = 0x5750;
hid_device *handle;
bool HIDStatus;


usb_gen_v2_qt::usb_gen_v2_qt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.doubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(doubleSpinBox(double)));
	connect(ui.doubleSpinBox_2, SIGNAL(valueChanged(double)), this, SLOT(doubleSpinBox_2(double)));
	//connect(ui.checkBox, SIGNAL(stateChanged(int)), this, SLOT(checkBox()));

	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(en()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(save()));

	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	timer->start(200);

}

usb_gen_v2_qt::~usb_gen_v2_qt()
{
	hid_close(handle);
}

void usb_gen_v2_qt::doubleSpinBox(double freq)
{
	SetFreq(freq);
}

void usb_gen_v2_qt::doubleSpinBox_2(double att)
{
	if (handle) {
		buf[0] = 0; // ID
		buf[1] = 2; // instructions

		buf[5] = (unsigned char)(63 - att*-2);
		hid_write(handle, (const unsigned char*)buf, 64);
	}
}

void usb_gen_v2_qt::en()
{
	if (handle) {
		
		buf[0] = 0; // ID
		buf[1] = 3; // instructions
		buf[2] = 4;
		buf[3] = 5;
		buf[4] = 6;

		if (!ui.pushButton->isChecked()) // ����������
			buf[5] = 0;
		else
			buf[5] = 1;

		hid_write(handle, (const unsigned char*)buf, 64);

	}
}

void usb_gen_v2_qt::save()
{
    if (handle) {

        buf[0] = 0; // ID
        buf[1] = 4; // instructions

        hid_write(handle, (const unsigned char*)buf, 64);

    }
}


void usb_gen_v2_qt::update()
{
    int res;

	float freq, att;
	int att_int, enable;

    if (handle) {
        // �������� �������� UI
        ui.doubleSpinBox->setEnabled(true);
        ui.doubleSpinBox_2->setEnabled(true);
        ui.pushButton->setEnabled(true);
        ui.pushButton_2->setEnabled(true);

        // ��������� ��������� ����������
        res = hid_read(handle, buf, 64);
        if (res == -1) 	handle = 0;


        }

    else {
        // ��������� �������� UI
        ui.doubleSpinBox->setEnabled(false);
        ui.doubleSpinBox_2->setEnabled(false);
        ui.pushButton->setEnabled(false);
        ui.pushButton_2->setEnabled(false);

        //������� �������
        handle = hid_open(VendorID, ProductID, NULL);
        if (handle)  {

            hid_set_nonblocking(handle, 1);
            Sleep(700);
            // ��������� ��������� ����������
            res = hid_read(handle, buf, 64);


            if (res == -1) 	handle = 0;
            else {
                //if (buf[4] == 1) ui.pushButton->setChecked(true); else ui.pushButton->setChecked(false);

                switch (buf[3])
                {
                case 0: ui.statusBar->showMessage(tr("��������� ���������. ���������� HMC �� ����������."));
                    break;
                case 1: ui.statusBar->showMessage(tr("��������� ���������. HMC833LP6GE �� ����������."));
                    break;
                case 2: ui.statusBar->showMessage(tr("��������� ���������. HMC625LP5E �� ����������."));
                    break;
                case 3: ui.statusBar->showMessage(tr("��������� ���������. �� ������."));
                    break;
                default:
                    break;
                }
				// ��������� �������
				memcpy(&freq, &buf[4], 4); ui.doubleSpinBox->setValue(freq);

				// ��������� ����������
				memcpy(&att_int, &buf[8], 4); att = ((att_int/2.0) - 31.5);  ui.doubleSpinBox_2->setValue(att);

				// ��������� ���/����
				memcpy(&enable, &buf[12], 4); 
				if (enable == 1) ui.pushButton->setChecked(true); else ui.pushButton->setChecked(false);

            }

        }
        else ui.statusBar->showMessage(tr("��������� �� ���������."));

    }
}


void usb_gen_v2_qt::SetFreq(double freq)
{
	if (handle) {
		float freq1 = (float)freq;

		buf[0] = 0; // ID
		buf[1] = 1; // instructions

		memcpy(&buf[2], &freq1, 4);
		hid_write(handle, (const unsigned char*)buf, 64);
	}
}

