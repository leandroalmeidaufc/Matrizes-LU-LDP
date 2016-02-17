#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <calcdialog.h>
#include <seldialog.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_iniciar_clicked()
{
    setVisible(false);

    CalcDialog *calc = new CalcDialog(this);

    calc->setModal(true);
    calc->show();
    calc->exec();

    delete calc;
    destroy();
}

void MainWindow::on_pushButton_sel_clicked()
{
    setVisible(false);

    SELDialog *sel = new SELDialog(this);

    sel->setModal(true);
    sel->show();
    sel->exec();

    delete sel;
    destroy();
}
