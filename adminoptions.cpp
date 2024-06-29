#include "adminoptions.h"
#include "admin.h"
#include "ui_adminoptions.h"
#include <QMessageBox>

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
    ui->VPassword->clear();
    ui->BackToAdminOptions->hide();
    ui->VerificationBox->hide();
    ui->Settings->show();
    ui->optionsBox->show();
    on_Settings_clicked();
}

void adminoptions::on_NextButton_clicked()
{
    QString pw = ui->VPassword->text();
    if(ad->pw_check(pw)==true)
    {
        ui->VPassword->clear();
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
        ui->BackToAdminOptions->show();
        if(v == "EmailChange")
        {

        }
        else if(v == "UsernameChange")
        {

        }
        else if(v == "PasswordChange")
        {

        }
        else if(v == "TwoFAChange")
        {

        }
        else if(v == "SQChange")
        {

        }
        else
        {
            on_BackToAdminOptions_clicked();
        }
    }
    else
    {
        QMessageBox::warning(this,"Error","The code you entered is incorrect.\nPlease try again!");
        ui->TwoFA1->setFocus();
    }
}
