#include "logindialog.h"
#include "ui_logindialog.h"
#include "QMessageBox.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
void LoginDialog::on_LoginButton_clicked()
{
    if(ui->usrLineEdit->text()==tr("lqa")&&ui->pwdLineEdit_2->text()==tr("12345")){
        accept();
    }
    else
    {
        QMessageBox::warning(this, tr("警告！"),
                           tr("用户名或密码错误！"),
                           QMessageBox::Yes);
        ui->usrLineEdit->clear();
        ui->pwdLineEdit_2->clear();
        ui->usrLineEdit->setFocus();
    }
}
