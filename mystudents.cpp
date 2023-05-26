#include "mystudents.h"
#include "ui_mystudents.h"
#include<QComboBox>
#include <iostream>
Mystudents::Mystudents(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Mystudents)
{
    ui->setupUi(this);

}

Mystudents::~Mystudents()
{
    delete ui;
}

void Mystudents::on_pushButton_clicked()
{
    int rowCount = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(rowCount+1);

    QTableWidgetItem *items []={
        new QTableWidgetItem(QString("Id %1").arg(rowCount)),
        new QTableWidgetItem(QString("Name %1").arg(rowCount)),
        new QTableWidgetItem(QString("Date %1").arg(rowCount)),
        new QTableWidgetItem

    };
    const size_t count =sizeof(items) / sizeof(QTableWidgetItem *);
    for(size_t column =0; column < count;column++){
        ui->tableWidget->setItem(rowCount,column,items[column]);

    QComboBox *ComboBox = new QComboBox;
    ComboBox->addItems(QStringList() <<"Excellent" << "Very Good" << "Good" << "Average good");
    ui->tableWidget->setCellWidget(rowCount,3,ComboBox);
    }
}

void Mystudents::on_pushButton_2_clicked()
{

    ui->tableWidget->removeRow(ui->tableWidget->currentRow());

}

void Mystudents::on_pushButton_3_clicked()
{
    const size_t count = sizeof(QTableWidgetItem *);
    for(size_t column =0; column < count;column++){
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
    }
}

