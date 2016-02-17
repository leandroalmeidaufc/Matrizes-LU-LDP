#include "dialogmsg.h"
#include "ui_dialogmsg.h"

DialogMsg::DialogMsg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMsg)
{
    ui->setupUi(this);
}

DialogMsg::~DialogMsg()
{
    delete ui;
}

void DialogMsg::setMsg(QString qs) {
    ui->l_msg->setText(qs);
}
