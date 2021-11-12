#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QDialog>

namespace Ui {
class testwindow;
}

class testwindow : public QDialog
{
    Q_OBJECT

public:
    explicit testwindow(QWidget *parent = nullptr);
    ~testwindow();

private slots:
    void on_btn2_clicked();

private:
    Ui::testwindow *ui;
};

#endif // TESTWINDOW_H
