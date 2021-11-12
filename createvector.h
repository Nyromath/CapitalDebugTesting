#ifndef CREATEVECTOR_H
#define CREATEVECTOR_H

#include <vector>
#include <QFile>
#include <string>
#include "defect.h"

QVector<defect> read_defects(){
    QVector<defect> defects;
    defect* d;

    QStringList fileData;
    QFile numbers("C:/Users/270121842/OneDrive - UP Education/Desktop/CS106/CapitalDebug/numbers.csv");

    if(numbers.open(QIODevice::ReadOnly)){
        QTextStream in(&numbers);
        while(!in.atEnd()){
            QString line = numbers.readLine().replace("\r\n","");
            fileData.clear();
            fileData.append(line.split(" , "));

            //reading into class
            d = new defect;
            d->set_number(fileData[0].toInt());
            d->set_name(fileData[1]);
            d->set_added(fileData[2].toInt(), fileData[3].toInt(), fileData[4].toInt());
            defects.push_back(*d);
        }
    }
    numbers.close();

    return defects;
}

#endif // CREATEVECTOR_H

