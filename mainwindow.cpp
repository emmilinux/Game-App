#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_2->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_3->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_4->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_5->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_6->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_7->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_8->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_9->setGeometry(0, 0, this->width() / 3, this->height() / 3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *e)
{
    ui->pushButton->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_2->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_3->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_4->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_5->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_6->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_7->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_8->setGeometry(0, 0, this->width() / 3, this->height() / 3);
    ui->pushButton_9->setGeometry(0, 0, this->width() / 3, this->height() / 3);
}

void MainWindow::on_pushButton_clicked()
{
    arguments.clear();
    arguments << "sonic";
    process.execute("gamesview", arguments);
}

void MainWindow::on_pushButton_2_clicked()
{
    arguments.clear();
    arguments << "monkey";
    process.execute("gamesview", arguments);
}

void MainWindow::on_pushButton_3_clicked()
{
    arguments.clear();
    arguments << "craftower";
    process.execute("gamesview", arguments);
}

void MainWindow::on_pushButton_4_clicked()
{
    arguments.clear();
    arguments << "pacman";
    process.execute("gamesview", arguments);
}

void MainWindow::on_pushButton_5_clicked()
{
    arguments.clear();
    arguments << "stars";
    process.execute("gamesview", arguments);
}

void MainWindow::on_pushButton_6_clicked()
{
    arguments.clear();
    arguments << "snowball";
    process.execute("gamesview", arguments);
}

void MainWindow::on_pushButton_7_clicked()
{
    arguments.clear();
    arguments << "tetris";
    process.execute("gamesview", arguments);
}

void MainWindow::on_pushButton_8_clicked()
{
    arguments.clear();
    arguments << "bombit6";
    process.execute("gamesview", arguments);
}

void MainWindow::on_pushButton_9_clicked()
{
    arguments.clear();
    arguments << "mario";
    process.execute("gamesview", arguments);
}
