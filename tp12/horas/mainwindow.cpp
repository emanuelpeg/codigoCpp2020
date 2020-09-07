#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    int dni = this->ui->spinBox->value();
    int cantHs = this->ui->spinBox_2->value();
    Horas hs(dni,cantHs);
    this->gestor.setHs(hs);
    Horas minHs = this->gestor.getMin();
    Horas maxHs = this->gestor.getMax();
    this->ui->label_4->setText(QString::number(minHs.getDNI()));
    this->ui->label_6->setText(QString::number(maxHs.getDNI()));
    this->ui->spinBox->setValue(0);
    this->ui->spinBox_2->setValue(0);
}
