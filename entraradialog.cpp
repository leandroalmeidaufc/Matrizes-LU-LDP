#include "entraradialog.h"
#include "ui_entraradialog.h"
#include "seldialog.h"
#include "dialogmsg.h"

EntrarADialog::EntrarADialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EntrarADialog)
{
    ui->setupUi(this);
}

EntrarADialog::~EntrarADialog()
{
    delete ui;
}

void EntrarADialog::showEvent(QShowEvent *ev)
{
    QDialog::showEvent(ev);

    int n = ((SELDialog*) this->parent())->getN();

    ui->tableWidget_A->clear();

    int tamLinha = (ui->tableWidget_A->height()+40)/(n+1);
    int tamCol = (ui->tableWidget_A->width()+40)/(n+1);

    ui->tableWidget_A->setRowCount(n);
    ui->tableWidget_A->setColumnCount(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget_A->setItem(i, j, item);
        }
    }

    if(tamLinha > 25)
        for(int i = 0; i < n; i++)
            ui->tableWidget_A->setRowHeight(i, tamLinha);
    else
        for(int i = 0; i < n; i++)
            ui->tableWidget_A->setRowHeight(i, 25);

    if(tamCol > 78)
        for(int j = 0; j < n; j++)
            ui->tableWidget_A->setColumnWidth(j, tamCol);
    else
        for(int j = 0; j < n; j++)
            ui->tableWidget_A->setColumnWidth(j, 78);

}

void EntrarADialog::on_buttonBox_accepted()
{
    bool ok = true;
    int n = ((SELDialog*) this->parent())->getN();
    double **A = new double*[n];

    for(int i = 0; i < n; i++) {
        A[i] = new double[n];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            A[i][j] = ui->tableWidget_A->item(i, j)->text().toDouble(&ok);
            if(!ok) {
                DialogMsg *msg = new DialogMsg(this);

                msg->setModal(true);
                msg->setMsg(QString("Por favor, digite um valor válido para a matriz A!"));
                msg->show();
                msg->setFocus();
                msg->exec();

                delete msg;

                return;
            }
        }
    }

    ((SELDialog*) this->parent())->setA(A);

    this->accept();
}
