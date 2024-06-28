#include "admin.h"
#include "user.h"
#include "adminoptions.h"
#include "ui_admin.h"
#include <QMessageBox>

Admin::Admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admin) ,
    pwvisible(false),
    OpenEye(":/OpenEye.png"),
    CloseEye(":/CloseEye.png")
{
    ui->setupUi(this);
    ui->AUsername->setPlaceholderText("Username");
    ui->APassword->setPlaceholderText("Password");
    ui->TwoFABox->hide();
    ui->BackToAdmin->hide();
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

void Admin::on_BackToAdmin_clicked()
{
    ui->BackToAdmin->hide();
    ui->BackToUser->show();
    ui->TwoFABox->hide();
    ui->AdminGroupBox->show();
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


void Admin::on_LogInButton_clicked()
{
    QString un = ui->AUsername->text();
    QString pw = ui->APassword->text();
    if(un == "Admin" && pw == ("admin"))
    {
        ui->BackToUser->hide();
        ui->BackToAdmin->show();
        ui->AdminGroupBox->hide();
        ui->TwoFABox->show();
        ui->TwoFA1->setFocus();
    }
    else if(un.isEmpty())
    {
        QMessageBox::warning(this,"Error","Username cannot be empty.");
        ui->AUsername->setFocus();
    }
    else if(pw.isEmpty())
    {
        QMessageBox::warning(this,"Error","Password cannot be empty.");
        ui->APassword->setFocus();
    }
    else if(un != "Admin")
    {
        QMessageBox::warning(this,"Error","Username is incorrent.\nPlease try again!");
        ui->AUsername->clear();
        ui->AUsername->setFocus();
    }
    else if(un != "admin")
    {
        QMessageBox::warning(this,"Error","Password is incorrent.\nPlease try again!");
        ui->APassword->clear();
        ui->APassword->setFocus();
    }
    else
    {

    }
}

void Admin::on_TwoFA1_textChanged()
{
    QString tfa1 = ui->TwoFA1->text();
    if(tfa1.length()==1)
    {
        ui->TwoFA2->setFocus();
    }
}

void Admin::on_TwoFA2_textChanged()
{
    QString tfa2 = ui->TwoFA2->text();
    if(tfa2.length()==1)
    {
        ui->TwoFA3->setFocus();
    }
}

void Admin::on_TwoFA3_textChanged()
{
    QString tfa3 = ui->TwoFA3->text();
    if(tfa3.length()==1)
    {
        ui->TwoFA4->setFocus();
    }
}

void Admin::on_TwoFA4_textChanged()
{
    QString tfa4 = ui->TwoFA4->text();
    if(tfa4.length()==1)
    {
        on_ConfirmButton_clicked();
    }
}

void Admin::on_ConfirmButton_clicked()
{
    QString tfa1 = ui->TwoFA1->text();
    QString tfa2 = ui->TwoFA2->text();
    QString tfa3 = ui->TwoFA3->text();
    QString tfa4 = ui->TwoFA4->text();
    if(tfa1=='5' && tfa2=='6' && tfa3 == '7' && tfa4 == '8')
    {
        close();
        adminoptions *ao = new adminoptions();
        ao->show();
    }
    else
    {
        QMessageBox::warning(this,"Error","The code you entered is incorrect.\nPlease try again!");
        ui->TwoFA1->clear();
        ui->TwoFA2->clear();
        ui->TwoFA3->clear();
        ui->TwoFA4->clear();
        ui->TwoFA1->setFocus();
    }
}
