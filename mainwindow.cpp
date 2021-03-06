#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <QString>

MainWindow::MainWindow(QWidget *p) :
    QMainWindow(p),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Enable mouse tracking for all children widgets of this MainWindow.

    QList<QWidget *> widgets =  findChildren<QWidget*>();
    for (auto w : widgets) {
        w->setMouseTracking(true);
    }

    setMouseTracking(true);

}

void MainWindow::mouseMoveEvent(QMouseEvent * evt)
{
    ui->textScreenPosX->setText(QString::number(evt->globalX()));
    ui->textScreenPosY->setText(QString::number(evt->globalY()));

    ui->textWindowPosX->setText(QString::number(qRound(evt->windowPos().x())));
    ui->textWindowPosY->setText(QString::number(qRound(evt->windowPos().y())));

}

MainWindow::~MainWindow()
{
    delete ui;
}
