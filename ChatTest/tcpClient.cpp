#include "tcpClient.h"
#include "ui_tcpClient.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connectionState=false;
    connect(&socket,SIGNAL(readyRead()),this,SLOT(socketReadyRead()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Connect_clicked()
{
    socket.connectToHost(getIp(),getPort());
    connectionState=true;
}
void MainWindow::on_Disconnect_clicked()
{
    socket.disconnectFromHost();
    connectionState=false;
}

void MainWindow::socketReadyRead()
{
    QByteArray array;
    array = socket.readAll();
    int bytes = array.indexOf('\n') + 1;
    QByteArray message = array.left(bytes);
    array = array.mid(bytes);
    processMessage(message);
}

void MainWindow::on_Send_clicked()
{
    if(connectionState){
        QString data = ui->SentText->toPlainText();
        QByteArray ba =data.toLocal8Bit();
        const char* dataChar = ba.data();
        socket.write(dataChar);
    }
}

QString MainWindow::getIp()
{
    QString ip1 = QString::number(ui->IP1->value());
    QString ip2 = QString::number(ui->IP2->value());
    QString ip3 = QString::number(ui->IP3->value());
    QString ip4 = QString::number(ui->IP4->value());
    QString fullIP = ip1+"."+ip2+"."+ip3+"."+ip4;
    return fullIP;
}

quint16 MainWindow::getPort()
{
    quint16 port = ui->PORT->value();
    return port;
}

void MainWindow::processMessage(QByteArray& text)
{
    QString recievedText = QString::fromStdString(text.toStdString());
    ui->RecievedText->setText(recievedText);
}

void MainWindow::on_Clear_clicked()
{
    ui->RecievedText->clear();
}

