/********************************************************************************
** Form generated from reading UI file 'usb_gen_v2_qt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USB_GEN_V2_QT_H
#define UI_USB_GEN_V2_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usb_gen_v2_qtClass
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QGroupBox *groupBox_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_3;
    QGroupBox *groupBox_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_5;
    QDoubleSpinBox *doubleSpinBox_7;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_8;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_15;
    QSpinBox *spinBox_2;
    QLabel *label_16;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBox_9;
    QLabel *label_18;
    QFrame *line_3;
    QWidget *tab_2;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *spinBox;
    QLabel *label_2;
    QPushButton *pushButton_6;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *usb_gen_v2_qtClass)
    {
        if (usb_gen_v2_qtClass->objectName().isEmpty())
            usb_gen_v2_qtClass->setObjectName(QStringLiteral("usb_gen_v2_qtClass"));
        usb_gen_v2_qtClass->resize(459, 154);
        usb_gen_v2_qtClass->setMinimumSize(QSize(459, 154));
        usb_gen_v2_qtClass->setMaximumSize(QSize(459, 154));
        QIcon icon;
        icon.addFile(QStringLiteral(":/GEN_USB/Resources/ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        usb_gen_v2_qtClass->setWindowIcon(icon);
        action = new QAction(usb_gen_v2_qtClass);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(usb_gen_v2_qtClass);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralWidget = new QWidget(usb_gen_v2_qtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(413, 86));
        centralWidget->setMaximumSize(QSize(500, 200));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 461, 141));
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(360, 40, 95, 25));
        pushButton_2->setCheckable(false);
        pushButton_2->setChecked(false);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(360, 10, 95, 25));
        pushButton->setCheckable(true);
        pushButton->setChecked(false);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(5, 5, 115, 61));
        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setEnabled(false);
        doubleSpinBox->setGeometry(QRect(5, 22, 80, 22));
        doubleSpinBox->setAccelerated(true);
        doubleSpinBox->setDecimals(5);
        doubleSpinBox->setMinimum(25);
        doubleSpinBox->setMaximum(6000);
        doubleSpinBox->setValue(2000);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 22, 21, 21));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(125, 5, 91, 61));
        doubleSpinBox_2 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setEnabled(false);
        doubleSpinBox_2->setGeometry(QRect(10, 22, 50, 22));
        doubleSpinBox_2->setAccelerated(true);
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(-31.5);
        doubleSpinBox_2->setMaximum(0);
        doubleSpinBox_2->setSingleStep(0.5);
        doubleSpinBox_2->setValue(-31.5);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(65, 22, 21, 21));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setEnabled(false);
        groupBox_4->setGeometry(QRect(220, 5, 131, 61));
        radioButton = new QRadioButton(groupBox_4);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 15, 51, 17));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox_4);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 35, 51, 17));
        radioButton_3 = new QRadioButton(groupBox_4);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(68, 15, 61, 17));
        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setEnabled(false);
        groupBox_5->setGeometry(QRect(5, 70, 451, 41));
        doubleSpinBox_7 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        doubleSpinBox_7->setEnabled(false);
        doubleSpinBox_7->setGeometry(QRect(45, 10, 55, 22));
        doubleSpinBox_7->setAccelerated(true);
        doubleSpinBox_7->setDecimals(1);
        doubleSpinBox_7->setMinimum(25);
        doubleSpinBox_7->setMaximum(6000);
        doubleSpinBox_7->setValue(2000);
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(105, 10, 21, 21));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(5, 10, 41, 21));
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(140, 10, 41, 21));
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(235, 10, 21, 21));
        doubleSpinBox_8 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_8->setObjectName(QStringLiteral("doubleSpinBox_8"));
        doubleSpinBox_8->setEnabled(false);
        doubleSpinBox_8->setGeometry(QRect(175, 10, 55, 22));
        doubleSpinBox_8->setAccelerated(true);
        doubleSpinBox_8->setDecimals(1);
        doubleSpinBox_8->setMinimum(25);
        doubleSpinBox_8->setMaximum(6000);
        doubleSpinBox_8->setValue(2100);
        line = new QFrame(groupBox_5);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(123, 10, 20, 21));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox_5);
        line_2->setObjectName(QStringLiteral("line_2"));
<<<<<<< HEAD
        line_2->setGeometry(QRect(353, 10, 20, 21));
=======
        line_2->setGeometry(QRect(355, 10, 20, 21));
>>>>>>> origin/master
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(370, 10, 21, 21));
        spinBox_2 = new QSpinBox(groupBox_5);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setEnabled(false);
        spinBox_2->setGeometry(QRect(387, 10, 40, 22));
        spinBox_2->setMaximum(255);
        spinBox_2->setValue(10);
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(432, 10, 16, 21));
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(335, 10, 21, 21));
        doubleSpinBox_9 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_9->setObjectName(QStringLiteral("doubleSpinBox_9"));
        doubleSpinBox_9->setEnabled(false);
        doubleSpinBox_9->setGeometry(QRect(285, 10, 45, 22));
        doubleSpinBox_9->setAccelerated(true);
        doubleSpinBox_9->setDecimals(2);
        doubleSpinBox_9->setMinimum(0.01);
        doubleSpinBox_9->setMaximum(9.99);
        doubleSpinBox_9->setSingleStep(0.1);
        doubleSpinBox_9->setValue(0.5);
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(265, 10, 31, 21));
        line_3 = new QFrame(groupBox_5);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(250, 10, 20, 21));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 10, 91, 21));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 41, 21));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 40, 41, 21));
        doubleSpinBox_3 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setEnabled(false);
        doubleSpinBox_3->setGeometry(QRect(50, 10, 71, 22));
        doubleSpinBox_3->setAccelerated(true);
        doubleSpinBox_3->setDecimals(5);
        doubleSpinBox_3->setMinimum(25);
        doubleSpinBox_3->setMaximum(350);
        doubleSpinBox_3->setValue(350);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 10, 91, 21));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 40, 91, 16));
        spinBox = new QSpinBox(tab_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setEnabled(false);
        spinBox->setGeometry(QRect(50, 40, 61, 22));
        spinBox->setMaximum(16383);
        spinBox->setValue(1);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 10, 21, 21));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(340, 40, 91, 21));
        tabWidget->addTab(tab_2, QString());
        usb_gen_v2_qtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(usb_gen_v2_qtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        usb_gen_v2_qtClass->setStatusBar(statusBar);

        retranslateUi(usb_gen_v2_qtClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(usb_gen_v2_qtClass);
    } // setupUi

    void retranslateUi(QMainWindow *usb_gen_v2_qtClass)
    {
        usb_gen_v2_qtClass->setWindowTitle(QApplication::translate("usb_gen_v2_qtClass", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 USB (25-6000 \320\234\320\223\321\206)", 0));
        action->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\220\320\247\320\245", 0));
        action_2->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\265", 0));
        pushButton_2->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214", 0));
        groupBox->setTitle(QApplication::translate("usb_gen_v2_qtClass", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260", 0));
        label->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\234\320\223\321\206", 0));
        groupBox_3->setTitle(QApplication::translate("usb_gen_v2_qtClass", "\320\236\321\201\320\273\320\260\320\261\320\273\320\265\320\275\320\270\320\265", 0));
        label_3->setText(QApplication::translate("usb_gen_v2_qtClass", " \320\264\320\221", 0));
        groupBox_4->setTitle(QApplication::translate("usb_gen_v2_qtClass", "\320\240\320\265\320\266\320\270\320\274", 0));
        radioButton->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\223\320\241\320\241", 0));
        radioButton_2->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\223\320\232\320\247", 0));
        radioButton_3->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\237\320\237\320\240\320\247", 0));
        groupBox_5->setTitle(QString());
        label_11->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\234\320\223\321\206", 0));
        label_12->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\235\320\260\321\207\320\260\320\273\320\276", 0));
        label_13->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\232\320\276\320\275\320\265\321\206", 0));
        label_14->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\234\320\223\321\206", 0));
        label_15->setText(QApplication::translate("usb_gen_v2_qtClass", "\342\210\206t", 0));
        label_16->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\274\321\201", 0));
        label_17->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\234\320\223\321\206", 0));
        label_18->setText(QApplication::translate("usb_gen_v2_qtClass", "\342\210\206f", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("usb_gen_v2_qtClass", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        pushButton_5->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 FW", 0));
        label_7->setText(QApplication::translate("usb_gen_v2_qtClass", "XTAL=", 0));
        label_5->setText(QApplication::translate("usb_gen_v2_qtClass", "R=", 0));
        label_8->setText(QApplication::translate("usb_gen_v2_qtClass", "Version FW :", 0));
        label_9->setText(QApplication::translate("usb_gen_v2_qtClass", "Version SW : 1.5", 0));
        label_2->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\234\320\223\321\206", 0));
        pushButton_6->setText(QApplication::translate("usb_gen_v2_qtClass", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 SW", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("usb_gen_v2_qtClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class usb_gen_v2_qtClass: public Ui_usb_gen_v2_qtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USB_GEN_V2_QT_H
