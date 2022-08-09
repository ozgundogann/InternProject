#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMovie>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->toolBar_Left->setStyleSheet("QToolBar{background: rgb(240,238,173)}");
    ui->toolBar_Right->setStyleSheet("QToolBar{background: rgb(240,238,173)}");
    ui->statusbar->setStyleSheet("background: rgb(51,75,91); color: white");

    QLabel* label_GPS = new QLabel(this);
    QMovie* movieGPS = new QMovie(":/resourcesLeft/icons/Signals/Signals.gif");
    label_GPS->setMovie(movieGPS);
    ui->toolBar_Left->addWidget(label_GPS);
    movieGPS->start();

    QLabel* label_USB = new QLabel(this);
    QMovie* movieUSB = new QMovie(":/resourcesLeft/icons/Signals/USB signals.gif");
    label_USB->setMovie((movieUSB));
    ui->toolBar_Left->addWidget(label_USB);
    label_USB->setMinimumHeight(200);
    movieUSB->start();


//    QLabel* statusText = new QLabel(this);
//    statusText->setStyleSheet("QLabel{color : white;}");
//    statusText->setText("Hello");
//    ui->statusbar->addWidget(statusText);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_actionReset_hovered()
{
    ui->statusbar->showMessage("Hello");
}


void MainWindow::on_actionBack_hovered()
{
    ui->statusbar->showMessage("World");
}

