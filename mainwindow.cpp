#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_convertButton_clicked()
{
    if (ui->isUsingOne->isChecked()) {
        if (ui ->ToAllInput->text() == NULL)
        {
            ui->ToEurosResult->setText("0");
        }else {
            QString number_str = ui -> ToAllInput->text();
            long double number = number_str.toDouble();
            double result_euro = number / 83.84;
            double result_dollars = number / 77.38;
            double result_rubles = number / 1;
            double result_grivnas = number / 2.62;
            ui ->ToEurosResult->setText(QString::number(result_euro));
            ui ->ToDollarsResult->setText(QString::number(result_dollars));
            ui ->ToRublesResult->setText(QString::number(result_rubles));
            ui ->ToGrivnasResult->setText(QString::number(result_grivnas));
        }
    } else {
        if (ui ->ToEurosInput->text() == NULL)
        {
            ui->ToEurosResult->setText("0");
        }else {
            QString number_str = ui -> ToEurosInput->text();
            double number = number_str.toDouble();
            double result = number / 83.84;
            ui ->ToEurosResult->setText(QString::number(result));
        }

        if (ui -> ToDollarsInput->text() == NULL)
        {
            ui -> ToDollarsResult->setText("0");
        }else{
            QString number_str = ui -> ToDollarsInput->text();
            double number = number_str.toDouble();
            double result = number / 77.38;
            ui ->ToDollarsResult->setText(QString::number(result));
        }

        if (ui->ToRublesInput->text() == NULL) {
            ui->ToRublesResult->setText("0");
        }else {
            QString number_str = ui -> ToRublesInput->text();
            double number = number_str.toDouble();
            double result = number / 1;
            ui ->ToRublesResult->setText(QString::number(result));
        }

        if (ui->ToGrivnasInput->text() == NULL) {
            ui->ToGrivnasResult->setText("0");
        }else {
            QString number_str = ui -> ToGrivnasInput->text();
            double number = number_str.toDouble();
            double result = number / 2.62;
            ui ->ToGrivnasResult->setText(QString::number(result));
        }
    }
}

