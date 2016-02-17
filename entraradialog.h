#ifndef ENTRARADIALOG_H
#define ENTRARADIALOG_H

#include <QDialog>

namespace Ui {
class EntrarADialog;
}

class EntrarADialog : public QDialog
{
    Q_OBJECT

protected:
    void showEvent(QShowEvent *);

public:
    explicit EntrarADialog(QWidget *parent = 0);
    ~EntrarADialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EntrarADialog *ui;
};

#endif // ENTRARADIALOG_H
