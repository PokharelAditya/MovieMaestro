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

void Admin::accessDB(int &id,QString &D_un,QString &D_pw,QString &D_email,int &D_twoFA,QString &D_sq1,QString &D_sa1,QString &D_sq2,QString &D_sa2)
{
    QSqlQuery query;
    query.prepare("SELECT Id, Username, Password, Email, TwoFA, SecurityQuestion1, SecurityAnswer1, SecurityQuestion2, SecurityAnswer2 FROM ADMIN");
    query.exec();

    QString E_un,E_pw,E_email,E_twoFA,E_sq1,E_sa1,E_sq2,E_sa2;

    while(query.next())
    {
        id = query.value(0).toInt();
        E_un = query.value(1).toString();
        E_pw = query.value(2).toString();
        E_email = query.value(3).toString();
        E_twoFA = query.value(4).toString();
        E_sq1 = query.value(5).toString();
        E_sa1 = query.value(6).toString();
        E_sq2 = query.value(7).toString();
        E_sa2 = query.value(8).toString();
    }

    D_un = decrypt(E_un);
    D_pw = decrypt(E_pw);
    D_email = decrypt(E_email);
    D_twoFA = decrypt(E_twoFA).toInt();
    D_sq1 = decrypt(E_sq1);
    D_sa1 = decrypt(E_sa1);
    D_sq2 = decrypt(E_sq2);
    D_sa2 = decrypt(E_sa2);
}

QString Admin::encrypt(QString d)
{
    QString e="",h;
    int a;
    for(int i=d.length()-1;i>=0;i--)
    {
        a = static_cast<int>(d[i].toLatin1());
        a = (((((a+43)*7)+19)*3)+413);
        h = QString::number(a,16).toUpper();
        e = e + h;
    }
    return e;
}

QString Admin::decrypt(QString e)
{
    QString h,d="";
    int a;
    bool ok;
    for(int i=e.length();i>0;i-=3)
    {
        h = "";
        for(int j=i-3;j<i;j++)
        {
            h = h + e[j];
        }
        a = h.toInt(&ok,16);
        a = (((((a-413)/3)-19)/7)-43);
        d = d + QString(QChar(static_cast<char>(a)));
    }
    return d;
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
    int id,D_twoFA;
    QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
    accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
    if(D_un == un)
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
    int id,D_twoFA;
    QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
    accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
    if(D_pw == pw)
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
    int id,D_twoFA;
    QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
    accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
    if(D_twoFA==tfa)
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
