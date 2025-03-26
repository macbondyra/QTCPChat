#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>

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


    void on_StartStop_clicked(bool state);

    void newClient();

    void showMessage();

    void onClientDisconnected();

    void on_Send_clicked();

private:
    bool getClientID();
    QVector<QTcpSocket*> clients;
    QTcpServer server;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
