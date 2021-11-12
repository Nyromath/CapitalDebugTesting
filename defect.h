#ifndef DEFECT_H
#define DEFECT_H

#include <vector>
#include <QString>
#include <QDate>
#include <QDebug>

class defect
{
private:
    int number;
    QString name;
    QDate added;

public:

    void set_number(int i){
        number = i;
    }

    void set_name(QString n){
        name = n;
    }

    void set_added(int d, int m, int y){
        added.setDate(y, m, d);
    }

    void output(){
        qDebug() << number;
        qDebug() << name;
        qDebug() << added.day() << "/" << added.month() << "/" << added.year();
    }

};

#endif // DEFECT_H
