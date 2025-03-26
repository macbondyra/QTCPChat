#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&server,SIGNAL(newConnection()),this,SLOT(newClient()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_StartStop_clicked(bool state)
{
    if(state){
    QHostAddress address;
    address.setAddress("127.0.0.1");
    if(!server.isListening()){
        quint16 port = ui->PORT->value();
        server.listen(address,port);
        qDebug("Sluchanie");
    }
    }
    if(!state){
        if(server.isListening()){
            server.close();
            qDebug("Stop");
        }
    }
}

void MainWindow::newClient()
{
    QTcpSocket *client = server.nextPendingConnection();
    clients.push_back(client);
    QHostAddress adr = client->peerAddress();
    QString msgBack = "Hello client " + QString::number(clients.indexOf(client))+"\n";
    client->write(msgBack.toUtf8());
    connect(client,SIGNAL(readyRead()),this,SLOT(showMessage()));
    connect(client,SIGNAL(disconnected()),this,SLOT(onClientDisconnected()));
}

void MainWindow::showMessage()
{
    int clientID = getClientID();
    QString message = clients.at(clientID)->readAll();
    ui->RecievedText->setText(message);
}

void MainWindow::onClientDisconnected()
{
    int clientID = getClientID();
    clients.removeAt(clientID);
}

bool MainWindow::getClientID()
{
    QTcpSocket *client = static_cast<QTcpSocket*> (QObject::sender());
    return clients.indexOf(client);
}


void MainWindow::on_Send_clicked()
{
    QString data = ui->SentText->toPlainText();
    data.append("\n");
    QByteArray ba =data.toLocal8Bit();
    const char* message = ba.data();
    int clientID=ui->spinBox->value();
    clients.at(clientID)->write(message);
}

