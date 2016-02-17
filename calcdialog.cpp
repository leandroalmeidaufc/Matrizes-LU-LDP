#include "calcdialog.h"
#include "ui_calcdialog.h"
#include <metodos.h>
#include <dialogmsg.h>
#include <QTableWidgetItem>

CalcDialog::CalcDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalcDialog)
{
    ui->setupUi(this);
}

CalcDialog::~CalcDialog()
{
    delete ui;
}

void CalcDialog::addInfo(int tab, int l, int c, QString valor)
{
    switch(tab) {
        case 1:
            if(ui->tabela_1->rowCount() <= l)
                ui->tabela_1->setRowCount(ui->tabela_1->rowCount()+1);
            ui->tabela_1->setItem(l, c, new  QTableWidgetItem(valor));
            break;
        case 2:
            if(ui->tabela_2->rowCount() <= l)
                ui->tabela_2->setRowCount(ui->tabela_2->rowCount()+1);
            ui->tabela_2->setItem(l, c, new  QTableWidgetItem(valor));
            break;
        case 3:
            if(ui->tabela_3->rowCount() <= l)
                ui->tabela_3->setRowCount(ui->tabela_3->rowCount()+1);
            ui->tabela_3->setItem(l, c, new  QTableWidgetItem(valor));
            break;
        case 4:
            if(ui->tabela_4->rowCount() <= l)
                ui->tabela_4->setRowCount(ui->tabela_4->rowCount()+1);
            ui->tabela_4->setItem(l, c, new  QTableWidgetItem(valor));
            break;
        case 5:
            if(ui->tabela_5->rowCount() <= l)
                ui->tabela_5->setRowCount(ui->tabela_5->rowCount()+1);
            ui->tabela_5->setItem(l, c, new  QTableWidgetItem(valor));
            break;
        case 6:
            if(ui->tabela_6->rowCount() <= l)
                ui->tabela_6->setRowCount(ui->tabela_6->rowCount()+1);
            ui->tabela_6->setItem(l, c, new  QTableWidgetItem(valor));
            break;
        case 7:
            if(ui->tabela_7->rowCount() <= l)
                ui->tabela_7->setRowCount(ui->tabela_7->rowCount()+1);
            ui->tabela_7->setItem(l, c, new  QTableWidgetItem(valor));
            break;
        case 8:
            if(ui->tabela_8->rowCount() <= l)
                ui->tabela_8->setRowCount(ui->tabela_8->rowCount()+1);
            ui->tabela_8->setItem(l, c, new  QTableWidgetItem(valor));
            break;
        case 9:
            if(ui->tabela_9->rowCount() <= l)
                ui->tabela_9->setRowCount(ui->tabela_9->rowCount()+1);
            ui->tabela_9->setItem(l, c, new  QTableWidgetItem(valor));
            break;
        case 10:
            if(ui->tabela_10->rowCount() <= l)
                ui->tabela_10->setRowCount(ui->tabela_10->rowCount()+1);
            ui->tabela_10->setItem(l, c, new  QTableWidgetItem(valor));
            break;
    }
}

void CalcDialog::resultFinal(int tab, int l, int c)
{
    switch(tab) {
        case 1:
            ui->tabela_1->item(l, c)->setBackgroundColor(Qt::green);
            break;
        case 2:
            ui->tabela_2->item(l, c)->setBackgroundColor(Qt::green);
            break;
        case 3:
            ui->tabela_3->item(l, c)->setBackgroundColor(Qt::green);
            break;
        case 4:
            ui->tabela_4->item(l, c)->setBackgroundColor(Qt::green);
            break;
        case 5:
            ui->tabela_5->item(l, c)->setBackgroundColor(Qt::green);
            break;
        case 6:
            ui->tabela_6->item(l, c)->setBackgroundColor(Qt::green);
            break;
        case 7:
            ui->tabela_7->item(l, c)->setBackgroundColor(Qt::green);
            break;
        case 8:
            ui->tabela_8->item(l, c)->setBackgroundColor(Qt::green);
            break;
        case 9:
            ui->tabela_9->item(l, c)->setBackgroundColor(Qt::green);
            break;
        case 10:
            ui->tabela_10->item(l, c)->setBackgroundColor(Qt::green);
            break;
    }
}

void CalcDialog::showEvent(QShowEvent *ev)
{
    ui->pushButton->setEnabled(true);
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

    ui->tabela_1->setColumnWidth(2, 193);
    ui->tabela_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela_2->setColumnWidth(2, 193);
    ui->tabela_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela_3->setColumnWidth(2, 193);
    ui->tabela_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela_4->setColumnWidth(2, 193);
    ui->tabela_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela_5->setColumnWidth(2, 193);
    ui->tabela_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela_6->setColumnWidth(2, 193);
    ui->tabela_6->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela_7->setColumnWidth(2, 193);
    ui->tabela_7->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela_8->setColumnWidth(2, 193);
    ui->tabela_8->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela_9->setColumnWidth(2, 193);
    ui->tabela_9->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela_10->setColumnWidth(2, 193);
    ui->tabela_10->setEditTriggers(QAbstractItemView::NoEditTriggers);

    QDialog::showEvent(ev);

    for(int i = 1; i <= 12; i++) {
        ui->tabWidget->removeTab(0);
    }

    proxTab = 1;
    padrao = remover = false;

}

void CalcDialog::on_lineEdit_a_editingFinished()
{
    QString ent = ui->lineEdit_a->text();

    if(!ent.isEmpty()) {
        ui->lineEditConst->setText(ent+"*d-d*ln(d)");
        ui->checkBox_e1->setFocus();
    }

}

void CalcDialog::on_pushButton_limpar_clicked()
{
    ui->lineEdit_a->setText("");
    ui->lineEditConst->setText("a*d - d*ln(d)");
    ui->checkBox_e1->setChecked(false);
    ui->checkBox_e2->setChecked(false);
    ui->lineEdit_e1->setEnabled(false);
    ui->lineEdit_e2->setEnabled(false);
    ui->lineEdit_e1->setText("");
    ui->lineEdit_e2->setText("");
    ui->spinBox_prec->setValue(ui->spinBox_prec->minimum());
    ui->radioButton_bisec->setChecked(true);
}

void CalcDialog::on_checkBox_e1_clicked()
{
    if(ui->checkBox_e1->isChecked()) {
        ui->lineEdit_e1->setEnabled(true);
    }
    else {
        ui->lineEdit_e1->setText("");
        ui->lineEdit_e1->setEnabled(false);
    }
}

void CalcDialog::on_checkBox_e2_clicked()
{
    if(ui->checkBox_e2->isChecked()) {
        ui->lineEdit_e2->setEnabled(true);
    }
    else {
        ui->lineEdit_e2->setText("");
        ui->lineEdit_e2->setEnabled(false);
    }
}

void CalcDialog::atuEst(int tabFinal) {
    int valores[10], maior, menorInd=0;
    double porcem[10];


    double menorEr=erRelativo[0];

    for(int i = 1; i < tabFinal; i++) {
        if(erRelativo[i] < menorEr)
            menorEr=erRelativo[i];
    }

    int fator = 1;

    if(ui->checkBox_erro->isChecked() && ui->checkBox_passos->isChecked()) {
        if(er1Ativo[0])
            maior = valores[0] = ui->tabela_1->rowCount()*(1+erRelativo[0]*fator);
        else
            maior = valores[0] = ui->tabela_1->rowCount();
        if(er1Ativo[1])
            valores[1] = ui->tabela_2->rowCount()*(1+erRelativo[1]*fator);
        else
            valores[1] = ui->tabela_2->rowCount();
        if(er1Ativo[2])
            valores[2] = ui->tabela_3->rowCount()*(1+erRelativo[2]*fator);
        else
            valores[2] = ui->tabela_3->rowCount();
        if(er1Ativo[3])
            valores[3] = ui->tabela_4->rowCount()*(1+erRelativo[3]*fator);
        else
            valores[3] = ui->tabela_4->rowCount();
        if(er1Ativo[4])
            valores[4] = ui->tabela_5->rowCount()*(1+erRelativo[4]*fator);
        else
            valores[4] = ui->tabela_5->rowCount();
        if(er1Ativo[5])
            valores[5] = ui->tabela_6->rowCount()*(1+erRelativo[5]*fator);
        else
            valores[5] = ui->tabela_6->rowCount();
        if(er1Ativo[6])
            valores[6] = ui->tabela_7->rowCount()*(1+erRelativo[6]*fator);
        else
            valores[6] = ui->tabela_7->rowCount();
        if(er1Ativo[7])
            valores[7] = ui->tabela_8->rowCount()*(1+erRelativo[7]*fator);
        else
            valores[7] = ui->tabela_8->rowCount();
        if(er1Ativo[8])
            valores[8] = ui->tabela_9->rowCount()*(1+erRelativo[8]*fator);
        else
            valores[8] = ui->tabela_9->rowCount();
        if(er1Ativo[9])
            valores[9] = ui->tabela_10->rowCount()*(1+erRelativo[9]*fator);//asokd
        else
            valores[9] = ui->tabela_10->rowCount();

        for(int i = 1; i < tabFinal; i++) {
            if(valores[i] > maior)
                maior = valores[i];

            if(valores[i] < valores[menorInd])
                menorInd = i;
        }

    }
    else {
        if(ui->checkBox_erro->isChecked()) {
            maior = -999999999;

            double menorEr=erRelativo[0];

            for(int i = 1; i < tabFinal; i++) {
                if(erRelativo[i] < menorEr)
                    menorEr=erRelativo[i];
            }

            int fator = 1;

            valores[0] = ceil(erRelativo[0]*fator);
            valores[1] = ceil(erRelativo[1]*fator);
            valores[2] = ceil(erRelativo[2]*fator);
            valores[3] = ceil(erRelativo[3]*fator);
            valores[4] = ceil(erRelativo[4]*fator);
            valores[5] = ceil(erRelativo[5]*fator);
            valores[6] = ceil(erRelativo[6]*fator);
            valores[7] = ceil(erRelativo[7]*fator);
            valores[8] = ceil(erRelativo[8]*fator);
            valores[9] = ceil(erRelativo[9]*fator);

            for(int i = 0; i < tabFinal; i++) {
                if(valores[i] > maior && er1Ativo[i])
                    maior = valores[i];

                if(valores[i] < valores[menorInd])
                    menorInd = i;
            }

        }
        else {
            maior = valores[0] = ui->tabela_1->rowCount();
            valores[1] = ui->tabela_2->rowCount();
            valores[2] = ui->tabela_3->rowCount();
            valores[3] = ui->tabela_4->rowCount();
            valores[4] = ui->tabela_5->rowCount();
            valores[5] = ui->tabela_6->rowCount();
            valores[6] = ui->tabela_7->rowCount();
            valores[7] = ui->tabela_8->rowCount();
            valores[8] = ui->tabela_9->rowCount();
            valores[9] = ui->tabela_10->rowCount();

            for(int i = 1; i < tabFinal; i++) {
                if(valores[i] > maior)
                    maior = valores[i];

                if(valores[i] < valores[menorInd])
                    menorInd = i;
            }

        }
    }

    for(int i = 0; i < tabFinal; i++) {
        porcem[i] = ((double) valores[i]/maior)*100;
    }

    if(!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[0]) || (ui->checkBox_erro && ui->checkBox_passos)) {
        ui->progressBar_t1->setHidden(false);
        ui->lp_t1->setHidden(false);
        ui->label_t1->setHidden(false);
        ui->frame_t1->setHidden(false);
        ui->progressBar_t1->setValue((int) porcem[0]);
        ui->lp_t1->setText(QString::number(porcem[0], 'f', 0)+" %");
    }

    if(tabFinal >= 2 && (!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[1]) || (ui->checkBox_erro && ui->checkBox_passos))) {
        ui->progressBar_t2->setHidden(false);
        ui->lp_t2->setHidden(false);
        ui->label_t2->setHidden(false);
        ui->frame_t2->setHidden(false);
        ui->progressBar_t2->setValue((int) porcem[1]);
        ui->lp_t2->setText(QString::number(porcem[1], 'f', 0)+" %");
    }

    if(tabFinal >= 3 && (!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[2]) || (ui->checkBox_erro && ui->checkBox_passos))) {
        ui->progressBar_t3->setHidden(false);
        ui->lp_t3->setHidden(false);
        ui->label_t3->setHidden(false);
        ui->frame_t3->setHidden(false);
        ui->progressBar_t3->setValue((int) porcem[2]);
        ui->lp_t3->setText(QString::number(porcem[2], 'f', 0)+" %");
    }

    if(tabFinal >= 4 && (!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[3]) || (ui->checkBox_erro && ui->checkBox_passos))) {
        ui->progressBar_t4->setHidden(false);
        ui->lp_t4->setHidden(false);
        ui->label_t4->setHidden(false);
        ui->frame_t4->setHidden(false);
        ui->progressBar_t4->setValue((int) porcem[3]);
        ui->lp_t4->setText(QString::number(porcem[3], 'f', 0)+" %");
    }

    if(tabFinal >= 5 && (!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[4]) || (ui->checkBox_erro && ui->checkBox_passos))) {
        ui->progressBar_t5->setHidden(false);
        ui->lp_t5->setHidden(false);
        ui->label_t5->setHidden(false);
        ui->frame_t5->setHidden(false);
        ui->progressBar_t5->setValue((int) porcem[4]);
        ui->lp_t5->setText(QString::number(porcem[4], 'f', 0)+" %");
    }

    if(tabFinal >= 6 && (!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[5]) || (ui->checkBox_erro && ui->checkBox_passos))) {
        ui->progressBar_t6->setHidden(false);
        ui->lp_t6->setHidden(false);
        ui->label_t6->setHidden(false);
        ui->frame_t6->setHidden(false);
        ui->progressBar_t6->setValue((int) porcem[5]);
        ui->lp_t6->setText(QString::number(porcem[5], 'f', 0)+" %");
    }

    if(tabFinal >= 7 && (!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[6]) || (ui->checkBox_erro && ui->checkBox_passos))) {
        ui->progressBar_t7->setHidden(false);
        ui->lp_t7->setHidden(false);
        ui->label_t7->setHidden(false);
        ui->frame_t7->setHidden(false);
        ui->progressBar_t7->setValue((int) porcem[6]);
        ui->lp_t7->setText(QString::number(porcem[6], 'f', 0)+" %");
    }

    if(tabFinal >= 8 && (!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[7]) || (ui->checkBox_erro && ui->checkBox_passos))) {
        ui->progressBar_t8->setHidden(false);
        ui->lp_t8->setHidden(false);
        ui->label_t8->setHidden(false);
        ui->frame_t8->setHidden(false);
        ui->progressBar_t8->setValue((int) porcem[7]);
        ui->lp_t8->setText(QString::number(porcem[7], 'f', 0)+" %");
    }

    if(tabFinal >= 9 && (!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[8]) || (ui->checkBox_erro && ui->checkBox_passos))) {
        ui->progressBar_t9->setHidden(false);
        ui->lp_t9->setHidden(false);
        ui->label_t9->setHidden(false);
        ui->frame_t9->setHidden(false);
        ui->progressBar_t9->setValue((int) porcem[8]);
        ui->lp_t9->setText(QString::number(porcem[8], 'f', 0)+" %");
    }

    if(tabFinal == 10 && (!ui->checkBox_erro || (ui->checkBox_erro && er1Ativo[9]) || (ui->checkBox_erro && ui->checkBox_passos))) {
        ui->progressBar_t10->setHidden(false);
        ui->lp_t10->setHidden(false);
        ui->label_t10->setHidden(false);
        ui->frame_t10->setHidden(false);
        ui->progressBar_t10->setValue((int) porcem[9]);
        ui->lp_t10->setText(QString::number(porcem[9], 'f', 0)+" %");
    }
}

void CalcDialog::on_pushButton_calc_clicked()
{
    bool valido = true;
    double a = ui->lineEdit_a->text().toDouble(&valido), e1, e2;

    if(ui->lineEdit_a->text().isEmpty() || !valido) {
        DialogMsg *msg = new DialogMsg(this);

        msg->setModal(true);
        msg->setMsg(QString("Por favor, digite um valor válido para a!"));
        msg->show();
        msg->setFocus();
        msg->exec();

        delete msg;

        ui->lineEdit_a->setFocus();

        return;
    }

    if(!(ui->checkBox_e1->isChecked()) && !(ui->checkBox_e2->isChecked())) {
        DialogMsg *msg = new DialogMsg(this);

        msg->setModal(true);
        msg->setMsg(QString("Por favor, selecione pelo menos um critério de parada!"));
        msg->show();
        msg->setFocus();
        msg->exec();

        delete msg;

        ui->checkBox_e1->setFocus();

        return;
    }

    if(ui->checkBox_e1->isChecked()) {
        bool valido = true;
        e1 = ui->lineEdit_e1->text().toDouble(&valido);

        if(ui->lineEdit_e1->text().isEmpty() || !valido || e1 < 0.0) {
            DialogMsg *msg = new DialogMsg(this);

            msg->setModal(true);
            msg->setMsg(QString("Por favor, digite um valor válido para ε1!"));
            msg->show();
            msg->setFocus();
            msg->exec();

            delete msg;

            ui->lineEdit_e1->setFocus();

            return;
        }

    }

    if(ui->checkBox_e2->isChecked()) {
        bool valido = true;
        e2 = ui->lineEdit_e2->text().toDouble(&valido);

        if(ui->lineEdit_e2->text().isEmpty() || !valido || e2 < 0.0) {
            DialogMsg *msg = new DialogMsg(this);

            msg->setModal(true);
            msg->setMsg(QString("Por favor, digite um valor válido para ε2!"));
            msg->show();
            msg->setFocus();
            msg->exec();

            delete msg;

            ui->lineEdit_e2->setFocus();

            return;
        }

    }

    QIcon q;
    std::string metodo, erro;
    int escErro, escMetodo, prec = ui->spinBox_prec->value();

    if(ui->checkBox_e1->isChecked() && ui->checkBox_e2->isChecked()) {
        erro = "2";
        escErro = 3;
    }
    else {
        erro = "1";
        if(ui->checkBox_e1->isChecked()) {
            escErro = 1;
        }
        else {
            escErro = 2;
        }
    }

    if(ui->radioButton_bisec->isChecked()) {
        metodo = "B";
        escMetodo = 1;
    }
    else {
        if(ui->radioButton_posF->isChecked()) {
            metodo = "PF";
            escMetodo = 2;
        }
        else {
            metodo = "NR";
            escMetodo = 3;
        }
    }

    if(ui->tabWidget->count() == 0)
        ui->tabWidget->addTab(ui->tab, q, QString::fromStdString("Estatísticas"));

    if(remover)
        ui->tabWidget->removeTab(1);

    Bisseccao bc;
    Posicaofalsa pf;
    Newtonraphson newton;

    Filas result;
    Intervalo i;

    std::vector<double> intervalo = i.getIntervalo(a);

    switch(proxTab) {
        case 1:
            ui->tabWidget->addTab(ui->tab_1, q, QString::fromStdString("1. "+metodo+" "+erro));
            ui->label_t1->setText(QString::fromStdString("1. "+metodo+" "+erro));

            er1Ativo[0] = false;
            ui->tabela_1->setRowCount(0);

            ui->l_func_1->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_1->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_1->setText("");
                    er1Ativo[0] = true;
                    break;
                case 2:
                    ui->l_er1_1->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_1->setText("");
                    break;
                case 3:
                    ui->l_er1_1->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_1->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[0] = true;
                    break;
            }

            ui->l_prec_1->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(1);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_1->setText("Método da Bisseção");

                    bc.bisseccao(1, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_1->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(1, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_1->setText("Método de Newton-Raphson");

                    newton.newtonraphson(1, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[0])
                erRelativo[0] = ui->l_er1_1->text().mid(12).toDouble()/result.resultado;

            if(remover)
                atuEst(10);
            else
                atuEst(1);

            break;

        case 2:
            ui->tabWidget->addTab(ui->tab_2, q, QString::fromStdString("2. "+metodo+" "+erro));
            ui->label_t2->setText(QString::fromStdString("2. "+metodo+" "+erro));

            er1Ativo[1] = false;
            ui->tabela_2->setRowCount(0);

            ui->l_func_2->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_2->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_2->setText("");
                    er1Ativo[1] = true;
                    break;
                case 2:
                    ui->l_er1_2->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_2->setText("");
                    break;
                case 3:
                    ui->l_er1_2->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_2->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[1] = true;
                    break;
            }

            ui->l_prec_2->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(2);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_2->setText("Método da Bisseção");

                        bc.bisseccao(2, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_2->setText("Método da Posiçao Falsa");

                        pf.mpfalsa(2, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_2->setText("Método de Newton-Raphson");

                        newton.newtonraphson(2, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[1])
                erRelativo[1] = ui->l_er1_2->text().mid(12).toDouble()/result.resultado;

            if(remover)
                atuEst(10);
            else
                atuEst(2);

            break;
        case 3:
            ui->tabWidget->addTab(ui->tab_3, q, QString::fromStdString("3. "+metodo+" "+erro));
            ui->label_t3->setText(QString::fromStdString("3. "+metodo+" "+erro));

            er1Ativo[2] = false;
            ui->tabela_3->setRowCount(0);

            ui->l_func_3->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_3->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_3->setText("");
                    er1Ativo[2] = true;
                    break;
                case 2:
                    ui->l_er1_3->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_3->setText("");
                    break;
                case 3:
                    ui->l_er1_3->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_3->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[2] = true;
                    break;
            }

            ui->l_prec_3->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(3);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_3->setText("Método da Bisseção");

                    bc.bisseccao(3, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_3->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(3, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_3->setText("Método de Newton-Raphson");

                    newton.newtonraphson(3, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[2])
                erRelativo[2] = ui->l_er1_3->text().mid(12).toDouble()/result.resultado;

            if(remover)
                atuEst(10);
            else
                atuEst(3);

            break;
        case 4:
            ui->tabWidget->addTab(ui->tab_4, q, QString::fromStdString("4. "+metodo+" "+erro));
            ui->label_t4->setText(QString::fromStdString("4. "+metodo+" "+erro));

            er1Ativo[3] = false;
            ui->tabela_4->setRowCount(0);

            ui->l_func_4->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_4->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_4->setText("");
                    er1Ativo[3] = true;
                    break;
                case 2:
                    ui->l_er1_4->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_4->setText("");
                    break;
                case 3:
                    ui->l_er1_4->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_4->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[3] = true;
                    break;
            }

            ui->l_prec_4->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(4);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_4->setText("Método da Bisseção");

                    bc.bisseccao(4, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_4->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(4, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_4->setText("Método de Newton-Raphson");

                    result = newton.newtonraphson(4, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[3])
                erRelativo[3] = ui->l_er1_4->text().mid(12).toDouble()/result.resultado;

            if(remover)
                atuEst(10);
            else
                atuEst(4);

            break;
        case 5:
            ui->tabWidget->addTab(ui->tab_5, q, QString::fromStdString("5. "+metodo+" "+erro));
            ui->label_t5->setText(QString::fromStdString("5. "+metodo+" "+erro));

            er1Ativo[4] = false;
            ui->tabela_5->setRowCount(0);

            ui->l_func_5->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_5->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_5->setText("");
                    er1Ativo[4] = true;
                    break;
                case 2:
                    ui->l_er1_5->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_5->setText("");
                    break;
                case 3:
                    ui->l_er1_5->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_5->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[4] = true;
                    break;
            }

            ui->l_prec_5->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(5);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_5->setText("Método da Bisseção");

                    bc.bisseccao(5, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_5->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(5, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_5->setText("Método de Newton-Raphson");

                    newton.newtonraphson(5, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[4])
                erRelativo[4] = ui->l_er1_5->text().mid(12).toDouble()/result.resultado;

            if(remover)
                atuEst(10);
            else
                atuEst(5);

            break;
        case 6:
            ui->tabWidget->addTab(ui->tab_6, q, QString::fromStdString("6. "+metodo+" "+erro));
            ui->label_t6->setText(QString::fromStdString("6. "+metodo+" "+erro));

            er1Ativo[5] = false;
            ui->tabela_6->setRowCount(0);

            ui->l_func_6->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_6->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_6->setText("");
                    er1Ativo[5] = true;
                    break;
                case 2:
                    ui->l_er1_6->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_6->setText("");
                    break;
                case 3:
                    ui->l_er1_6->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_6->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[5] = true;
                    break;
            }

            ui->l_prec_6->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(6);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_6->setText("Método da Bisseção");

                    bc.bisseccao(6, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_6->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(6, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_6->setText("Método de Newton-Raphson");

                    newton.newtonraphson(6, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[5])
                erRelativo[5] = ui->l_er1_6->text().mid(12).toDouble()/result.resultado;

            if(remover)
                atuEst(10);
            else
                atuEst(6);

            break;
        case 7:
            ui->tabWidget->addTab(ui->tab_7, q, QString::fromStdString("7. "+metodo+" "+erro));
            ui->label_t7->setText(QString::fromStdString("7. "+metodo+" "+erro));

            er1Ativo[6] = false;
            ui->tabela_7->setRowCount(0);

            ui->l_func_7->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_7->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_7->setText("");
                    er1Ativo[6] = true;
                    break;
                case 2:
                    ui->l_er1_7->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_7->setText("");
                    break;
                case 3:
                    ui->l_er1_7->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_7->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[6] = true;
                    break;
            }

            ui->l_prec_7->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(7);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_7->setText("Método da Bisseção");

                    bc.bisseccao(7, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_7->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(7, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_7->setText("Método de Newton-Raphson");

                    newton.newtonraphson(7, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[6])
                erRelativo[6] = ui->l_er1_7->text().mid(12).toDouble()/result.resultado;

            if(remover)
                atuEst(10);
            else
                atuEst(7);

            break;
        case 8:
            ui->tabWidget->addTab(ui->tab_8, q, QString::fromStdString("8. "+metodo+" "+erro));
            ui->label_t8->setText(QString::fromStdString("8. "+metodo+" "+erro));

            er1Ativo[7] = false;
            ui->tabela_8->setRowCount(0);

            ui->l_func_8->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_8->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_8->setText("");
                    er1Ativo[7] = true;
                    break;
                case 2:
                    ui->l_er1_8->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_8->setText("");
                    break;
                case 3:
                    ui->l_er1_8->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_8->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[7] = true;
                    break;
            }

            ui->l_prec_8->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(8);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_8->setText("Método da Bisseção");

                    bc.bisseccao(8, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_8->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(8, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_8->setText("Método de Newton-Raphson");

                    newton.newtonraphson(8, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[7])
                erRelativo[7] = ui->l_er1_8->text().mid(12).toDouble()/result.resultado;

            if(remover)
                atuEst(10);
            else
                atuEst(8);

            break;
        case 9:
            ui->tabWidget->addTab(ui->tab_9, q, QString::fromStdString("9. "+metodo+" "+erro));
            ui->label_t9->setText(QString::fromStdString("9. "+metodo+" "+erro));

            er1Ativo[8] = false;
            ui->tabela_9->setRowCount(0);

            ui->l_func_9->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_9->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_9->setText("");
                    er1Ativo[8] = true;
                    break;
                case 2:
                    ui->l_er1_9->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_9->setText("");
                    break;
                case 3:
                    ui->l_er1_9->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_9->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[8] = true;
                    break;
            }

            ui->l_prec_9->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(9);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_9->setText("Método da Bisseção");

                    bc.bisseccao(9, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_9->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(9, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_9->setText("Método de Newton-Raphson");

                    newton.newtonraphson(9, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[8])
                erRelativo[8] = ui->l_er1_9->text().mid(12).toDouble()/result.resultado;

            if(remover)
                atuEst(10);
            else
                atuEst(9);

            break;
        case 10:
            ui->tabWidget->addTab(ui->tab_10, q, QString::fromStdString("10. "+metodo+" "+erro));
            ui->label_t10->setText(QString::fromStdString("10. "+metodo+" "+erro));

            er1Ativo[9] = false;
            ui->tabela_10->setRowCount(0);

            ui->l_func_10->setText(ui->lineEdit_a->text()+"*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_10->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_10->setText("");
                    er1Ativo[9] = true;
                    break;
                case 2:
                    ui->l_er1_10->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    ui->l_er2_10->setText("");
                    break;
                case 3:
                    ui->l_er1_10->setText("| d - ξ | < "+ui->lineEdit_e1->text());
                    ui->l_er2_10->setText("| f(d) | < "+ui->lineEdit_e2->text());
                    er1Ativo[9] = true;
                    break;
            }

            ui->l_prec_10->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(10);
            }

            proxTab = 1;
            remover = true;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_10->setText("Método da Bisseção");

                    bc.bisseccao(10, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 2:
                    ui->l_meto_10->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(10, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
                case 3:
                    ui->l_meto_10->setText("Método de Newton-Raphson");

                    newton.newtonraphson(10, this, escErro, prec, a, intervalo[0], intervalo[1], e1, e2);

                    break;
            }

            if(er1Ativo[9])
                erRelativo[9] = ui->l_er1_10->text().mid(12).toDouble()/result.resultado;

            atuEst(10);

            break;

    }

}

void CalcDialog::on_checkBox_passos_clicked()
{
    atuEst(ui->tabWidget->count()-1);
}

void CalcDialog::on_checkBox_erro_clicked()
{
    atuEst(ui->tabWidget->count()-1);
}

void CalcDialog::on_pushButton_clicked()
{
    if(!(ui->checkBox_e1->isChecked()) && !(ui->checkBox_e2->isChecked())) {
        DialogMsg *msg = new DialogMsg(this);

        msg->setModal(true);
        msg->setMsg(QString("Por favor, selecione pelo menos um critério de parada!"));
        msg->show();
        msg->setFocus();
        msg->exec();

        delete msg;

        ui->checkBox_e1->setFocus();

        return;
    }

    QIcon q;
    std::string metodo, erro;
    int escErro, escMetodo, prec = ui->spinBox_prec->value();

    if(ui->checkBox_e1->isChecked() && ui->checkBox_e2->isChecked()) {
        erro = "2";
        escErro = 3;
    }
    else {
        erro = "1";
        if(ui->checkBox_e1->isChecked()) {
            escErro = 1;
        }
        else {
            escErro = 2;
        }
    }

    if(ui->radioButton_bisec->isChecked()) {
        metodo = "B";
        escMetodo = 1;
    }
    else {
        if(ui->radioButton_posF->isChecked()) {
            metodo = "PF";
            escMetodo = 2;
        }
        else {
            metodo = "NR";
            escMetodo = 3;
        }
    }

    if(ui->tabWidget->count() == 0)
        ui->tabWidget->addTab(ui->tab, q, QString::fromStdString("Estatísticas"));

    if(remover)
        ui->tabWidget->removeTab(1);

    Bisseccao bc;
    Posicaofalsa pf;
    Newtonraphson newton;

    switch(proxTab) {
        case 1:
            ui->tabWidget->addTab(ui->tab_1, q, QString::fromStdString("1. "+metodo+" "+erro));
            ui->label_t1->setText(QString::fromStdString("1. "+metodo+" "+erro));

            er1Ativo[0] = false;
            ui->tabela_1->setRowCount(0);

            ui->l_func_1->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_1->setText("| d - ξ | < 0.00001");
                    ui->l_er2_1->setText("");
                    er1Ativo[0] = true;
                    break;
                case 2:
                    ui->l_er1_1->setText("| f(d) | < 0.00001");
                    ui->l_er2_1->setText("");
                    break;
                case 3:
                    ui->l_er1_1->setText("| d - ξ | < 0.00001");
                    ui->l_er2_1->setText("| f(d) | < 0.00001");
                    er1Ativo[0] = true;
                    break;
            }

            ui->l_prec_1->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(1);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_1->setText("Método da Bisseção");

                    bc.bisseccao(1, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_1->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(1, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_1->setText("Método de Newton-Raphson");

                    newton.newtonraphson(1, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            if(remover)
                atuEst(10);
            else
                atuEst(1);

            break;

        case 2:
            ui->tabWidget->addTab(ui->tab_2, q, QString::fromStdString("2. "+metodo+" "+erro));
            ui->label_t2->setText(QString::fromStdString("2. "+metodo+" "+erro));

            er1Ativo[1] = false;
            ui->tabela_2->setRowCount(0);

            ui->l_func_2->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_2->setText("| d - ξ | < 0.00001");
                    ui->l_er2_2->setText("");
                    er1Ativo[1] = true;
                    break;
                case 2:
                    ui->l_er1_2->setText("| f(d) | < 0.00001");
                    ui->l_er2_2->setText("");
                    break;
                case 3:
                    ui->l_er1_2->setText("| d - ξ | < 0.00001");
                    ui->l_er2_2->setText("| f(d) | < 0.00001");
                    er1Ativo[1] = true;
                    break;
            }

            ui->l_prec_2->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(2);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_2->setText("Método da Bisseção");

                    bc.bisseccao(2, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_2->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(2, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_2->setText("Método de Newton-Raphson");

                    newton.newtonraphson(2, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            if(remover)
                atuEst(10);
            else
                atuEst(2);

            break;
        case 3:
            ui->tabWidget->addTab(ui->tab_3, q, QString::fromStdString("3. "+metodo+" "+erro));
            ui->label_t3->setText(QString::fromStdString("3. "+metodo+" "+erro));

            er1Ativo[2] = false;
            ui->tabela_3->setRowCount(0);

            ui->l_func_3->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_3->setText("| d - ξ | < 0.00001");
                    ui->l_er2_3->setText("");
                    er1Ativo[2] = true;
                    break;
                case 2:
                    ui->l_er1_3->setText("| f(d) | < 0.00001");
                    ui->l_er2_3->setText("");
                    break;
                case 3:
                    ui->l_er1_3->setText("| d - ξ | < 0.00001");
                    ui->l_er2_3->setText("| f(d) | < 0.00001");
                    er1Ativo[2] = true;
                    break;
            }

            ui->l_prec_3->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(3);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_3->setText("Método da Bisseção");

                    bc.bisseccao(3, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_3->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(3, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_3->setText("Método de Newton-Raphson");

                    newton.newtonraphson(3, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            if(remover)
                atuEst(10);
            else
                atuEst(3);

            break;
        case 4:
            ui->tabWidget->addTab(ui->tab_4, q, QString::fromStdString("4. "+metodo+" "+erro));
            ui->label_t4->setText(QString::fromStdString("4. "+metodo+" "+erro));

            er1Ativo[3] = false;
            ui->tabela_4->setRowCount(0);

            ui->l_func_4->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_4->setText("| d - ξ | < 0.00001");
                    ui->l_er2_4->setText("");
                    er1Ativo[3] = true;
                    break;
                case 2:
                    ui->l_er1_4->setText("| f(d) | < 0.00001");
                    ui->l_er2_4->setText("");
                    break;
                case 3:
                    ui->l_er1_4->setText("| d - ξ | < 0.00001");
                    ui->l_er2_4->setText("| f(d) | < 0.00001");
                    er1Ativo[3] = true;
                    break;
            }

            ui->l_prec_4->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(4);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_4->setText("Método da Bisseção");

                    bc.bisseccao(4, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_4->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(4, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_4->setText("Método de Newton-Raphson");

                    newton.newtonraphson(4, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            if(remover)
                atuEst(10);
            else
                atuEst(4);

            break;
        case 5:
            ui->tabWidget->addTab(ui->tab_5, q, QString::fromStdString("5. "+metodo+" "+erro));
            ui->label_t5->setText(QString::fromStdString("5. "+metodo+" "+erro));

            er1Ativo[4] = false;
            ui->tabela_5->setRowCount(0);

            ui->l_func_5->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_5->setText("| d - ξ | < 0.00001");
                    ui->l_er2_5->setText("");
                    er1Ativo[4] = true;
                    break;
                case 2:
                    ui->l_er1_5->setText("| f(d) | < 0.00001");
                    ui->l_er2_5->setText("");
                    break;
                case 3:
                    ui->l_er1_5->setText("| d - ξ | < 0.00001");
                    ui->l_er2_5->setText("| f(d) | < 0.00001");
                    er1Ativo[4] = true;
                    break;
            }

            ui->l_prec_5->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(5);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_5->setText("Método da Bisseção");

                    bc.bisseccao(5, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_5->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(5, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_5->setText("Método de Newton-Raphson");

                    newton.newtonraphson(5, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            if(remover)
                atuEst(10);
            else
                atuEst(5);

            break;
        case 6:
            ui->tabWidget->addTab(ui->tab_6, q, QString::fromStdString("6. "+metodo+" "+erro));
            ui->label_t6->setText(QString::fromStdString("6. "+metodo+" "+erro));

            er1Ativo[5] = false;
            ui->tabela_6->setRowCount(0);

            ui->l_func_6->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_6->setText("| d - ξ | < 0.00001");
                    ui->l_er2_6->setText("");
                    er1Ativo[5] = true;
                    break;
                case 2:
                    ui->l_er1_6->setText("| f(d) | < 0.00001");
                    ui->l_er2_6->setText("");
                    break;
                case 3:
                    ui->l_er1_6->setText("| d - ξ | < 0.00001");
                    ui->l_er2_6->setText("| f(d) | < 0.00001");
                    er1Ativo[5] = true;
                    break;
            }

            ui->l_prec_6->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(6);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_6->setText("Método da Bisseção");

                    bc.bisseccao(6, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_6->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(6, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_6->setText("Método de Newton-Raphson");

                    newton.newtonraphson(6, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            if(remover)
                atuEst(10);
            else
                atuEst(6);

            break;
        case 7:
            ui->tabWidget->addTab(ui->tab_7, q, QString::fromStdString("7. "+metodo+" "+erro));
            ui->label_t7->setText(QString::fromStdString("7. "+metodo+" "+erro));

            er1Ativo[6] = false;
            ui->tabela_7->setRowCount(0);

            ui->l_func_7->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_7->setText("| d - ξ | < 0.00001");
                    ui->l_er2_7->setText("");
                    er1Ativo[6] = true;
                    break;
                case 2:
                    ui->l_er1_7->setText("| f(d) | < 0.00001");
                    ui->l_er2_7->setText("");
                    break;
                case 3:
                    ui->l_er1_7->setText("| d - ξ | < 0.00001");
                    ui->l_er2_7->setText("| f(d) | < 0.00001");
                    er1Ativo[6] = true;
                    break;
            }

            ui->l_prec_7->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(7);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_7->setText("Método da Bisseção");

                    bc.bisseccao(7, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_7->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(7, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_7->setText("Método de Newton-Raphson");

                    newton.newtonraphson(7, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            if(remover)
                atuEst(10);
            else
                atuEst(7);

            break;
        case 8:
            ui->tabWidget->addTab(ui->tab_8, q, QString::fromStdString("8. "+metodo+" "+erro));
            ui->label_t8->setText(QString::fromStdString("8. "+metodo+" "+erro));

            er1Ativo[7] = false;
            ui->tabela_8->setRowCount(0);

            ui->l_func_8->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_8->setText("| d - ξ | < 0.00001");
                    ui->l_er2_8->setText("");
                    er1Ativo[7] = true;
                    break;
                case 2:
                    ui->l_er1_8->setText("| f(d) | < 0.00001");
                    ui->l_er2_8->setText("");
                    break;
                case 3:
                    ui->l_er1_8->setText("| d - ξ | < 0.00001");
                    ui->l_er2_8->setText("| f(d) | < 0.00001");
                    er1Ativo[7] = true;
                    break;
            }

            ui->l_prec_8->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(8);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_8->setText("Método da Bisseção");

                    bc.bisseccao(8, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_8->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(8, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_8->setText("Método de Newton-Raphson");

                    newton.newtonraphson(8, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            if(remover)
                atuEst(10);
            else
                atuEst(8);

            break;
        case 9:
            ui->tabWidget->addTab(ui->tab_9, q, QString::fromStdString("9. "+metodo+" "+erro));
            ui->label_t9->setText(QString::fromStdString("9. "+metodo+" "+erro));

            er1Ativo[8] = false;
            ui->tabela_9->setRowCount(0);

            ui->l_func_9->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_9->setText("| d - ξ | < 0.00001");
                    ui->l_er2_9->setText("");
                    er1Ativo[8] = true;
                    break;
                case 2:
                    ui->l_er1_9->setText("| f(d) | < 0.00001");
                    ui->l_er2_9->setText("");
                    break;
                case 3:
                    ui->l_er1_9->setText("| d - ξ | < 0.00001");
                    ui->l_er2_9->setText("| f(d) | < 0.00001");
                    er1Ativo[8] = true;
                    break;
            }

            ui->l_prec_9->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(9);
            }

            proxTab++;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_9->setText("Método da Bisseção");

                    bc.bisseccao(9, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_9->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(9, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_9->setText("Método de Newton-Raphson");

                    newton.newtonraphson(9, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            if(remover)
                atuEst(10);
            else
                atuEst(9);

            break;
        case 10:
            ui->tabWidget->addTab(ui->tab_10, q, QString::fromStdString("10. "+metodo+" "+erro));
            ui->label_t10->setText(QString::fromStdString("10. "+metodo+" "+erro));

            er1Ativo[9] = false;
            ui->tabela_10->setRowCount(0);

            ui->l_func_10->setText("1*d - d*ln(d)");

            switch(escErro) {
                case 1:
                    ui->l_er1_10->setText("| d - ξ | < 0.00001");
                    ui->l_er2_10->setText("");
                    er1Ativo[9] = true;
                    break;
                case 2:
                    ui->l_er1_10->setText("| f(d) | < 0.00001");
                    ui->l_er2_10->setText("");
                    break;
                case 3:
                    ui->l_er1_10->setText("| d - ξ | < 0.00001");
                    ui->l_er2_10->setText("| f(d) | < 0.00001");
                    er1Ativo[9] = true;
                    break;
            }

            ui->l_prec_10->setText("Precisão de "+ui->spinBox_prec->text()+" dígitos");

            if(remover) {
                ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
            }
            else {
                ui->tabWidget->setCurrentIndex(10);
            }

            proxTab = 1;
            remover = true;

            switch(escMetodo) {
                case 1:
                    ui->l_meto_10->setText("Método da Bisseção");

                    bc.bisseccao(10, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 2:
                    ui->l_meto_10->setText("Método da Posiçao Falsa");

                    pf.mpfalsa(10, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
                case 3:
                    ui->l_meto_10->setText("Método de Newton-Raphson");

                    newton.newtonraphson(10, this, escErro, prec, 1, 2, 3, 0.00001, 0.00001);

                    break;
            }

            atuEst(10);

            break;
    }
}
