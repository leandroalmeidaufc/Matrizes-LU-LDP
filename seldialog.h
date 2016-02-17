#ifndef SELDIALOG_H
#define SELDIALOG_H

#include <QDialog>

namespace Ui {
class SELDialog;
}

class SELDialog : public QDialog
{
    Q_OBJECT

protected:
    void showEvent(QShowEvent *);

public:
    explicit SELDialog(QWidget *parent = 0);
    ~SELDialog();

    void setA(double**);
    void setF(double*);
    int getN();

private slots:
    void on_pushButton_A_clicked();

    void on_pushButton_f_clicked();

    void on_pushButton_limpar_clicked();

    void on_pushButton_calc_clicked();

    void on_pushButton_clicked();

private:
    Ui::SELDialog *ui;
    int nAtual,proxTab;
    double **A;
    double *f;
    bool remover;
};

#endif // SELDIALOG_H
