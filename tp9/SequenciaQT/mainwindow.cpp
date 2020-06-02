#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->juego = new Juego();
    this->refresh();
}

void MainWindow::refresh() {
    this->juego->crearSecuencia();
    this->ui->label_2->setText(QString::number(this->juego->getPrimero()));
    this->ui->label->setText(QString::number(this->juego->getSegundo()));
    this->ui->label_3->setText(QString::number(this->juego->getCuarto()));
    this->ui->label_4->setText(QString::number(this->juego->getPuntaje()));
    this->ui->spinBox->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int valor = this->ui->spinBox->value();
    QMessageBox message(this);
    if (this->juego->isOk(valor)) {
        message.setText("Ganaste !!!");
    } else {
        message.setText("Perdiste !!!");
    }
    message.exec();
    this->refresh();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->refresh();
}
