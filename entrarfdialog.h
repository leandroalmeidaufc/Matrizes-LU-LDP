#ifndef ENTRARFDIALOG_H
#define ENTRARFDIALOG_H

#include <QDialog>

namespace Ui {
class EntrarFDialog;
}

class EntrarFDialog : public QDialog
{
    Q_OBJECT

protected:
    void showEvent(QShowEvent *);

public:
    explicit EntrarFDialog(QWidget *parent = 0);
    ~EntrarFDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EntrarFDialog *ui;
};

#endif // ENTRARFDIALOG_H
