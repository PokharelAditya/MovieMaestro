#include "adminoptions.h"
#include "admin.h"
#include "ui_adminoptions.h"
#include "addmovies.h"
#include "updatemovies.h"

QString option;
extern Admin *ad;
QString v;

adminoptions::adminoptions(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::adminoptions),
    SettingsGlow(":/SettingsGlow"),
    SettingsBack(":/back icon"),
    SettingsClick(false),
    pwvisible(false),
    OpenEye(":/OpenEye.png"),
    CloseEye(":/CloseEye.png")
{
    ui->setupUi(this);
    ui->SettingsPanel->hide();
    ui->BackToAdminOptions->hide();
    ui->VerificationBox->hide();
    ui->VPassword->setPlaceholderText("Current Password");
    ui->BackToPassword->hide();
    ui->TwoFABox->hide();
    ui->changeEmailBox->hide();
    ui->changeUNbox->hide();
    ui->changePWbox->hide();
    ui->change2FAbox->hide();
    ui->changeSQbox->hide();

    QIntValidator *intValidator = new QIntValidator(0, 9999, this);
    ui->new2FA->setValidator(intValidator);
    ui->cnew2FA->setValidator(intValidator);
}

adminoptions::~adminoptions()
{
    delete ui;
}

void adminoptions::on_Settings_clicked()
{
    SettingsClick = !SettingsClick;
    if(SettingsClick)
    {
        ui->Settings->setIcon(SettingsBack);
        ui->SettingsPanel->show();
    }
    else
    {
        ui->Settings->setIcon(SettingsGlow);
        ui->SettingsPanel->hide();
    }
}

void adminoptions::on_ExitButton_clicked()
{
    if(QMessageBox::question(this,"Exit","Close this window?",QMessageBox::Close,QMessageBox::Cancel) == QMessageBox::Close)
    {
        close();
    }
}

void adminoptions::on_LogOutButton_clicked()
{
    if(QMessageBox::question(this,"Sign Out","Are you sure to sign out?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        close();
        Admin *myadmin = new Admin();
        myadmin->show();
        QMessageBox::information(this,"Signed Out","You have been signed out.");
    }
}

void adminoptions::on_AEmailChangeButton_clicked()
{
    v = "EmailChange";
    verification();
}

void adminoptions::on_AUsernameChangeButton_clicked()
{
    v = "UsernameChange";
    verification();
}

void adminoptions::on_APasswordChangeButton_clicked()
{
    v = "PasswordChange";
    verification();
}

void adminoptions::on_TwoFAChangeButton_clicked()
{
    v = "TwoFAChange";
    verification();
}

void adminoptions::on_ASQChangeButton_clicked()
{
    v = "SQChange";
    verification();
}

void adminoptions::verification()
{
    ui->Settings->hide();
    ui->SettingsPanel->hide();
    ui->optionsBox->hide();
    ui->BackToAdminOptions->show();
    ui->VerificationBox->show();
}

void adminoptions::on_BackToAdminOptions_clicked()
{
    ui->BackToAdminOptions->hide();
    ui->VerificationBox->hide();
    ui->Settings->show();
    ui->optionsBox->show();
    on_Settings_clicked();
    ui->VPassword->clear();
    pwvisible = true;
    on_ShowHidePW_clicked();
    ui->newEmail->clear();
    ui->changeEmailBox->hide();
    ui->newUN->clear();
    ui->changeUNbox->hide();
    ui->newPassword->clear();
    ui->cnewPassword->clear();
    pwvisible = true;
    on_ShowHideNPW_clicked();
    ui->changePWbox->hide();
    ui->new2FA->clear();
    ui->cnew2FA->clear();
    pwvisible = true;
    on_ShowHide2FA_clicked();
    ui->change2FAbox->hide();
    ui->changeSQbox->hide();
}

void adminoptions::on_NextButton_clicked()
{
    QString pw = ui->VPassword->text();
    if(ad->pw_check(pw)==true)
    {
        ui->VPassword->clear();
        pwvisible = true;
        on_ShowHidePW_clicked();
        ui->BackToAdminOptions->hide();
        ui->VerificationBox->hide();
        ui->BackToPassword->show();
        ui->TwoFABox->show();
        ui->TwoFA1->setFocus();
    }
    else if(pw.isEmpty())
    {
        QMessageBox::warning(this,"Error","Password cannot be empty.");
        ui->VPassword->setFocus();
    }
    else
    {
        QMessageBox::warning(this,"Error","Password is incorrent.\nPlease try again!");
        ui->VPassword->clear();
        ui->VPassword->setFocus();
    }
}

void adminoptions::on_VPassword_returnPressed()
{
    on_NextButton_clicked();
}

void adminoptions::on_ShowHidePW_clicked()
{
    pwvisible = !pwvisible;
    if(pwvisible)
    {
        ui->VPassword->setEchoMode(QLineEdit::Normal);
        ui->ShowHidePW->setIcon(CloseEye);
    }
    else
    {
        ui->VPassword->setEchoMode(QLineEdit::Password);
        ui->ShowHidePW->setIcon(OpenEye);
    }
}

void adminoptions::on_BackToPassword_clicked()
{
    ui->TwoFA1->clear();
    ui->TwoFA2->clear();
    ui->TwoFA3->clear();
    ui->TwoFA4->clear();
    ui->BackToPassword->hide();
    ui->TwoFABox->hide();
    ui->BackToAdminOptions->show();
    ui->VerificationBox->show();
}

void adminoptions::on_TwoFA1_textChanged()
{
    int tfa1 = ui->TwoFA1->text().length();
    if(tfa1 == 1)
    {
        ui->TwoFA2->setFocus();
    }
}

void adminoptions::on_TwoFA2_textChanged()
{
    int tfa2 = ui->TwoFA2->text().length();
    if(tfa2 == 1)
    {
        ui->TwoFA3->setFocus();
    }
}

void adminoptions::on_TwoFA3_textChanged()
{
    int tfa3 = ui->TwoFA3->text().length();
    if(tfa3 == 1)
    {
        ui->TwoFA4->setFocus();
    }
}

void adminoptions::on_TwoFA4_textChanged()
{
    int tfa4 = ui->TwoFA4->text().length();
    if(tfa4 == 1)
    {
        on_NextButton2FA_clicked();
    }
}

void adminoptions::on_NextButton2FA_clicked()
{
    int tfa1 = ui->TwoFA1->text().toInt();
    int tfa2 = ui->TwoFA2->text().toInt();
    int tfa3 = ui->TwoFA3->text().toInt();
    int tfa4 = ui->TwoFA4->text().toInt();
    int tfa = tfa1*1000 + tfa2*100 + tfa3*10 + tfa4;
    ui->TwoFA1->clear();
    ui->TwoFA2->clear();
    ui->TwoFA3->clear();
    ui->TwoFA4->clear();
    if(ad->twoFA_check(tfa) == true)
    {
        ui->BackToPassword->hide();
        ui->TwoFABox->hide();
        if(v == "EmailChange")
        {
            ui->changeEmailBox->show();
        }
        else if(v == "UsernameChange")
        {
            ui->changeUNbox->show();
        }
        else if(v == "PasswordChange")
        {
            ui->changePWbox->show();
        }
        else if(v == "TwoFAChange")
        {
            ui->change2FAbox->show();
        }
        else if(v == "SQChange")
        {
            ui->changeSQbox->show();
            int id,D_twoFA;
            QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
            ad->accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
            ui->SQ1->setText(D_sq1);
            ui->SQ1ans->setText(D_sa1);
            ui->SQ2->setText(D_sq2);
            ui->SQ2ans->setText(D_sa2);
        }
    }
    else
    {
        QMessageBox::warning(this,"Error","The code you entered is incorrect.\nPlease try again!");
        ui->TwoFA1->setFocus();
    }
}

void adminoptions::on_cancelEmail_clicked()
{
    if(QMessageBox::question(this,"Cancel","Are you sure to cancel changing the email?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        on_BackToAdminOptions_clicked();
    }
}

void adminoptions::on_changeEmail_clicked()
{
    QString ne = ui->newEmail->text();
    if(ne.isEmpty())
    {
        QMessageBox::warning(this,"Error","Email cannot be empty.");
        ui->newEmail->setFocus();
    }
    else
    {
        int id,D_twoFA;
        QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
        ad->accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
        if(ne == D_email)
        {
            QMessageBox::warning(this,"Error","New email cannot be existing email.");
            ui->newEmail->clear();
            ui->newEmail->setFocus();
        }
        else if(ad->storeDB(id,D_un,D_pw,ne,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2))
        {
            QMessageBox::information(this,"Done","The email has been changed.");
            on_BackToAdminOptions_clicked();
        }
        else
        {
            QMessageBox::critical(this,"Error","Could not change email.");
        }
    }
}

void adminoptions::on_newEmail_returnPressed()
{
    on_changeEmail_clicked();
}

void adminoptions::on_cancelUN_clicked()
{
    if(QMessageBox::question(this,"Cancel","Are you sure to cancel changing the username?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        on_BackToAdminOptions_clicked();
    }
}

void adminoptions::on_changeUN_clicked()
{
    QString nun = ui->newUN->text();
    if(nun.isEmpty())
    {
        QMessageBox::warning(this,"Error","Username cannot be empty.");
        ui->newUN->setFocus();
    }
    else
    {
        int id,D_twoFA;
        QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
        ad->accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
        if(nun == D_un)
        {
            QMessageBox::warning(this,"Error","New username cannot be existing username.");
            ui->newUN->clear();
            ui->newUN->setFocus();
        }
        else if(ad->storeDB(id,nun,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2))
        {
            QMessageBox::information(this,"Done","The username has been changed.");
            on_BackToAdminOptions_clicked();
        }
        else
        {
            QMessageBox::critical(this,"Error","Could not change email.");
        }
    }
}

void adminoptions::on_newUN_returnPressed()
{
    on_changeUN_clicked();
}


void adminoptions::on_cancelPW_clicked()
{
    if(QMessageBox::question(this,"Cancel","Are you sure to cancel changing the password?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        on_BackToAdminOptions_clicked();
    }
}

void adminoptions::on_changePW_clicked()
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
        ad->accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
        if(np == D_pw)
        {
            QMessageBox::warning(this,"Error","New password cannot be existing password.");
            ui->newPassword->clear();
            ui->cnewPassword->clear();
            ui->newPassword->setFocus();
        }
        else if(ad->storeDB(id,D_un,np,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2))
        {
            QMessageBox::information(this,"Done","The password has been changed.");
            on_BackToAdminOptions_clicked();
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

void adminoptions::on_newPassword_returnPressed()
{
    on_changePW_clicked();
}

void adminoptions::on_cnewPassword_returnPressed()
{
    on_changePW_clicked();
}


void adminoptions::on_cancel2FA_clicked()
{
    if(QMessageBox::question(this,"Cancel","Are you sure to cancel changing the code?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        on_BackToAdminOptions_clicked();
    }
}

void adminoptions::on_change2FA_clicked()
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
        ad->accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
        int code = nc.toInt();
        if(code == D_twoFA)
        {
            QMessageBox::warning(this,"Error","New code cannot be existing code.");
            ui->new2FA->clear();
            ui->cnew2FA->clear();
            ui->new2FA->setFocus();
        }
        else if(ad->storeDB(id,D_un,D_pw,D_email,code,D_sq1,D_sa1,D_sq2,D_sa2))
        {
            QMessageBox::information(this,"Done","The code has been changed.");
            on_BackToAdminOptions_clicked();
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

void adminoptions::on_new2FA_returnPressed()
{
    on_change2FA_clicked();
}

void adminoptions::on_cnew2FA_returnPressed()
{
    on_change2FA_clicked();
}

void adminoptions::on_ShowHideNPW_clicked()
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

void adminoptions::on_ShowHide2FA_clicked()
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

void adminoptions::on_cancelSQ_clicked()
{
    if(QMessageBox::question(this,"Cancel","Are you sure to cancel changing the security question?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        on_BackToAdminOptions_clicked();
    }
}


void adminoptions::on_changeSQ_clicked()
{
    QString sq1 = ui->SQ1->text(), sa1 = ui->SQ1ans->text(), sq2 = ui->SQ2->text(), sa2 = ui->SQ2ans->text();
    if(sq1.isEmpty())
    {
        QMessageBox::warning(this,"Error","Secuity question cannot be empty.");
        ui->SQ1->setFocus();
    }
    else if(sa1.isEmpty())
    {
        QMessageBox::warning(this,"Error","Secuity question's answer cannot be empty.");
        ui->SQ1ans->setFocus();
    }
    else if(sq2.isEmpty())
    {
        QMessageBox::warning(this,"Error","Secuity question cannot be empty.");
        ui->SQ2->setFocus();
    }
    else if(sa2.isEmpty())
    {
        QMessageBox::warning(this,"Error","Secuity question's answer cannot be empty.");
        ui->SQ2ans->setFocus();
    }
    else
    {
        int id,D_twoFA;
        QString D_un,D_pw,D_email,D_sq1,D_sa1,D_sq2,D_sa2;
        ad->accessDB(id,D_un,D_pw,D_email,D_twoFA,D_sq1,D_sa1,D_sq2,D_sa2);
        if(sq1 == D_sq1 && sa1 == D_sa1 && sq2 == D_sq2 && sa2 == D_sa2)
        {
            QMessageBox::warning(this,"Error","There is no change in the security questions/answers.");
        }
        else if(ad->storeDB(id,D_un,D_pw,D_email,D_twoFA,sq1,sa1,sq2,sa2))
        {
            QMessageBox::information(this,"Done","The security questions have been updated.");
            on_BackToAdminOptions_clicked();
        }
        else
        {
            QMessageBox::critical(this,"Error","Could not change code.");
        }
    }
}


void adminoptions::on_viewButton_clicked()
{
    option = "view";
    close();
    updatemovies *um = new updatemovies();
    um->show();
}


void adminoptions::on_addButton_clicked()
{
    close();
    addmovies *am = new addmovies();
    am->show();
}


void adminoptions::on_updateButton_clicked()
{
    option = "update";
    close();
    updatemovies *um = new updatemovies();
    um->show();
}


void adminoptions::on_deleteButton_clicked()
{
    option = "delete";
    close();
    updatemovies *um = new updatemovies();
    um->show();
}

