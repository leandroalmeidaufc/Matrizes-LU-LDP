#ifndef CALCDIALOG_H
#define CALCDIALOG_H

#include <QDialog>

namespace Ui {
class CalcDialog;
}

class CalcDialog : public QDialog
{
    Q_OBJECT

protected:
    void showEvent(QShowEvent *);

public:
    explicit CalcDialog(QWidget *parent = 0);
    ~CalcDialog();
    void addInfo(int tab, int l, int c, QString valor);
    void resultFinal(int tab, int l, int c);

private slots:
    void on_lineEdit_a_editingFinished();

    void on_pushButton_limpar_clicked();

    void on_checkBox_e1_clicked();

    void on_checkBox_e2_clicked();

    void on_pushButton_calc_clicked();

    void on_checkBox_passos_clicked();

    void on_checkBox_erro_clicked();

    void on_pushButton_clicked();

private:
    Ui::CalcDialog *ui;
    int proxTab;
    bool remover, padrao;
    void atuEst(int tabFinal);
    double erRelativo[10];
    bool er1Ativo[10];
};

#endif // CALCDIALOG_H
