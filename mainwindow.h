#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *p = 0);
    ~MainWindow();

public:
    void mouseMoveEvent(QMouseEvent * evt) override; // inherited from QWidget

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
