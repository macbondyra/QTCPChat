/********************************************************************************
** Form generated from reading UI file 'tcpClient.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *IP1;
    QSpinBox *IP2;
    QSpinBox *IP3;
    QSpinBox *IP4;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *PORT;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Connect;
    QPushButton *Check;
    QPushButton *Disconnect;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QPushButton *Send;
    QTextEdit *SentText;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QPushButton *Clear;
    QTextEdit *RecievedText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(429, 296);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 401, 211));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16, 16));

        horizontalLayout->addWidget(label);

        IP1 = new QSpinBox(widget);
        IP1->setObjectName("IP1");
        IP1->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        IP1->setMaximum(255);

        horizontalLayout->addWidget(IP1);

        IP2 = new QSpinBox(widget);
        IP2->setObjectName("IP2");
        IP2->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        IP2->setMaximum(255);

        horizontalLayout->addWidget(IP2);

        IP3 = new QSpinBox(widget);
        IP3->setObjectName("IP3");
        IP3->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        IP3->setMaximum(255);

        horizontalLayout->addWidget(IP3);

        IP4 = new QSpinBox(widget);
        IP4->setObjectName("IP4");
        IP4->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        IP4->setMaximum(255);

        horizontalLayout->addWidget(IP4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(49, 16));

        horizontalLayout_2->addWidget(label_2);

        PORT = new QSpinBox(widget);
        PORT->setObjectName("PORT");
        PORT->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        PORT->setMaximum(99999);

        horizontalLayout_2->addWidget(PORT);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Connect = new QPushButton(widget);
        Connect->setObjectName("Connect");
        Connect->setMaximumSize(QSize(80, 24));

        horizontalLayout_3->addWidget(Connect);

        Check = new QPushButton(widget);
        Check->setObjectName("Check");
        Check->setMaximumSize(QSize(80, 24));

        horizontalLayout_3->addWidget(Check);

        Disconnect = new QPushButton(widget);
        Disconnect->setObjectName("Disconnect");
        Disconnect->setMaximumSize(QSize(80, 24));

        horizontalLayout_3->addWidget(Disconnect);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(49, 16));

        verticalLayout_3->addWidget(label_3);

        Send = new QPushButton(widget);
        Send->setObjectName("Send");
        Send->setMaximumSize(QSize(80, 24));

        verticalLayout_3->addWidget(Send);


        horizontalLayout_5->addLayout(verticalLayout_3);

        SentText = new QTextEdit(widget);
        SentText->setObjectName("SentText");
        SentText->setMaximumSize(QSize(201, 61));

        horizontalLayout_5->addWidget(SentText);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        Clear = new QPushButton(widget);
        Clear->setObjectName("Clear");
        Clear->setMaximumSize(QSize(80, 24));

        verticalLayout_2->addWidget(Clear);


        horizontalLayout_6->addLayout(verticalLayout_2);

        RecievedText = new QTextEdit(widget);
        RecievedText->setObjectName("RecievedText");
        RecievedText->setMaximumSize(QSize(201, 61));

        horizontalLayout_6->addWidget(RecievedText);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 429, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port: ", nullptr));
        Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        Check->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
        Disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Send:", nullptr));
        Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Recieve:", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
