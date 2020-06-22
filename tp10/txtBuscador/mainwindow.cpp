#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QStandardItemModel>
#include <iostream>
#include <fstream>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setText("/");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_commandLinkButton_clicked()
{
    QDir directory(this->ui->lineEdit->text());
    QStringList files = directory.entryList(QStringList() << "*.txt",QDir::Files);

    QStandardItemModel * model = new QStandardItemModel();
    int i = 0;
    model->setColumnCount(2);
    model->setHorizontalHeaderItem(0, new QStandardItem("archivos"));
    model->setHorizontalHeaderItem(1, new QStandardItem("cantidad"));

    foreach(QString filename, files) {
        QStandardItem * item = new QStandardItem(filename);
        model->setItem(i, 0, item);
        model->setItem(i, 1, new QStandardItem(QString::number(0)));
        i++;
    }
    this->ui->tableView->setModel(model);
}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    QVariant item = this->ui->tableView->model()->data(index);
    QString filename = this->ui->lineEdit->text() + "/" + item.toString();
    std::ifstream archivo;
    archivo.open (filename.toStdString().c_str());
    std::string line;
    std::string totalline="";
    if (archivo.is_open())
    {
        while ( getline (archivo,line) )
        {
              totalline = totalline + line + '\n';
        }
        this->ui->textEdit->setText(QString(totalline.c_str()));
    }
    archivo.close();
}
