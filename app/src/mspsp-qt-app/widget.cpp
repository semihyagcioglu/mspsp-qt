#include "widget.h"
#include "ui_widget.h"
#include "QMessageBox"

int  startStopButtonStatus = 1; // 1: start, 0: stop

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnStartStop_clicked()
{
    /*QMessageBox msgBox;
    msgBox.setText(QString::number(startStopButtonStatus));
    msgBox.exec();*/

    if(startStopButtonStatus == 1 )
    {
        startStopButtonStatus = 0;
        ui->btnStartStop->setText("Stop");
        StartAlgorithm();

    }
    else if(startStopButtonStatus == 0)
    {
        startStopButtonStatus = 1;
        ui->btnStartStop->setText("Start");
        StopAlgorithm();
    }
}

void Widget::StartAlgorithm()
{
    ui->lblStatus->setText("Algorithm started");
}

void Widget::StopAlgorithm()
{
    ui->lblStatus->setText("Algorithm stopped");
}
