#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "genkey.h"
#include "QPainter"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setObjectName("mainWindow");
    this->setStyleSheet("#mainWindow{border-image:url(:/background.jpeg);}");
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    char *key=genKey();
    ui->lineEdit->setText(QString::fromLocal8Bit(key));
    delete []key;
}
