#include "user.h"
#include "ui_user.h"
#include "admin.h"
#include<QMessageBox>
User::User(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::User)
{
    ui->setupUi(this);
}

User::~User()
{
    delete ui;
}

void User::on_haveanaccountlabel_linkActivated(const QString &link)
{
    QMessageBox::information(this , "check" , "you have pressed this link");
}

