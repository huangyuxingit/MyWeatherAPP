﻿#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "weather.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void getWeatherFailedSlot();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Widget *ui;
    Weather *weather;
    bool isGetData=false;
};

#endif // WIDGET_H
