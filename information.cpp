#include "information.h"
#include "ui_information.h"
#include<QtWidgets>
#include <QLineEdit>

Information::Information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    ui->playBtn->setStyleSheet(    "QPushButton{"
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
                                                       "}");
    ui->playerGroup4->setVisible(0) ;
    ui->playerGroup5->setVisible(0) ;
    ui->playerGroup6->setVisible(0) ;
    ui->playerGroup1->setStyleSheet("background-color : red; border-radius : 10px; border : 1px solid black ;") ;
    ui->playerGroup2->setStyleSheet("background-color : blue; border-radius : 10px; border : 1px solid black ;") ;
    ui->playerGroup3->setStyleSheet("background-color : green; border-radius : 10px; border : 1px solid black ;") ;
    ui->playerGroup4->setStyleSheet("background-color : yellow; border-radius : 10px; border : 1px solid black ;") ;
    ui->playerGroup5->setStyleSheet("background-color : purple; border-radius : 10px; border : 1px solid black ;") ;
    ui->playerGroup6->setStyleSheet("background-color : gray; border-radius : 10px; border : 1px solid black ;") ;
}

Information::~Information()
{
    delete ui;
}

std::vector<Player> Information::setInformation(){
    std::vector<Player> players ;
    int numberOfPlayers = ui->spinBox->value() ;
    players.resize(numberOfPlayers) ;

    players.at(0).setName(ui->Name1->text());
    players.at(0).setAge(ui->Age1->text().toUInt());
    players.at(1).setName(ui->Name2->text());
    players.at(1).setAge(ui->Age2->text().toUInt());
    players.at(2).setName(ui->Name3->text());
    players.at(2).setAge(ui->Age3->text().toUInt());
    if(numberOfPlayers >3){
        if(numberOfPlayers >=4){
            players.at(3).setName(ui->Name4->text());
            players.at(3).setAge(ui->Age4->text().toUInt());
        }
        if(numberOfPlayers >= 5){
            players.at(4).setName(ui->Name5->text());
            players.at(4).setAge(ui->Age5->text().toUInt());
        }
        if(numberOfPlayers == 6){
            players.at(5).setName(ui->Name6->text());
            players.at(5).setAge(ui->Age6->text().toUInt());
        }
    }
    return players ;
}


void Information::on_spinBox_valueChanged(int arg1)
{
    if(arg1 == 3){
        ui->playerGroup4->setVisible(0) ;
        ui->playerGroup5->setVisible(0) ;
        ui->playerGroup6->setVisible(0) ;
    }
    else if  (arg1 == 4){
        ui->playerGroup4->setVisible(1) ;
        ui->playerGroup5->setVisible(0) ;
        ui->playerGroup6->setVisible(0) ;
    }
    else if (arg1 == 5){
        ui->playerGroup4->setVisible(1) ;
        ui->playerGroup5->setVisible(1) ;
        ui->playerGroup6->setVisible(0) ;
    }
    else if(arg1 == 6){
        ui->playerGroup4->setVisible(1) ;
        ui->playerGroup5->setVisible(1) ;
        ui->playerGroup6->setVisible(1) ;
    }
}


void Information::on_playBtn_clicked()
{
    GameOutput* gameOutput = new GameOutput() ;
    gameOutput->show() ;
}

