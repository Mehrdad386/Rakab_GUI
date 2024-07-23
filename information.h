#ifndef INFORMATION_H
#define INFORMATION_H
#include"C:\Users\HP\Desktop\Programming\C++\Rakab\Rakab\Entity\Interface/Player.h"
#include <QWidget>
//#include"C:\Users\HP\Desktop\Programming\C++\Rakab\Rakab\Entity\Interface/Player.h"
#include<vector>
namespace Ui {
class Information;
}

class Information : public QWidget
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = nullptr);
    ~Information();

    void setInformation( std::vector<Player>&) ;


private slots:



    void on_spinBox_valueChanged(int arg1);

    void on_playBtn_clicked();

private:
    Ui::Information *ui;

};

#endif // INFORMATION_H
