/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *PORT;
    QPushButton *StartStop;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *Send;
    QTextEdit *SentText;
    QHBoxLayout *horizontalLayout;
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
        MainWindow->resize(352, 279);
        MainWindow->setMaximumSize(QSize(376, 281));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(352, 236));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 295, 209));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(49, 16));

        horizontalLayout_3->addWidget(label_2);

        PORT = new QSpinBox(layoutWidget);
        PORT->setObjectName("PORT");
        PORT->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        PORT->setMaximum(99999);

        horizontalLayout_3->addWidget(PORT);

        StartStop = new QPushButton(layoutWidget);
        StartStop->setObjectName("StartStop");
        StartStop->setMaximumSize(QSize(80, 24));
        StartStop->setCheckable(true);
        StartStop->setChecked(false);

        horizontalLayout_3->addWidget(StartStop);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(49, 16));

        verticalLayout->addWidget(label_3);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName("spinBox");

        verticalLayout->addWidget(spinBox);

        Send = new QPushButton(layoutWidget);
        Send->setObjectName("Send");
        Send->setMaximumSize(QSize(80, 24));

        verticalLayout->addWidget(Send);


        horizontalLayout_2->addLayout(verticalLayout);

        SentText = new QTextEdit(layoutWidget);
        SentText->setObjectName("SentText");
        SentText->setMaximumSize(QSize(201, 61));

        horizontalLayout_2->addWidget(SentText);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        Clear = new QPushButton(layoutWidget);
        Clear->setObjectName("Clear");
        Clear->setMaximumSize(QSize(80, 24));

        verticalLayout_2->addWidget(Clear);


        horizontalLayout->addLayout(verticalLayout_2);

        RecievedText = new QTextEdit(layoutWidget);
        RecievedText->setObjectName("RecievedText");
        RecievedText->setMaximumSize(QSize(201, 61));

        horizontalLayout->addWidget(RecievedText);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 352, 21));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Port: ", nullptr));
        StartStop->setText(QCoreApplication::translate("MainWindow", "Start/Stop", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Send:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Client:", nullptr));
        Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Recieve:", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
