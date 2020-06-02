#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->juego = new Juego();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::verificar(int valor){
    int result = this->juego->verificar(valor);
    QMessageBox msg(this);
    if (result == 0) {
        msg.setText("Empate");
    } else if (result == 1) {
        msg.setText("Gano !!!");
    } else {
        msg.setText("Perdio :( ");
    }
    msg.exec();
    this->ui->label->setText(QString::number(this->juego->getPuntaje()));
}

void MainWindow::on_pushButton_3_clicked()
{
    this->verificar(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    this->verificar(1);
}

void MainWindow::on_pushButton_clicked()
{
    this->verificar(2);
}
