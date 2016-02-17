#include "seldialog.h"
#include "ui_seldialog.h"
#include "dialogmsg.h"
#include "entraradialog.h"
#include "entrarfdialog.h"
#include "LU.h"
#include "LDP.h"

#include <iostream>

SELDialog::SELDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SELDialog)
{
    ui->setupUi(this);
}

SELDialog::~SELDialog()
{
    delete ui;
}

void SELDialog::showEvent(QShowEvent *ev)
{
    QDialog::showEvent(ev);

    A = NULL;
    f = NULL;
    nAtual = -1;

    ui->groupBox_2->hide();
    ui->checkBox_erro->hide();
    ui->checkBox_passos->hide();
    ui->label_5->hide();

    ui->progressBar_t1->hide();
    ui->lp_t1->hide();
    ui->label_t1->hide();
    ui->frame_t1->hide();
    ui->progressBar_t2->hide();
    ui->lp_t2->hide();
    ui->label_t2->hide();
    ui->frame_t2->hide();
    ui->progressBar_t3->hide();
    ui->lp_t3->hide();
    ui->label_t3->hide();
    ui->frame_t3->hide();
    ui->progressBar_t4->hide();
    ui->lp_t4->hide();
    ui->label_t4->hide();
    ui->frame_t4->hide();
    ui->progressBar_t5->hide();
    ui->lp_t5->hide();
    ui->label_t5->hide();
    ui->frame_t5->hide();
    ui->progressBar_t6->hide();
    ui->lp_t6->hide();
    ui->label_t6->hide();
    ui->frame_t6->hide();
    ui->progressBar_t7->hide();
    ui->lp_t7->hide();
    ui->label_t7->hide();
    ui->frame_t7->hide();
    ui->progressBar_t8->hide();
    ui->lp_t8->hide();
    ui->label_t8->hide();
    ui->frame_t8->hide();
    ui->progressBar_t9->hide();
    ui->lp_t9->hide();
    ui->label_t9->hide();
    ui->frame_t9->hide();
    ui->progressBar_t10->hide();
    ui->lp_t10->hide();
    ui->label_t10->hide();
    ui->frame_t10->hide();

    ui->tableWidget_a_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_1->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget_a_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_2->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget_a_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_3->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget_a_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_4->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget_a_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_5->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget_a_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_6->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget_a_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_7->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget_a_8->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_8->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_8->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_8->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_8->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_8->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_8->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget_a_9->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_9->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_9->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_9->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_9->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_9->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_9->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget_a_10->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_d_10->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_f_10->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_l_10->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_p_10->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_dr_10->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_ud_10->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(int i = 1; i <= 12; i++) {
        ui->tabWidget->removeTab(0);
    }

    proxTab = 1;
    remover = false;

}

void SELDialog::setA(double **novoA) {

    if(A != NULL) {
        for(int i = 0; i < nAtual; i++) {
            delete [] A[i];
        }

        delete [] A;
    }

    A = novoA;

    if(ui->lineEdit_n->isEnabled()) {
        nAtual = ui->lineEdit_n->text().toInt();
        ui->lineEdit_n->setDisabled(true);
    }

}

void SELDialog::setF(double *novoF) {

    if(f != NULL)
        delete [] f;

    f = novoF;

    if(ui->lineEdit_n->isEnabled()) {
        nAtual = ui->lineEdit_n->text().toInt();
        ui->lineEdit_n->setDisabled(true);
    }

}

int SELDialog::getN() {
    return ui->lineEdit_n->text().toInt();
}

void SELDialog::on_pushButton_A_clicked()
{
    bool valido = true;

    ui->lineEdit_n->text().toInt(&valido);

    if(ui->lineEdit_n->text().isEmpty() || !valido) {
        DialogMsg *msg = new DialogMsg(this);

        msg->setModal(true);
        msg->setMsg(QString("Por favor, digite um valor válido para n!"));
        msg->show();
        msg->setFocus();
        msg->exec();

        delete msg;

        ui->lineEdit_n->setFocus();

        return;
    }

    EntrarADialog *entrarA = new EntrarADialog(this);

    entrarA->setModal(true);
    entrarA->show();
    entrarA->setFocus();
    entrarA->exec();

    delete entrarA;

    this->setFocus();

}

void SELDialog::on_pushButton_f_clicked()
{
    bool valido = true;

    ui->lineEdit_n->text().toInt(&valido);

    if(ui->lineEdit_n->text().isEmpty() || !valido) {
        DialogMsg *msg = new DialogMsg(this);

        msg->setModal(true);
        msg->setMsg(QString("Por favor, digite um valor válido para n!"));
        msg->show();
        msg->setFocus();
        msg->exec();

        delete msg;

        ui->lineEdit_n->setFocus();

        return;
    }

    EntrarFDialog *entrarF = new EntrarFDialog(this);

    entrarF->setModal(true);
    entrarF->show();
    entrarF->setFocus();
    entrarF->exec();

    delete entrarF;

    this->setFocus();
}

void SELDialog::on_pushButton_limpar_clicked()
{
    if(A != NULL) {
        for(int i = 0; i < nAtual; i++) {
            delete [] A[i];
        }

        delete [] A;

        A = NULL;
    }

    if(f != NULL) {
        delete [] f;
        f = NULL;
    }

    nAtual = -1;

    ui->lineEdit_n->setText("");
    ui->lineEdit_n->setEnabled(true);
    ui->radioButton_LU->setChecked(true);
}

void SELDialog::on_pushButton_calc_clicked()
{

    if(A == NULL) {
        DialogMsg *msg = new DialogMsg(this);

        msg->setModal(true);
        msg->setMsg(QString("Por favor, entre os valores da matriz coeficiente A!"));
        msg->show();
        msg->setFocus();
        msg->exec();

        delete msg;

        ui->pushButton_A->setFocus();

        return;
    }

    if(f == NULL) {
        DialogMsg *msg = new DialogMsg(this);

        msg->setModal(true);
        msg->setMsg(QString("Por favor, entre os valores do vetor constante f!"));
        msg->show();
        msg->setFocus();
        msg->exec();

        delete msg;

        ui->pushButton_f->setFocus();

        return;
    }

    QIcon q;
    std::string metodo;
    int escMetodo, prec = ui->spinBox_prec->value(), tamLinha = (ui->tableWidget_a_1->height()+25)/(nAtual+1), tamCol = (ui->tableWidget_a_1->width()+50)/(nAtual+1);

    if(ui->radioButton_LU->isChecked()) {
        metodo = "LU";
        escMetodo = 1;
    }
    else {
        metodo = "LDP";
        escMetodo = 2;
    }

    if(ui->tabWidget->count() == 0)
        ui->tabWidget->addTab(ui->tab, q, QString::fromStdString("Estatísticas"));

    if(remover)
        ui->tabWidget->removeTab(1);

    LU *lu = new LU(A, nAtual);
    LDP *ldp = new LDP(A, nAtual);

    double **L, **U, **D, **P, *d;

    switch(proxTab) {
        case 1:
            ui->tabWidget->addTab(ui->tab_1, q, QString::fromStdString("1. "+metodo));
            ui->label_t1->setText(QString::fromStdString("1. "+metodo));

            ui->l_prec_1->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(1);
            }

            proxTab++;

            ui->tableWidget_a_1->clear(); ui->tableWidget_a_1->setRowCount(nAtual); ui->tableWidget_a_1->setColumnCount(nAtual);
            ui->tableWidget_d_1->clear(); ui->tableWidget_d_1->setRowCount(nAtual); ui->tableWidget_d_1->setColumnCount(1);
            ui->tableWidget_f_1->clear(); ui->tableWidget_f_1->setRowCount(nAtual); ui->tableWidget_f_1->setColumnCount(1);
            ui->tableWidget_l_1->clear(); ui->tableWidget_l_1->setRowCount(nAtual); ui->tableWidget_l_1->setColumnCount(nAtual);
            ui->tableWidget_p_1->clear(); ui->tableWidget_p_1->setRowCount(nAtual); ui->tableWidget_p_1->setColumnCount(nAtual);
            ui->tableWidget_dr_1->clear(); ui->tableWidget_dr_1->setRowCount(nAtual); ui->tableWidget_dr_1->setColumnCount(1);
            ui->tableWidget_ud_1->clear(); ui->tableWidget_ud_1->setRowCount(nAtual); ui->tableWidget_ud_1->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_1->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_1->setItem(i, 0, item);
                ui->tableWidget_d_1->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_1->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_1->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_1->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_1->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_1->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_1->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_1->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_1->setRowHeight(i, 25);
                    ui->tableWidget_d_1->setRowHeight(i, 25);
                    ui->tableWidget_f_1->setRowHeight(i, 25);
                    ui->tableWidget_l_1->setRowHeight(i, 25);
                    ui->tableWidget_p_1->setRowHeight(i, 25);
                    ui->tableWidget_dr_1->setRowHeight(i, 25);
                    ui->tableWidget_ud_1->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_1->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_1->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_1->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_1->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_1->setColumnWidth(j, 62);
                    ui->tableWidget_l_1->setColumnWidth(j, 62);
                    ui->tableWidget_p_1->setColumnWidth(j, 62);
                    ui->tableWidget_ud_1->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_1->setText("Fatoração LU");
                    ui->label_U_1->setVisible(true);
                    ui->label_D_1->setVisible(false);
                    ui->label_P_1->setVisible(false);
                    ui->label_esq_1->setVisible(false);
                    ui->label_dir_1->setVisible(false);
                    ui->tableWidget_p_1->setVisible(false);

                    L = lu->getL();
                    U = lu->getU();
                    d = lu->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_1->setItem(i, j, item);
                            ui->tableWidget_ud_1->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_1->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_1->setText("Fatoração LDP");
                    ui->label_U_1->setVisible(false);
                    ui->label_D_1->setVisible(true);
                    ui->label_P_1->setVisible(true);
                    ui->label_esq_1->setVisible(true);
                    ui->label_dir_1->setVisible(true);
                    ui->tableWidget_p_1->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_1->setItem(i, j, item);
                            ui->tableWidget_ud_1->setItem(i, j, item2);
                            ui->tableWidget_p_1->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_1->setItem(i, 0, item);
                    }

                    break;
            }

            break;

        case 2:
            ui->tabWidget->addTab(ui->tab_2, q, QString::fromStdString("2. "+metodo));
            ui->label_t2->setText(QString::fromStdString("2. "+metodo));

            ui->l_prec_2->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(2);
            }

            proxTab++;

            ui->tableWidget_a_2->clear(); ui->tableWidget_a_2->setRowCount(nAtual); ui->tableWidget_a_2->setColumnCount(nAtual);
            ui->tableWidget_d_2->clear(); ui->tableWidget_d_2->setRowCount(nAtual); ui->tableWidget_d_2->setColumnCount(1);
            ui->tableWidget_f_2->clear(); ui->tableWidget_f_2->setRowCount(nAtual); ui->tableWidget_f_2->setColumnCount(1);
            ui->tableWidget_l_2->clear(); ui->tableWidget_l_2->setRowCount(nAtual); ui->tableWidget_l_2->setColumnCount(nAtual);
            ui->tableWidget_p_2->clear(); ui->tableWidget_p_2->setRowCount(nAtual); ui->tableWidget_p_2->setColumnCount(nAtual);
            ui->tableWidget_dr_2->clear(); ui->tableWidget_dr_2->setRowCount(nAtual); ui->tableWidget_dr_2->setColumnCount(1);
            ui->tableWidget_ud_2->clear(); ui->tableWidget_ud_2->setRowCount(nAtual); ui->tableWidget_ud_2->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_2->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_2->setItem(i, 0, item);
                ui->tableWidget_d_2->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_2->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_2->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_2->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_2->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_2->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_2->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_2->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_2->setRowHeight(i, 25);
                    ui->tableWidget_d_2->setRowHeight(i, 25);
                    ui->tableWidget_f_2->setRowHeight(i, 25);
                    ui->tableWidget_l_2->setRowHeight(i, 25);
                    ui->tableWidget_p_2->setRowHeight(i, 25);
                    ui->tableWidget_dr_2->setRowHeight(i, 25);
                    ui->tableWidget_ud_2->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_2->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_2->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_2->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_2->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_2->setColumnWidth(j, 62);
                    ui->tableWidget_l_2->setColumnWidth(j, 62);
                    ui->tableWidget_p_2->setColumnWidth(j, 62);
                    ui->tableWidget_ud_2->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_2->setText("Fatoração LU");
                    ui->label_U_2->setVisible(true);
                    ui->label_D_2->setVisible(false);
                    ui->label_P_2->setVisible(false);
                    ui->label_esq_2->setVisible(false);
                    ui->label_dir_2->setVisible(false);
                    ui->tableWidget_p_2->setVisible(false);

                    d = lu->resolver(f);
                    L = lu->getL();
                    U = lu->getU();

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_2->setItem(i, j, item);
                            ui->tableWidget_ud_2->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_2->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_2->setText("Fatoração LDP");
                    ui->label_U_2->setVisible(false);
                    ui->label_D_2->setVisible(true);
                    ui->label_P_2->setVisible(true);
                    ui->label_esq_2->setVisible(true);
                    ui->label_dir_2->setVisible(true);
                    ui->tableWidget_p_2->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_2->setItem(i, j, item);
                            ui->tableWidget_ud_2->setItem(i, j, item2);
                            ui->tableWidget_p_2->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_2->setItem(i, 0, item);
                    }

                    break;
            }

            break;
        case 3:
            ui->tabWidget->addTab(ui->tab_3, q, QString::fromStdString("3. "+metodo));
            ui->label_t3->setText(QString::fromStdString("3. "+metodo));

            ui->l_prec_3->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(3);
            }

            proxTab++;

            ui->tableWidget_a_3->clear(); ui->tableWidget_a_3->setRowCount(nAtual); ui->tableWidget_a_3->setColumnCount(nAtual);
            ui->tableWidget_d_3->clear(); ui->tableWidget_d_3->setRowCount(nAtual); ui->tableWidget_d_3->setColumnCount(1);
            ui->tableWidget_f_3->clear(); ui->tableWidget_f_3->setRowCount(nAtual); ui->tableWidget_f_3->setColumnCount(1);
            ui->tableWidget_l_3->clear(); ui->tableWidget_l_3->setRowCount(nAtual); ui->tableWidget_l_3->setColumnCount(nAtual);
            ui->tableWidget_p_3->clear(); ui->tableWidget_p_3->setRowCount(nAtual); ui->tableWidget_p_3->setColumnCount(nAtual);
            ui->tableWidget_dr_3->clear(); ui->tableWidget_dr_3->setRowCount(nAtual); ui->tableWidget_dr_3->setColumnCount(1);
            ui->tableWidget_ud_3->clear(); ui->tableWidget_ud_3->setRowCount(nAtual); ui->tableWidget_ud_3->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_3->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_3->setItem(i, 0, item);
                ui->tableWidget_d_3->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_3->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_3->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_3->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_3->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_3->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_3->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_3->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_3->setRowHeight(i, 25);
                    ui->tableWidget_d_3->setRowHeight(i, 25);
                    ui->tableWidget_f_3->setRowHeight(i, 25);
                    ui->tableWidget_l_3->setRowHeight(i, 25);
                    ui->tableWidget_p_3->setRowHeight(i, 25);
                    ui->tableWidget_dr_3->setRowHeight(i, 25);
                    ui->tableWidget_ud_3->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_3->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_3->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_3->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_3->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_3->setColumnWidth(j, 62);
                    ui->tableWidget_l_3->setColumnWidth(j, 62);
                    ui->tableWidget_p_3->setColumnWidth(j, 62);
                    ui->tableWidget_ud_3->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_3->setText("Fatoração LU");
                    ui->label_U_3->setVisible(true);
                    ui->label_D_3->setVisible(false);
                    ui->label_P_3->setVisible(false);
                    ui->label_esq_3->setVisible(false);
                    ui->label_dir_3->setVisible(false);
                    ui->tableWidget_p_3->setVisible(false);

                    d = lu->resolver(f);
                    L = lu->getL();
                    U = lu->getU();

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_3->setItem(i, j, item);
                            ui->tableWidget_ud_3->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_3->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_3->setText("Fatoração LDP");
                    ui->label_U_3->setVisible(false);
                    ui->label_D_3->setVisible(true);
                    ui->label_P_3->setVisible(true);
                    ui->label_esq_3->setVisible(true);
                    ui->label_dir_3->setVisible(true);
                    ui->tableWidget_p_3->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_3->setItem(i, j, item);
                            ui->tableWidget_ud_3->setItem(i, j, item2);
                            ui->tableWidget_p_3->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_3->setItem(i, 0, item);
                    }

                    break;
            }

            break;
        case 4:
            ui->tabWidget->addTab(ui->tab_4, q, QString::fromStdString("4. "+metodo));
            ui->label_t4->setText(QString::fromStdString("4. "+metodo));

            ui->l_prec_4->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(4);
            }

            proxTab++;

            ui->tableWidget_a_4->clear(); ui->tableWidget_a_4->setRowCount(nAtual); ui->tableWidget_a_4->setColumnCount(nAtual);
            ui->tableWidget_d_4->clear(); ui->tableWidget_d_4->setRowCount(nAtual); ui->tableWidget_d_4->setColumnCount(1);
            ui->tableWidget_f_4->clear(); ui->tableWidget_f_4->setRowCount(nAtual); ui->tableWidget_f_4->setColumnCount(1);
            ui->tableWidget_l_4->clear(); ui->tableWidget_l_4->setRowCount(nAtual); ui->tableWidget_l_4->setColumnCount(nAtual);
            ui->tableWidget_p_4->clear(); ui->tableWidget_p_4->setRowCount(nAtual); ui->tableWidget_p_4->setColumnCount(nAtual);
            ui->tableWidget_dr_4->clear(); ui->tableWidget_dr_4->setRowCount(nAtual); ui->tableWidget_dr_4->setColumnCount(1);
            ui->tableWidget_ud_4->clear(); ui->tableWidget_ud_4->setRowCount(nAtual); ui->tableWidget_ud_4->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_4->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_4->setItem(i, 0, item);
                ui->tableWidget_d_4->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_4->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_4->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_4->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_4->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_4->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_4->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_4->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_4->setRowHeight(i, 25);
                    ui->tableWidget_d_4->setRowHeight(i, 25);
                    ui->tableWidget_f_4->setRowHeight(i, 25);
                    ui->tableWidget_l_4->setRowHeight(i, 25);
                    ui->tableWidget_p_4->setRowHeight(i, 25);
                    ui->tableWidget_dr_4->setRowHeight(i, 25);
                    ui->tableWidget_ud_4->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_4->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_4->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_4->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_4->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_4->setColumnWidth(j, 62);
                    ui->tableWidget_l_4->setColumnWidth(j, 62);
                    ui->tableWidget_p_4->setColumnWidth(j, 62);
                    ui->tableWidget_ud_4->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_4->setText("Fatoração LU");
                    ui->label_U_4->setVisible(true);
                    ui->label_D_4->setVisible(false);
                    ui->label_P_4->setVisible(false);
                    ui->label_esq_4->setVisible(false);
                    ui->label_dir_4->setVisible(false);
                    ui->tableWidget_p_4->setVisible(false);

                    d = lu->resolver(f);
                    L = lu->getL();
                    U = lu->getU();

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_4->setItem(i, j, item);
                            ui->tableWidget_ud_4->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_4->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_4->setText("Fatoração LDP");
                    ui->label_U_4->setVisible(false);
                    ui->label_D_4->setVisible(true);
                    ui->label_P_4->setVisible(true);
                    ui->label_esq_4->setVisible(true);
                    ui->label_dir_4->setVisible(true);
                    ui->tableWidget_p_4->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_4->setItem(i, j, item);
                            ui->tableWidget_ud_4->setItem(i, j, item2);
                            ui->tableWidget_p_4->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_4->setItem(i, 0, item);
                    }

                    break;
            }

            break;
        case 5:
            ui->tabWidget->addTab(ui->tab_5, q, QString::fromStdString("5. "+metodo));
            ui->label_t5->setText(QString::fromStdString("5. "+metodo));

            ui->l_prec_5->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(5);
            }

            proxTab++;

            ui->tableWidget_a_5->clear(); ui->tableWidget_a_5->setRowCount(nAtual); ui->tableWidget_a_5->setColumnCount(nAtual);
            ui->tableWidget_d_5->clear(); ui->tableWidget_d_5->setRowCount(nAtual); ui->tableWidget_d_5->setColumnCount(1);
            ui->tableWidget_f_5->clear(); ui->tableWidget_f_5->setRowCount(nAtual); ui->tableWidget_f_5->setColumnCount(1);
            ui->tableWidget_l_5->clear(); ui->tableWidget_l_5->setRowCount(nAtual); ui->tableWidget_l_5->setColumnCount(nAtual);
            ui->tableWidget_p_5->clear(); ui->tableWidget_p_5->setRowCount(nAtual); ui->tableWidget_p_5->setColumnCount(nAtual);
            ui->tableWidget_dr_5->clear(); ui->tableWidget_dr_5->setRowCount(nAtual); ui->tableWidget_dr_5->setColumnCount(1);
            ui->tableWidget_ud_5->clear(); ui->tableWidget_ud_5->setRowCount(nAtual); ui->tableWidget_ud_5->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_5->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_5->setItem(i, 0, item);
                ui->tableWidget_d_5->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_5->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_5->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_5->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_5->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_5->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_5->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_5->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_5->setRowHeight(i, 25);
                    ui->tableWidget_d_5->setRowHeight(i, 25);
                    ui->tableWidget_f_5->setRowHeight(i, 25);
                    ui->tableWidget_l_5->setRowHeight(i, 25);
                    ui->tableWidget_p_5->setRowHeight(i, 25);
                    ui->tableWidget_dr_5->setRowHeight(i, 25);
                    ui->tableWidget_ud_5->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_5->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_5->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_5->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_5->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_5->setColumnWidth(j, 62);
                    ui->tableWidget_l_5->setColumnWidth(j, 62);
                    ui->tableWidget_p_5->setColumnWidth(j, 62);
                    ui->tableWidget_ud_5->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_5->setText("Fatoração LU");
                    ui->label_U_5->setVisible(true);
                    ui->label_D_5->setVisible(false);
                    ui->label_P_5->setVisible(false);
                    ui->label_esq_5->setVisible(false);
                    ui->label_dir_5->setVisible(false);
                    ui->tableWidget_p_5->setVisible(false);

                    d = lu->resolver(f);
                    L = lu->getL();
                    U = lu->getU();

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_5->setItem(i, j, item);
                            ui->tableWidget_ud_5->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_5->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_5->setText("Fatoração LDP");
                    ui->label_U_5->setVisible(false);
                    ui->label_D_5->setVisible(true);
                    ui->label_P_5->setVisible(true);
                    ui->label_esq_5->setVisible(true);
                    ui->label_dir_5->setVisible(true);
                    ui->tableWidget_p_5->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_5->setItem(i, j, item);
                            ui->tableWidget_ud_5->setItem(i, j, item2);
                            ui->tableWidget_p_5->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_5->setItem(i, 0, item);
                    }

                    break;
            }

            break;
        case 6:
            ui->tabWidget->addTab(ui->tab_6, q, QString::fromStdString("6. "+metodo));
            ui->label_t6->setText(QString::fromStdString("6. "+metodo));

            ui->l_prec_6->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(6);
            }

            proxTab++;

            ui->tableWidget_a_6->clear(); ui->tableWidget_a_6->setRowCount(nAtual); ui->tableWidget_a_6->setColumnCount(nAtual);
            ui->tableWidget_d_6->clear(); ui->tableWidget_d_6->setRowCount(nAtual); ui->tableWidget_d_6->setColumnCount(1);
            ui->tableWidget_f_6->clear(); ui->tableWidget_f_6->setRowCount(nAtual); ui->tableWidget_f_6->setColumnCount(1);
            ui->tableWidget_l_6->clear(); ui->tableWidget_l_6->setRowCount(nAtual); ui->tableWidget_l_6->setColumnCount(nAtual);
            ui->tableWidget_p_6->clear(); ui->tableWidget_p_6->setRowCount(nAtual); ui->tableWidget_p_6->setColumnCount(nAtual);
            ui->tableWidget_dr_6->clear(); ui->tableWidget_dr_6->setRowCount(nAtual); ui->tableWidget_dr_6->setColumnCount(1);
            ui->tableWidget_ud_6->clear(); ui->tableWidget_ud_6->setRowCount(nAtual); ui->tableWidget_ud_6->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_6->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_6->setItem(i, 0, item);
                ui->tableWidget_d_6->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_6->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_6->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_6->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_6->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_6->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_6->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_6->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_6->setRowHeight(i, 25);
                    ui->tableWidget_d_6->setRowHeight(i, 25);
                    ui->tableWidget_f_6->setRowHeight(i, 25);
                    ui->tableWidget_l_6->setRowHeight(i, 25);
                    ui->tableWidget_p_6->setRowHeight(i, 25);
                    ui->tableWidget_dr_6->setRowHeight(i, 25);
                    ui->tableWidget_ud_6->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_6->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_6->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_6->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_6->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_6->setColumnWidth(j, 62);
                    ui->tableWidget_l_6->setColumnWidth(j, 62);
                    ui->tableWidget_p_6->setColumnWidth(j, 62);
                    ui->tableWidget_ud_6->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_6->setText("Fatoração LU");
                    ui->label_U_6->setVisible(true);
                    ui->label_D_6->setVisible(false);
                    ui->label_P_6->setVisible(false);
                    ui->label_esq_6->setVisible(false);
                    ui->label_dir_6->setVisible(false);
                    ui->tableWidget_p_6->setVisible(false);

                    d = lu->resolver(f);
                    L = lu->getL();
                    U = lu->getU();

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_6->setItem(i, j, item);
                            ui->tableWidget_ud_6->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_6->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_6->setText("Fatoração LDP");
                    ui->label_U_6->setVisible(false);
                    ui->label_D_6->setVisible(true);
                    ui->label_P_6->setVisible(true);
                    ui->label_esq_6->setVisible(true);
                    ui->label_dir_6->setVisible(true);
                    ui->tableWidget_p_6->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_6->setItem(i, j, item);
                            ui->tableWidget_ud_6->setItem(i, j, item2);
                            ui->tableWidget_p_6->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_6->setItem(i, 0, item);
                    }

                    break;
            }

            break;
        case 7:
            ui->tabWidget->addTab(ui->tab_7, q, QString::fromStdString("7. "+metodo));
            ui->label_t7->setText(QString::fromStdString("7. "+metodo));

            ui->l_prec_7->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(7);
            }

            proxTab++;

            ui->tableWidget_a_7->clear(); ui->tableWidget_a_7->setRowCount(nAtual); ui->tableWidget_a_7->setColumnCount(nAtual);
            ui->tableWidget_d_7->clear(); ui->tableWidget_d_7->setRowCount(nAtual); ui->tableWidget_d_7->setColumnCount(1);
            ui->tableWidget_f_7->clear(); ui->tableWidget_f_7->setRowCount(nAtual); ui->tableWidget_f_7->setColumnCount(1);
            ui->tableWidget_l_7->clear(); ui->tableWidget_l_7->setRowCount(nAtual); ui->tableWidget_l_7->setColumnCount(nAtual);
            ui->tableWidget_p_7->clear(); ui->tableWidget_p_7->setRowCount(nAtual); ui->tableWidget_p_7->setColumnCount(nAtual);
            ui->tableWidget_dr_7->clear(); ui->tableWidget_dr_7->setRowCount(nAtual); ui->tableWidget_dr_7->setColumnCount(1);
            ui->tableWidget_ud_7->clear(); ui->tableWidget_ud_7->setRowCount(nAtual); ui->tableWidget_ud_7->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_7->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_7->setItem(i, 0, item);
                ui->tableWidget_d_7->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_7->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_7->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_7->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_7->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_7->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_7->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_7->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_7->setRowHeight(i, 25);
                    ui->tableWidget_d_7->setRowHeight(i, 25);
                    ui->tableWidget_f_7->setRowHeight(i, 25);
                    ui->tableWidget_l_7->setRowHeight(i, 25);
                    ui->tableWidget_p_7->setRowHeight(i, 25);
                    ui->tableWidget_dr_7->setRowHeight(i, 25);
                    ui->tableWidget_ud_7->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_7->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_7->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_7->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_7->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_7->setColumnWidth(j, 62);
                    ui->tableWidget_l_7->setColumnWidth(j, 62);
                    ui->tableWidget_p_7->setColumnWidth(j, 62);
                    ui->tableWidget_ud_7->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_7->setText("Fatoração LU");
                    ui->label_U_7->setVisible(true);
                    ui->label_D_7->setVisible(false);
                    ui->label_P_7->setVisible(false);
                    ui->label_esq_7->setVisible(false);
                    ui->label_dir_7->setVisible(false);
                    ui->tableWidget_p_7->setVisible(false);

                    d = lu->resolver(f);
                    L = lu->getL();
                    U = lu->getU();

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_7->setItem(i, j, item);
                            ui->tableWidget_ud_7->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_7->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_7->setText("Fatoração LDP");
                    ui->label_U_7->setVisible(false);
                    ui->label_D_7->setVisible(true);
                    ui->label_P_7->setVisible(true);
                    ui->label_esq_7->setVisible(true);
                    ui->label_dir_7->setVisible(true);
                    ui->tableWidget_p_7->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_7->setItem(i, j, item);
                            ui->tableWidget_ud_7->setItem(i, j, item2);
                            ui->tableWidget_p_7->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_7->setItem(i, 0, item);
                    }

                    break;
            }

            break;
        case 8:
            ui->tabWidget->addTab(ui->tab_8, q, QString::fromStdString("8. "+metodo));
            ui->label_t8->setText(QString::fromStdString("8. "+metodo));

            ui->l_prec_8->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(8);
            }

            proxTab++;

            ui->tableWidget_a_8->clear(); ui->tableWidget_a_8->setRowCount(nAtual); ui->tableWidget_a_8->setColumnCount(nAtual);
            ui->tableWidget_d_8->clear(); ui->tableWidget_d_8->setRowCount(nAtual); ui->tableWidget_d_8->setColumnCount(1);
            ui->tableWidget_f_8->clear(); ui->tableWidget_f_8->setRowCount(nAtual); ui->tableWidget_f_8->setColumnCount(1);
            ui->tableWidget_l_8->clear(); ui->tableWidget_l_8->setRowCount(nAtual); ui->tableWidget_l_8->setColumnCount(nAtual);
            ui->tableWidget_p_8->clear(); ui->tableWidget_p_8->setRowCount(nAtual); ui->tableWidget_p_8->setColumnCount(nAtual);
            ui->tableWidget_dr_8->clear(); ui->tableWidget_dr_8->setRowCount(nAtual); ui->tableWidget_dr_8->setColumnCount(1);
            ui->tableWidget_ud_8->clear(); ui->tableWidget_ud_8->setRowCount(nAtual); ui->tableWidget_ud_8->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_8->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_8->setItem(i, 0, item);
                ui->tableWidget_d_8->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_8->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_8->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_8->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_8->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_8->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_8->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_8->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_8->setRowHeight(i, 25);
                    ui->tableWidget_d_8->setRowHeight(i, 25);
                    ui->tableWidget_f_8->setRowHeight(i, 25);
                    ui->tableWidget_l_8->setRowHeight(i, 25);
                    ui->tableWidget_p_8->setRowHeight(i, 25);
                    ui->tableWidget_dr_8->setRowHeight(i, 25);
                    ui->tableWidget_ud_8->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_8->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_8->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_8->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_8->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_8->setColumnWidth(j, 62);
                    ui->tableWidget_l_8->setColumnWidth(j, 62);
                    ui->tableWidget_p_8->setColumnWidth(j, 62);
                    ui->tableWidget_ud_8->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_8->setText("Fatoração LU");
                    ui->label_U_8->setVisible(true);
                    ui->label_D_8->setVisible(false);
                    ui->label_P_8->setVisible(false);
                    ui->label_esq_8->setVisible(false);
                    ui->label_dir_8->setVisible(false);
                    ui->tableWidget_p_8->setVisible(false);

                    d = lu->resolver(f);
                    L = lu->getL();
                    U = lu->getU();

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_8->setItem(i, j, item);
                            ui->tableWidget_ud_8->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_8->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_8->setText("Fatoração LDP");
                    ui->label_U_8->setVisible(false);
                    ui->label_D_8->setVisible(true);
                    ui->label_P_8->setVisible(true);
                    ui->label_esq_8->setVisible(true);
                    ui->label_dir_8->setVisible(true);
                    ui->tableWidget_p_8->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_8->setItem(i, j, item);
                            ui->tableWidget_ud_8->setItem(i, j, item2);
                            ui->tableWidget_p_8->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_8->setItem(i, 0, item);
                    }

                    break;
            }

            break;
        case 9:
            ui->tabWidget->addTab(ui->tab_9, q, QString::fromStdString("9. "+metodo));
            ui->label_t9->setText(QString::fromStdString("9. "+metodo));

            ui->l_prec_9->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(9);
            }

            proxTab++;

            ui->tableWidget_a_9->clear(); ui->tableWidget_a_9->setRowCount(nAtual); ui->tableWidget_a_9->setColumnCount(nAtual);
            ui->tableWidget_d_9->clear(); ui->tableWidget_d_9->setRowCount(nAtual); ui->tableWidget_d_9->setColumnCount(1);
            ui->tableWidget_f_9->clear(); ui->tableWidget_f_9->setRowCount(nAtual); ui->tableWidget_f_9->setColumnCount(1);
            ui->tableWidget_l_9->clear(); ui->tableWidget_l_9->setRowCount(nAtual); ui->tableWidget_l_9->setColumnCount(nAtual);
            ui->tableWidget_p_9->clear(); ui->tableWidget_p_9->setRowCount(nAtual); ui->tableWidget_p_9->setColumnCount(nAtual);
            ui->tableWidget_dr_9->clear(); ui->tableWidget_dr_9->setRowCount(nAtual); ui->tableWidget_dr_9->setColumnCount(1);
            ui->tableWidget_ud_9->clear(); ui->tableWidget_ud_9->setRowCount(nAtual); ui->tableWidget_ud_9->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_9->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_9->setItem(i, 0, item);
                ui->tableWidget_d_9->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_9->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_9->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_9->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_9->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_9->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_9->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_9->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_9->setRowHeight(i, 25);
                    ui->tableWidget_d_9->setRowHeight(i, 25);
                    ui->tableWidget_f_9->setRowHeight(i, 25);
                    ui->tableWidget_l_9->setRowHeight(i, 25);
                    ui->tableWidget_p_9->setRowHeight(i, 25);
                    ui->tableWidget_dr_9->setRowHeight(i, 25);
                    ui->tableWidget_ud_9->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_9->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_9->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_9->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_9->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_9->setColumnWidth(j, 62);
                    ui->tableWidget_l_9->setColumnWidth(j, 62);
                    ui->tableWidget_p_9->setColumnWidth(j, 62);
                    ui->tableWidget_ud_9->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_9->setText("Fatoração LU");
                    ui->label_U_9->setVisible(true);
                    ui->label_D_9->setVisible(false);
                    ui->label_P_9->setVisible(false);
                    ui->label_esq_9->setVisible(false);
                    ui->label_dir_9->setVisible(false);
                    ui->tableWidget_p_9->setVisible(false);

                    d = lu->resolver(f);
                    L = lu->getL();
                    U = lu->getU();

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_9->setItem(i, j, item);
                            ui->tableWidget_ud_9->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_9->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_9->setText("Fatoração LDP");
                    ui->label_U_9->setVisible(false);
                    ui->label_D_9->setVisible(true);
                    ui->label_P_9->setVisible(true);
                    ui->label_esq_9->setVisible(true);
                    ui->label_dir_9->setVisible(true);
                    ui->tableWidget_p_9->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_9->setItem(i, j, item);
                            ui->tableWidget_ud_9->setItem(i, j, item2);
                            ui->tableWidget_p_9->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_9->setItem(i, 0, item);
                    }

                    break;
            }

            break;
        case 10:
            ui->tabWidget->addTab(ui->tab_10, q, QString::fromStdString("10. "+metodo));
            ui->label_t10->setText(QString::fromStdString("10. "+metodo));

            ui->l_prec_10->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(10);
            }

            proxTab = 1;
            remover = true;

            ui->tableWidget_a_10->clear(); ui->tableWidget_a_10->setRowCount(nAtual); ui->tableWidget_a_10->setColumnCount(nAtual);
            ui->tableWidget_d_10->clear(); ui->tableWidget_d_10->setRowCount(nAtual); ui->tableWidget_d_10->setColumnCount(1);
            ui->tableWidget_f_10->clear(); ui->tableWidget_f_10->setRowCount(nAtual); ui->tableWidget_f_10->setColumnCount(1);
            ui->tableWidget_l_10->clear(); ui->tableWidget_l_10->setRowCount(nAtual); ui->tableWidget_l_10->setColumnCount(nAtual);
            ui->tableWidget_p_10->clear(); ui->tableWidget_p_10->setRowCount(nAtual); ui->tableWidget_p_10->setColumnCount(nAtual);
            ui->tableWidget_dr_10->clear(); ui->tableWidget_dr_10->setRowCount(nAtual); ui->tableWidget_dr_10->setColumnCount(1);
            ui->tableWidget_ud_10->clear(); ui->tableWidget_ud_10->setRowCount(nAtual); ui->tableWidget_ud_10->setColumnCount(nAtual);

            for(int i = 0; i < nAtual; i++) {
                for(int j = 0; j < nAtual; j++) {
                    QTableWidgetItem *item = new  QTableWidgetItem(QString::number(A[i][j], 'f', prec));

                    item->setTextAlignment(Qt::AlignCenter);
                    ui->tableWidget_a_10->setItem(i, j, item);
                }
            }

            for(int i = 0; i < nAtual; i++) {
                QTableWidgetItem *item = new  QTableWidgetItem(QString::number(f[i], 'f', prec));
                QTableWidgetItem *item2 = new  QTableWidgetItem(QString("d")+QString::number(i+1));

                item->setTextAlignment(Qt::AlignCenter);
                item2->setTextAlignment(Qt::AlignCenter);

                ui->tableWidget_f_10->setItem(i, 0, item);
                ui->tableWidget_d_10->setItem(i, 0, item2);
            }

            if(tamLinha > 25)
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_10->setRowHeight(i, tamLinha);
                    ui->tableWidget_d_10->setRowHeight(i, tamLinha);
                    ui->tableWidget_f_10->setRowHeight(i, tamLinha);
                    ui->tableWidget_l_10->setRowHeight(i, tamLinha);
                    ui->tableWidget_p_10->setRowHeight(i, tamLinha);
                    ui->tableWidget_dr_10->setRowHeight(i, tamLinha);
                    ui->tableWidget_ud_10->setRowHeight(i, tamLinha);
                }
            else
                for(int i = 0; i < nAtual; i++) {
                    ui->tableWidget_a_10->setRowHeight(i, 25);
                    ui->tableWidget_d_10->setRowHeight(i, 25);
                    ui->tableWidget_f_10->setRowHeight(i, 25);
                    ui->tableWidget_l_10->setRowHeight(i, 25);
                    ui->tableWidget_p_10->setRowHeight(i, 25);
                    ui->tableWidget_dr_10->setRowHeight(i, 25);
                    ui->tableWidget_ud_10->setRowHeight(i, 25);
                }

            if(tamCol > 62)
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_10->setColumnWidth(j, tamCol);
                    ui->tableWidget_l_10->setColumnWidth(j, tamCol);
                    ui->tableWidget_p_10->setColumnWidth(j, tamCol);
                    ui->tableWidget_ud_10->setColumnWidth(j, tamCol);
                }
            else
                for(int j = 0; j < nAtual; j++) {
                    ui->tableWidget_a_10->setColumnWidth(j, 62);
                    ui->tableWidget_l_10->setColumnWidth(j, 62);
                    ui->tableWidget_p_10->setColumnWidth(j, 62);
                    ui->tableWidget_ud_10->setColumnWidth(j, 62);
                }

            switch(escMetodo) {
                case 1:
                    ui->l_meto_10->setText("Fatoração LU");
                    ui->label_U_10->setVisible(true);
                    ui->label_D_10->setVisible(false);
                    ui->label_P_10->setVisible(false);
                    ui->label_esq_10->setVisible(false);
                    ui->label_dir_10->setVisible(false);
                    ui->tableWidget_p_10->setVisible(false);

                    d = lu->resolver(f);
                    L = lu->getL();
                    U = lu->getU();

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(U[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_10->setItem(i, j, item);
                            ui->tableWidget_ud_10->setItem(i, j, item2);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_10->setItem(i, 0, item);
                    }

                    break;
                case 2:
                    ui->l_meto_10->setText("Fatoração LDP");
                    ui->label_U_10->setVisible(false);
                    ui->label_D_10->setVisible(true);
                    ui->label_P_10->setVisible(true);
                    ui->label_esq_10->setVisible(true);
                    ui->label_dir_10->setVisible(true);
                    ui->tableWidget_p_10->setVisible(true);

                    L = ldp->getL();
                    D = ldp->getD();
                    P = ldp->getP();
                    d = ldp->resolver(f);

                    for(int i = 0; i < nAtual; i++) {
                        for(int j = 0; j < nAtual; j++) {
                            QTableWidgetItem *item = new  QTableWidgetItem(QString::number(L[i][j], 'f', prec));
                            QTableWidgetItem *item2 = new  QTableWidgetItem(QString::number(D[i][j], 'f', prec));
                            QTableWidgetItem *item3 = new  QTableWidgetItem(QString::number(P[i][j], 'f', prec));

                            item->setTextAlignment(Qt::AlignCenter);
                            item2->setTextAlignment(Qt::AlignCenter);
                            item3->setTextAlignment(Qt::AlignCenter);
                            ui->tableWidget_l_10->setItem(i, j, item);
                            ui->tableWidget_ud_10->setItem(i, j, item2);
                            ui->tableWidget_p_10->setItem(i, j, item3);
                        }
                    }

                    for(int i = 0; i < nAtual; i++) {
                        QTableWidgetItem *item = new  QTableWidgetItem(QString::number(d[i], 'f', prec));

                        item->setTextAlignment(Qt::AlignCenter);
                        ui->tableWidget_dr_10->setItem(i, 0, item);
                    }

                    break;
            }

            break;

    }

    delete lu;
    delete ldp;

}

void SELDialog::on_pushButton_clicked()
{
    if(A != NULL) {
        for(int i = 0; i < nAtual; i++) {
            delete [] A[i];
        }

        delete [] A;
    }

    if(f != NULL)
        delete [] f;

    nAtual = 3;
    ui->lineEdit_n->setEnabled(false);
    ui->lineEdit_n->setText(QString::number(nAtual));

    A = new double*[nAtual];

    for(int i = 0; i < nAtual; i++)
        A[i] = new double[nAtual];

    A[0][0] = 3;
    A[0][1] = -2;
    A[0][2] = 1;
    A[1][0] = 1;
    A[1][1] = -3;
    A[1][2] = 4;
    A[2][0] = 9;
    A[2][1] = 4;
    A[2][2] = -5;

    f = new double[nAtual];

    f[0] = 8;
    f[1] = 6;
    f[2] = 11;

    on_pushButton_calc_clicked();
}
