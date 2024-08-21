/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created: Sat Jun 18 21:39:03 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LOIQ
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QLabel *ioncannon;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_19;
    QLineEdit *SynapseServer;
    QLabel *label_20;
    QLineEdit *SynapsePort;
    QLabel *label_21;
    QLineEdit *SynapseChannel;
    QPushButton *SynapseConnect;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *URL_field;
    QPushButton *LockOn1;
    QLabel *label_2;
    QLineEdit *IP_field;
    QPushButton *LockOn2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QPushButton *Fire;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *Target_field;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *Timeout_field;
    QLineEdit *HTTP_subsite_field;
    QLineEdit *TCP_UDP_Message_field;
    QFrame *line;
    QLineEdit *Port_field;
    QComboBox *Method_field;
    QLineEdit *Threads_field;
    QCheckBox *Wait_for_reply_box;
    QSlider *Speed_Slider;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_9;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_idle;
    QLabel *label_connecting;
    QLabel *label_requesting;
    QLabel *label_downloading;
    QLabel *label_downloaded;
    QLabel *label_requested;
    QLabel *label_failed;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LOIQ)
    {
        if (LOIQ->objectName().isEmpty())
            LOIQ->setObjectName(QString::fromUtf8("LOIQ"));
        LOIQ->resize(955, 632);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LOIQ->sizePolicy().hasHeightForWidth());
        LOIQ->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(65, 113, 145, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(32, 64, 96, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(24, 48, 44, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush3(QColor(24, 48, 64, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        QBrush brush4(QColor(12, 24, 32, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        QBrush brush5(QColor(128, 128, 128, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        LOIQ->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        LOIQ->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/LOIC.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LOIQ->setWindowIcon(icon);
        LOIQ->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        centralwidget = new QWidget(LOIQ);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        ioncannon = new QLabel(centralwidget);
        ioncannon->setObjectName(QString::fromUtf8("ioncannon"));
        ioncannon->setPixmap(QPixmap(QString::fromUtf8(":/images/LOIC.png")));
        ioncannon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_5->addWidget(ioncannon, 0, 0, 5, 1);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_2->addWidget(label_19);

        SynapseServer = new QLineEdit(groupBox_6);
        SynapseServer->setObjectName(QString::fromUtf8("SynapseServer"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SynapseServer->sizePolicy().hasHeightForWidth());
        SynapseServer->setSizePolicy(sizePolicy1);
        SynapseServer->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(SynapseServer);

        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_20);

        SynapsePort = new QLineEdit(groupBox_6);
        SynapsePort->setObjectName(QString::fromUtf8("SynapsePort"));
        SynapsePort->setMaxLength(5);
        SynapsePort->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(SynapsePort);

        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_21);

        SynapseChannel = new QLineEdit(groupBox_6);
        SynapseChannel->setObjectName(QString::fromUtf8("SynapseChannel"));
        SynapseChannel->setMaxLength(32767);
        SynapseChannel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(SynapseChannel);

        SynapseConnect = new QPushButton(groupBox_6);
        SynapseConnect->setObjectName(QString::fromUtf8("SynapseConnect"));

        horizontalLayout_2->addWidget(SynapseConnect);


        gridLayout_5->addWidget(groupBox_6, 0, 1, 1, 2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        QPalette palette1;
        groupBox->setPalette(palette1);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        URL_field = new QLineEdit(groupBox);
        URL_field->setObjectName(QString::fromUtf8("URL_field"));
        URL_field->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(URL_field, 0, 1, 1, 1);

        LockOn1 = new QPushButton(groupBox);
        LockOn1->setObjectName(QString::fromUtf8("LockOn1"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tahoma"));
        font1.setBold(true);
        font1.setWeight(75);
        LockOn1->setFont(font1);

        gridLayout_2->addWidget(LockOn1, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        IP_field = new QLineEdit(groupBox);
        IP_field->setObjectName(QString::fromUtf8("IP_field"));
        IP_field->setMaxLength(25);
        IP_field->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(IP_field, 1, 1, 1, 1);

        LockOn2 = new QPushButton(groupBox);
        LockOn2->setObjectName(QString::fromUtf8("LockOn2"));
        LockOn2->setFont(font1);

        gridLayout_2->addWidget(LockOn2, 1, 2, 1, 1);


        gridLayout_5->addWidget(groupBox, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        Fire = new QPushButton(groupBox_2);
        Fire->setObjectName(QString::fromUtf8("Fire"));
        sizePolicy.setHeightForWidth(Fire->sizePolicy().hasHeightForWidth());
        Fire->setSizePolicy(sizePolicy);
        Fire->setFont(font1);

        gridLayout_6->addWidget(Fire, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 2, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Target_field = new QLineEdit(groupBox_3);
        Target_field->setObjectName(QString::fromUtf8("Target_field"));
        sizePolicy.setHeightForWidth(Target_field->sizePolicy().hasHeightForWidth());
        Target_field->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        Target_field->setFont(font2);
        Target_field->setAutoFillBackground(false);
        Target_field->setAlignment(Qt::AlignCenter);
        Target_field->setReadOnly(true);

        verticalLayout->addWidget(Target_field);


        gridLayout_5->addWidget(groupBox_3, 2, 1, 1, 2);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 2);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 0, 2, 1, 3);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 0, 5, 1, 1);

        Timeout_field = new QLineEdit(groupBox_4);
        Timeout_field->setObjectName(QString::fromUtf8("Timeout_field"));
        Timeout_field->setMaxLength(5);
        Timeout_field->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Timeout_field, 1, 1, 1, 1);

        HTTP_subsite_field = new QLineEdit(groupBox_4);
        HTTP_subsite_field->setObjectName(QString::fromUtf8("HTTP_subsite_field"));
        HTTP_subsite_field->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(HTTP_subsite_field, 1, 2, 1, 3);

        TCP_UDP_Message_field = new QLineEdit(groupBox_4);
        TCP_UDP_Message_field->setObjectName(QString::fromUtf8("TCP_UDP_Message_field"));
        TCP_UDP_Message_field->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(TCP_UDP_Message_field, 1, 5, 1, 1);

        line = new QFrame(groupBox_4);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 1, 2, 5);

        Port_field = new QLineEdit(groupBox_4);
        Port_field->setObjectName(QString::fromUtf8("Port_field"));
        Port_field->setMaxLength(5);
        Port_field->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Port_field, 4, 1, 1, 1);

        Method_field = new QComboBox(groupBox_4);
        Method_field->setObjectName(QString::fromUtf8("Method_field"));

        gridLayout_3->addWidget(Method_field, 4, 2, 1, 1);

        Threads_field = new QLineEdit(groupBox_4);
        Threads_field->setObjectName(QString::fromUtf8("Threads_field"));
        Threads_field->setMaxLength(7);
        Threads_field->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Threads_field, 4, 3, 1, 1);

        Wait_for_reply_box = new QCheckBox(groupBox_4);
        Wait_for_reply_box->setObjectName(QString::fromUtf8("Wait_for_reply_box"));

        gridLayout_3->addWidget(Wait_for_reply_box, 4, 4, 2, 1);

        Speed_Slider = new QSlider(groupBox_4);
        Speed_Slider->setObjectName(QString::fromUtf8("Speed_Slider"));
        Speed_Slider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(Speed_Slider, 3, 5, 2, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 5, 1, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_7, 5, 2, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_8, 5, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout->addWidget(label_18);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_17);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_9);


        gridLayout_3->addLayout(horizontalLayout, 5, 5, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 3, 1, 1, 2);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 0, 2, 1, 1);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 0, 3, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 0, 4, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_15, 0, 5, 1, 1);

        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 0, 6, 1, 1);

        label_idle = new QLabel(groupBox_5);
        label_idle->setObjectName(QString::fromUtf8("label_idle"));
        label_idle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_idle, 1, 0, 1, 1);

        label_connecting = new QLabel(groupBox_5);
        label_connecting->setObjectName(QString::fromUtf8("label_connecting"));
        label_connecting->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_connecting, 1, 1, 1, 1);

        label_requesting = new QLabel(groupBox_5);
        label_requesting->setObjectName(QString::fromUtf8("label_requesting"));
        label_requesting->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_requesting, 1, 2, 1, 1);

        label_downloading = new QLabel(groupBox_5);
        label_downloading->setObjectName(QString::fromUtf8("label_downloading"));
        label_downloading->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_downloading, 1, 3, 1, 1);

        label_downloaded = new QLabel(groupBox_5);
        label_downloaded->setObjectName(QString::fromUtf8("label_downloaded"));
        label_downloaded->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_downloaded, 1, 4, 1, 1);

        label_requested = new QLabel(groupBox_5);
        label_requested->setObjectName(QString::fromUtf8("label_requested"));
        label_requested->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_requested, 1, 5, 1, 1);

        label_failed = new QLabel(groupBox_5);
        label_failed->setObjectName(QString::fromUtf8("label_failed"));
        label_failed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_failed, 1, 6, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_5, 4, 1, 1, 2);

        LOIQ->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LOIQ);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LOIQ->setStatusBar(statusbar);

        retranslateUi(LOIQ);

        QMetaObject::connectSlotsByName(LOIQ);
    } // setupUi

    void retranslateUi(QMainWindow *LOIQ)
    {
        LOIQ->setWindowTitle(QApplication::translate("LOIQ", "LOIQ", 0, QApplication::UnicodeUTF8));
        ioncannon->setText(QString());
        groupBox_6->setTitle(QApplication::translate("LOIQ", "0. Synapse: connect to the Hivemind", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("LOIQ", "Server", 0, QApplication::UnicodeUTF8));
        SynapseServer->setText(QApplication::translate("LOIQ", "localhost", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("LOIQ", "Port", 0, QApplication::UnicodeUTF8));
        SynapsePort->setText(QApplication::translate("LOIQ", "6667", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("LOIQ", "Channel", 0, QApplication::UnicodeUTF8));
        SynapseChannel->setText(QApplication::translate("LOIQ", "#ololo", 0, QApplication::UnicodeUTF8));
        SynapseConnect->setText(QApplication::translate("LOIQ", "Connect", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("LOIQ", "1. Select your target", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LOIQ", "URL", 0, QApplication::UnicodeUTF8));
        LockOn1->setText(QApplication::translate("LOIQ", "Lock On", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LOIQ", "IP", 0, QApplication::UnicodeUTF8));
        LockOn2->setText(QApplication::translate("LOIQ", "Lock On", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("LOIQ", "2. Ready?", 0, QApplication::UnicodeUTF8));
        Fire->setText(QApplication::translate("LOIQ", "IMMAH CHARGIN MAH LAZOR", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("LOIQ", "Selected target", 0, QApplication::UnicodeUTF8));
        Target_field->setText(QApplication::translate("LOIQ", "NONE!", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("LOIQ", "3. Attack options", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LOIQ", "Timeout", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("LOIQ", "HTTP Subsite", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("LOIQ", "TCP / UDP Message", 0, QApplication::UnicodeUTF8));
        Timeout_field->setText(QApplication::translate("LOIQ", "9999", 0, QApplication::UnicodeUTF8));
        HTTP_subsite_field->setText(QApplication::translate("LOIQ", "/", 0, QApplication::UnicodeUTF8));
        TCP_UDP_Message_field->setText(QApplication::translate("LOIQ", "A Cat Is Fine Too", 0, QApplication::UnicodeUTF8));
        Port_field->setText(QApplication::translate("LOIQ", "80", 0, QApplication::UnicodeUTF8));
        Method_field->clear();
        Method_field->insertItems(0, QStringList()
         << QApplication::translate("LOIQ", "TCP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LOIQ", "UDP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LOIQ", "HTTP", 0, QApplication::UnicodeUTF8)
        );
        Threads_field->setText(QApplication::translate("LOIQ", "10", 0, QApplication::UnicodeUTF8));
        Wait_for_reply_box->setText(QApplication::translate("LOIQ", "Wait for reply", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("LOIQ", "Port", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("LOIQ", "Method", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("LOIQ", "Threads", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("LOIQ", "<<Faster", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("LOIQ", "SPEED", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("LOIQ", "Slower>>", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("LOIQ", "Attack Status", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("LOIQ", "Idle", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("LOIQ", "Connecting", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("LOIQ", "Requesting", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("LOIQ", "Downloading", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("LOIQ", "Downloaded", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("LOIQ", "Requested", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("LOIQ", "Failed", 0, QApplication::UnicodeUTF8));
        label_idle->setText(QString());
        label_connecting->setText(QString());
        label_requesting->setText(QString());
        label_downloading->setText(QString());
        label_downloaded->setText(QString());
        label_requested->setText(QString());
        label_failed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LOIQ: public Ui_LOIQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
