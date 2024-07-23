#ifndef GAMEOUTPUT_H
#define GAMEOUTPUT_H

#include <QWidget>

namespace Ui {
class GameOutput;
}

class GameOutput : public QWidget
{
    Q_OBJECT

public:
    explicit GameOutput(QWidget *parent = nullptr);
    ~GameOutput();

private:
    Ui::GameOutput *ui;
};

#endif // GAMEOUTPUT_H
