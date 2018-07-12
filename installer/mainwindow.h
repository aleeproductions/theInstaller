#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QPaintEvent>
#include <QPainter>
#include <QStyle>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QTimer>
#include <QStandardPaths>
#include <QDebug>
#include <QProcess>
#include <QLocalServer>
#include <QLocalSocket>
#include <QMessageBox>

#include <windows.h>
#include <shellapi.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_installOptions_clicked();

    void getInstallerMetadata();

    void setInstallPath();

    void on_cancelMetadataButton_clicked();

    void on_retryMetadataButton_clicked();

    void on_installEveryone_toggled(bool checked);

    void on_installButton_clicked();

    void on_installButton_2_clicked();

    void on_exitButton_clicked();

    void on_retryInstallButton_clicked();

private:
    Ui::MainWindow *ui;

    void paintEvent(QPaintEvent* event);

    QNetworkAccessManager mgr;
    QPixmap backgroundImage;
    QJsonObject metadata;
};

#endif // MAINWINDOW_H