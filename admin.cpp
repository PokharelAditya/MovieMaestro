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
    ui->BackTo2FA->hide();
    ui->SecurityBox->hide();
    ui->forgotPwBox->hide();
    ui->forgot2faBox->hide();

    QIntValidator *intValidator = new QIntValidator(0, 9999, this);
    ui->new2FA->setValidator(intValidator);
    ui->cnew2FA->setValidator(intValidator);

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

bool Admin::storeDB(int &id,QString &D_un,QString &D_pw,QString &D_email,int &D_twoFA,QString &D_sq1,QString &D_sa1,QString &D_sq2,QString &D_sa2)
{
    QString E_un,E_pw,E_email,E_twoFA,E_sq1,E_sa1,E_sq2,E_sa2;
    E_un = encrypt(D_un);
    E_pw = encrypt(D_pw);
    E_email = encrypt(D_email);
    E_twoFA = encrypt(QString::number(D_twoFA));
    E_sq1 = encrypt(D_sq1);
    E_sa1 = encrypt(D_sa1);
    E_sq2 = encrypt(D_sq2);
    E_sa2 = encrypt(D_sa2);
    id++;

    QSqlQuery query;
    query.prepare("INSERT INTO ADMIN(Id, Username, Password, Email, TwoFA, SecurityQuestion1, SecurityAnswer1, SecurityQuestion2, SecurityAnswer2)"
                  "VALUES(:id, :un, :pw, :email, :twoFA, :sq1, :sa1, :sq2, :sa2)");
    query.bindValue(":id",id);
    query.bindValue(":un",E_un);
    query.bindValue(":pw",E_pw);
    query.bindValue(":email",E_email);
    query.bindValue(":twoFA",E_twoFA);
    query.bindValue(":sq1",E_sq1);
    query.bindValue(":sa1",E_sa1);
    query.bindValue(":sq2",E_sq2);
    query.bindValue(":sa2",E_sa2);

    if(query.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
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
    ui->AdminGroupBox->show();
    ui->BackToUser->show();
    ui->BackToAdmin->hide();
    ui->TwoFABox->hide();
    ui->TwoFA1->clear();
    ui->TwoFA2->clear();
    ui->TwoFA3->clear();
    ui->TwoFA4->clear();
    ui->SQ1ans->clear();
    ui->SQ2ans->clear();
    ui->SecurityBox->hide();
    ui->forgotPwBox->hide();
    ui->newPassword->clear();
    ui->cnewPassword->clear();
    pwvisible = true;
    on_ShowHideNPW_clicked();
    ui->forgot2faBox->hide();
    ui->new2FA->clear();
    ui->cnew2FA->clear();
    pwvisible = true;
    on_ShowHide2FA_clicked();
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
        ui->AUsername->clear();
        ui->APassword->clear();
        pwvisible = true;
        on_ShowHidePW_clicked();
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

QString s;

void Admin::on_forgotPassword_clicked()
{
    s = "forgotpassword";
    pwvisible = true;
    on_ShowHidePW_clicked();
    ui->AUsername->clear();
    ui->APassword->clear();
    ui->BackToUser->hide();
    ui->AdminGroupBox->hide();
    ui->BackToAdmin->show();
    securityQuestions();
}

void Admin::on_forgotTwoFA_clicked()
{
    s = "forgot2fa";
    ui->TwoFA1->clear();
    ui->TwoFA2->clear();
    ui->TwoFA3->clear();
    ui->TwoFA4->clear();
    ui->BackToAdmin->hide();
    ui->TwoFABox->hide();
    ui->BackTo2FA->show();
    securityQuestions();
}

void Admin::securityQuestions()
{
    ui->SecurityBox->show();

    int id,D_twoFA;
    QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
    accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);

    ui->textSQ1->setText("1. " + D_sq1);
    ui->textSQ2->setText("2. " + D_sq2);
}

void Admin::on_BackTo2FA_clicked()
{
    ui->SQ1ans->clear();
    ui->SQ2ans->clear();
    ui->BackTo2FA->hide();
    ui->SecurityBox->hide();
    ui->BackToAdmin->show();
    ui->TwoFABox->show();
}

void Admin::on_SQ1ans_returnPressed()
{
    ui->SQ2ans->setFocus();
}

void Admin::on_SQ2ans_returnPressed()
{
    on_nextButton_clicked();
}

void Admin::on_nextButton_clicked()
{
    int id,D_twoFA;
    QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
    accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);

    if(ui->SQ1ans->text() == D_sa1 && ui->SQ2ans->text() == D_sa2)
    {
        ui->BackToAdmin->hide();
        ui->BackTo2FA->hide();
        ui->SecurityBox->hide();
        if(s == "forgotpassword")
        {
            ui->forgotPwBox->show();
        }
        else if(s == "forgot2fa")
        {
            ui->forgot2faBox->show();
        }
    }
    else
    {
        QMessageBox::warning(this,"Error","The answer you entered is incorrect.\nPlease try again!");
        ui->SQ1ans->clear();
        ui->SQ2ans->clear();
        ui->SQ1ans->setFocus();
    }
}

void Admin::on_cancelPW_clicked()
{
    if(QMessageBox::question(this,"Cancel","Are you sure to cancel resetting the password?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        on_BackToAdmin_clicked();
    }
}

void Admin::on_ShowHideNPW_clicked()
{
    pwvisible = !pwvisible;
    if(pwvisible)
    {
        ui->newPassword->setEchoMode(QLineEdit::Normal);
        ui->cnewPassword->setEchoMode(QLineEdit::Normal);
        ui->ShowHideNPW->setIcon(CloseEye);
    }
    else
    {
        ui->newPassword->setEchoMode(QLineEdit::Password);
        ui->cnewPassword->setEchoMode(QLineEdit::Password);
        ui->ShowHideNPW->setIcon(OpenEye);
    }
}

void Admin::on_resetPW_clicked()
{
    QString np = ui->newPassword->text(),cp = ui->cnewPassword->text();
    if(np.isEmpty())
    {
        QMessageBox::warning(this,"Error","Password cannot be empty.");
        ui->newPassword->setFocus();
    }
    else if(cp.isEmpty())
    {
        QMessageBox::warning(this,"Error","Password cannot be empty.");
        ui->cnewPassword->setFocus();
    }
    else if(np == cp)
    {
        int id,D_twoFA;
        QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
        accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
        if(np == D_pw)
        {
            QMessageBox::warning(this,"Error","New password cannot be existing password.");
            ui->newPassword->clear();
            ui->cnewPassword->clear();
            ui->newPassword->setFocus();
        }
        else if(storeDB(id,D_un,np,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2))
        {
            QMessageBox::information(this,"Done","The password has been changed.");
            QTimer::singleShot(0,this,SLOT(on_BackToAdmin_clicked()));
        }
        else
        {
            QMessageBox::critical(this,"Error","Could not change password.");
        }
    }
    else
    {
        QMessageBox::warning(this,"Error","Passwords do not match.");
        ui->newPassword->clear();
        ui->cnewPassword->clear();
        ui->newPassword->setFocus();
    }
}

void Admin::on_newPassword_returnPressed()
{
    on_resetPW_clicked();
}

void Admin::on_cnewPassword_returnPressed()
{
    on_resetPW_clicked();
}

void Admin::on_cancel2FA_clicked()
{
    if(QMessageBox::question(this,"Cancel","Are you sure to cancel resetting the code?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        on_BackToAdmin_clicked();
    }
}

void Admin::on_ShowHide2FA_clicked()
{
    pwvisible = !pwvisible;
    if(pwvisible)
    {
        ui->new2FA->setEchoMode(QLineEdit::Normal);
        ui->cnew2FA->setEchoMode(QLineEdit::Normal);
        ui->ShowHide2FA->setIcon(CloseEye);
    }
    else
    {
        ui->new2FA->setEchoMode(QLineEdit::Password);
        ui->cnew2FA->setEchoMode(QLineEdit::Password);
        ui->ShowHide2FA->setIcon(OpenEye);
    }
}

void Admin::on_reset2FA_clicked()
{
    QString nc = ui->new2FA->text(),cc = ui->cnew2FA->text();
    if(nc.isEmpty())
    {
        QMessageBox::warning(this,"Error","Code cannot be empty.");
        ui->new2FA->setFocus();
    }
    else if(cc.isEmpty())
    {
        QMessageBox::warning(this,"Error","Code cannot be empty.");
        ui->cnew2FA->setFocus();
    }
    else if(nc.length() != 4)
    {
        QMessageBox::warning(this,"Error","Code must be of 4 digit.");
        ui->new2FA->clear();
        ui->new2FA->setFocus();
    }
    else if(cc.length() != 4)
    {
        QMessageBox::warning(this,"Error","Code must be of 4 digit.");
        ui->cnew2FA->clear();
        ui->cnew2FA->setFocus();
    }
    else if(nc == cc)
    {
        int id,D_twoFA;
        QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
        accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
        int code = nc.toInt();
        if(code == D_twoFA)
        {
            QMessageBox::warning(this,"Error","New code cannot be existing code.");
            ui->new2FA->clear();
            ui->cnew2FA->clear();
            ui->new2FA->setFocus();
        }
        else if(storeDB(id,D_un,D_pw,D_email,code,D_sq1,D_sa1,D_sq2,D_sa2))
        {
            QMessageBox::information(this,"Done","The code has been changed.");
            QTimer::singleShot(0,this,SLOT(on_BackToAdmin_clicked()));
        }
        else
        {
            QMessageBox::critical(this,"Error","Could not change code.");
        }
    }
    else
    {
        QMessageBox::warning(this,"Error","Codes do not match.");
        ui->new2FA->clear();
        ui->cnew2FA->clear();
        ui->new2FA->setFocus();
    }
}

void Admin::on_new2FA_returnPressed()
{
    on_reset2FA_clicked();
}

void Admin::on_cnew2FA_returnPressed()
{
    on_reset2FA_clicked();
}
