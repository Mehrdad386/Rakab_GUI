#include "gameoutput.h"
#include "ui_gameoutput.h"

GameOutput::GameOutput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameOutput)
{
    ui->setupUi(this);
}

GameOutput::~GameOutput()
{
    delete ui;
    ui->Map->setScaledContents(500) ;
}
