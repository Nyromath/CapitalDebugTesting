#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testwindow.h"
#include "defect.h"
#include "QMessageBox"
#include "createvector.h"
#include <QDebug>
#include <vector>
#include <QFile>
#include <QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_clicked(){
    QDate day = QDate::currentDate();
    QVector<defect> defects;

    defects = read_defects();

    /*QStringList fileData;
    QFile numbers("C:/Users/270121842/OneDrive - UP Education/Desktop/CS106/CapitalDebug/numbers.csv");

    if(numbers.open(QIODevice::ReadOnly)){
        QTextStream in(&numbers);
        while(!in.atEnd()){
            QString line = numbers.readLine();
            fileData.append(line.split(" , "));

            //reading into class
            d.set_number(fileData[0].toInt());
            d.set_name(fileData[1]);
            d.set_added(fileData[2].toInt(), fileData[3].toInt(), fileData[4].toInt());
            defects.push_back(d);
        }
    }
    numbers.close();*/

    for(int i=0; i < defects.size();i++){
        defects[i].output();
    }

    /*d.set_number(1);
    defects.push_back(d);

    d.set_number(2);
    defects.push_back(d);

    d.set_number(3);
    defects.push_back(d);

   if(numbers.open(QIODevice::WriteOnly)){
       QTextStream out(&numbers);
       for(auto element:defects){
           out << element.get_number();
           out << "\n";
       }
       numbers.close();
   }*/

    /*for(auto element:defects){
        qDebug() << element.get_number();
    }*/

    //window = new testwindow(this);
    //window->show();
}
