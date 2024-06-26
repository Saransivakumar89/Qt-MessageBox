#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,"Title","Hi there",QMessageBox::Yes | QMessageBox::No);

    if(reply==QMessageBox::Yes)
        QApplication::quit();

    else
        qDebug()<<"No clicked";
}

