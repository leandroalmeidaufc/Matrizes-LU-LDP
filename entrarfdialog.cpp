#include "entrarfdialog.h"
#include "ui_entrarfdialog.h"
#include "seldialog.h"
#include "dialogmsg.h"

EntrarFDialog::EntrarFDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EntrarFDialog)
{
    ui->setupUi(this);
}

EntrarFDialog::~EntrarFDialog()
{
    delete ui;
}

void EntrarFDialog::showEvent(QShowEvent *ev)
{
    QDialog::showEvent(ev);

    int n = ((SELDialog*) this->parent())->getN();

    ui->tableWidget_f->clear();

    int tamLinha = (ui->tableWidget_f->height()+40)/(n+1);

    ui->tableWidget_f->setRowCount(n);
    ui->tableWidget_f->setColumnCount(1);

    for(int i = 0; i < n; i++) {
        QTableWidgetItem *item = new QTableWidgetItem();

        item->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget_f->setItem(i, 0, item);
    }

    if(tamLinha > 25)
        for(int i = 0; i < n; i++)
            ui->tableWidget_f->setRowHeight(i, tamLinha);
    else
        for(int i = 0; i < n; i++)
            ui->tableWidget_f->setRowHeight(i, 25);

    ui->tableWidget_f->setColumnWidth(0, 78);
}

void EntrarFDialog::on_buttonBox_accepted()
{
    bool ok = true;
    int n = ((SELDialog*) this->parent())->getN();
    double *f = new double[n];

    for(int i = 0; i < n; i++) {
        f[i] = ui->tableWidget_f->item(i, 0)->text().toDouble(&ok);
        if(!ok) {
            DialogMsg *msg = new DialogMsg(this);

            msg->setModal(true);
            msg->setMsg(QString("Por favor, digite um valor válido para o vetor f!"));
            msg->show();
            msg->setFocus();
            msg->exec();

            delete msg;

            return;
        }
    }

    ((SELDialog*) this->parent())->setF(f);

    this->accept();
}
