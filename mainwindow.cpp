#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"qmessagebox.h"
#include"help.h"
#include"information.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString btnStyle =                                 "QPushButton{"
                                                       "background-color: #750000;"
                                                       "border: 2px solid white;"
                                                       "color: white;"
                                                       "font-size: 16px;"
                                                       "padding: 5px 10px;" "}"
                                                       "QPushButton:hover{"
                                                                            "border:2px solid blue;"
                                                                         "}"
                                                        "QPushButton:pressed{"
                                                                             "background-color: blue;"

                                                                             "}"
              ;
    ui->startBtn->setStyleSheet(btnStyle) ;
    ui->loadBtn->setStyleSheet(btnStyle) ;
    ui->helpBtn->setStyleSheet(btnStyle) ;
    ui->exitBtn->setStyleSheet(btnStyle) ;


    connect(ui->exitBtn, SIGNAL(clicked()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event); // Call the base class implementation

    int xCenter = ((ui->centralwidget->width() - ui->Logo->width()) / 2);
    int yCenter = ((ui->centralwidget->height() - ui->Logo->height()) / 2);
    ui->Logo->move(xCenter, yCenter - 100);
    ui->startBtn->move(xCenter + 20 , yCenter + 100) ;
    ui->loadBtn->move(xCenter + 20 , yCenter + 200) ;
    ui->helpBtn->move(xCenter + 20 , yCenter +300) ;
    ui->exitBtn->move(xCenter  + 20, yCenter + 400) ;

}

void MainWindow::on_startBtn_clicked()
{
    Information* info = new Information() ;
    info->setStyleSheet("background-color :  #EFE4B0; ") ;
    info->show() ;
}


void MainWindow::on_exitBtn_clicked()
{


}


void MainWindow::on_helpBtn_clicked()
{
    Help* help = new Help() ;
    help->show() ;

}

