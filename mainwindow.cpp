#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralWidget->layout()->setContentsMargins(0, 0, 0, 0);
    ui->webView->setUrl(QString("http://lvh.me:3000"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
