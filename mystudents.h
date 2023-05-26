#ifndef MYSTUDENTS_H
#define MYSTUDENTS_H

#include <QMainWindow>
#include <QTableWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class Mystudents; }
QT_END_NAMESPACE

class Mystudents : public QMainWindow
{
    Q_OBJECT

public:
    Mystudents(QWidget *parent = nullptr);
    ~Mystudents();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::Mystudents *ui;

};
#endif // MYSTUDENTS_H
