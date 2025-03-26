#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QMainWindow>
#include <QtNetwork>
#include <stdexcept>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Connect_clicked();

    void on_Send_clicked();

    void on_Disconnect_clicked();

    void socketReadyRead();

    void on_Clear_clicked();

private:
    bool connectionState;
    QTcpSocket socket;
    Ui::MainWindow *ui;
    QString getIp();
    quint16 getPort();
    void processMessage(QByteArray& text);
};
#endif // TCPCLIENT_H
