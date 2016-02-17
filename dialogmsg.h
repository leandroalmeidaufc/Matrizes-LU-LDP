#ifndef DIALOGMSG_H
#define DIALOGMSG_H

#include <QDialog>

namespace Ui {
class DialogMsg;
}

class DialogMsg : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMsg(QWidget *parent = 0);
    ~DialogMsg();
    void setMsg(QString);

private:
    Ui::DialogMsg *ui;
};

#endif // DIALOGMSG_H
