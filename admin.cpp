#include "admin.h"
#include "user.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admin) ,
    pwvisible(false),
    CloseEye(":/CloseEye.png"),
    OpenEye(":/OpenEye.png")
{
    ui->setupUi(this);
    ui->AUsername->setPlaceholderText("Username");
    ui->APassword->setPlaceholderText("Password");
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_BackToUser_clicked()
{
    close();
    User *myuser = new User();
    myuser->show();
}


void Admin::on_ShowHidePW_clicked()
{
    pwvisible = !pwvisible;
    if(pwvisible)
    {
        ui->APassword->setEchoMode(QLineEdit::Normal);
        ui->ShowHidePW->setIcon(CloseEye);
    }
    else
    {
        ui->APassword->setEchoMode(QLineEdit::Password);
        ui->ShowHidePW->setIcon(OpenEye);
    }
}

