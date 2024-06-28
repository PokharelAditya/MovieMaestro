#include "admin.h"
#include "user.h"
#include "adminoptions.h"
#include "ui_admin.h"
#include <QMessageBox>
#include <QCoreApplication>

Admin *ad = nullptr;

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

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QCoreApplication::applicationDirPath() + "/AdminAuthentication.db");

    if(!db.open())
    {
        QMessageBox::critical(this,"Error","Failed to connect database");
        QTimer::singleShot(0, qApp, SLOT(quit()));
        return;
    }
}

void Admin::accessDB(int &id,QString &DBun,QString &DBpw,QString &DBemail,int &DBtwoFA)
{
    QSqlQuery query;
    query.prepare("SELECT Id, Username, Password, Email, TwoFA FROM ADMIN");
    query.exec();

    while(query.next())
    {
        id = query.value(0).toInt();
        DBun = query.value(1).toString();
        DBpw = query.value(2).toString();
        DBemail = query.value(3).toString();
        DBtwoFA = query.value(4).toInt();
    }
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
    ui->TwoFA1->clear();
    ui->TwoFA2->clear();
    ui->TwoFA3->clear();
    ui->TwoFA4->clear();
    ui->AUsername->clear();
    ui->APassword->clear();
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

bool Admin::un_check(QString un)
{
    int id,DBtwoFA;
    QString DBun,DBpw,DBemail;
    accessDB(id,DBun,DBpw,DBemail,DBtwoFA);
    if(DBun == un)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Admin::pw_check(QString pw)
{
    int id,DBtwoFA;
    QString DBun,DBpw,DBemail;
    accessDB(id,DBun,DBpw,DBemail,DBtwoFA);
    if(DBpw == pw)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Admin::on_LogInButton_clicked()
{

    QString un = ui->AUsername->text();
    QString pw = ui->APassword->text();
    if((un_check(un) == true) && (pw_check(pw) == true))
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
    else if(un_check(un) == false)
    {
        QMessageBox::warning(this,"Error","Username is incorrent.\nPlease try again!");
        ui->AUsername->clear();
        ui->AUsername->setFocus();
    }
    else if(pw_check(pw) == false)
    {
        QMessageBox::warning(this,"Error","Password is incorrent.\nPlease try again!");
        ui->APassword->clear();
        ui->APassword->setFocus();
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


bool Admin::twoFA_check(int tfa)
{
    int id,DBtwoFA;
    QString DBun,DBpw,DBemail;
    accessDB(id,DBun,DBpw,DBemail,DBtwoFA);
    if(DBtwoFA==tfa)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Admin::on_ConfirmButton_clicked()
{
    int tfa1 = ui->TwoFA1->text().toInt();
    int tfa2 = ui->TwoFA2->text().toInt();
    int tfa3 = ui->TwoFA3->text().toInt();
    int tfa4 = ui->TwoFA4->text().toInt();
    int tfa = tfa1*1000 + tfa2*100 + tfa3*10 + tfa4;
    if(twoFA_check(tfa) == true)
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

void Admin::on_forgotPassword_clicked()
{

}

void Admin::on_forgotTwoFA_clicked()
{

}
