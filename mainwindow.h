#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"C:\Users\HP\Desktop\Programming\C++\Rakab\Rakab\Entity\Interface/Game.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void resizeEvent(QResizeEvent *event);

private slots:
    void on_startBtn_clicked();

    void on_exitBtn_clicked();

    void on_helpBtn_clicked();

private:
    Ui::MainWindow *ui;
    Game game ;

};
#endif // MAINWINDOW_H
