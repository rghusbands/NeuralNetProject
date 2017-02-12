#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_selectImageButton_clicked()
{
    if(in_process){
        qDebug() << "In process()";
        return;
    }
    QString imgName = QFileDialog::getOpenFileName(this, "Select a file..", QDir::homePath());
    if (imgName == NULL){
        imgName = "Failed. Please try again...";
    }
    ui->selectImageLine->setText(imgName);
}

void MainWindow::on_selectNNButton_clicked()
{
    if(in_process){
        qDebug() << "In process()";
        return;
    }
    QString fileName = QFileDialog::getOpenFileName(this, "Select a file..", QDir::homePath());
    if (fileName == NULL){
        fileName = "Failed. Please try again...";
    }
    ui->selectNNLine->setText(fileName);
}

void MainWindow::on_process_clicked()
{
    qDebug() << "Starting process()";
    in_process = true;

    // Do work here

    in_process = false;
    qDebug() << "Ending process()";
}
