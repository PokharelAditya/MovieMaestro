#include "adminoptions.h"
#include "admin.h"
#include "ui_adminoptions.h"
#include <QMessageBox>

adminoptions::adminoptions(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::adminoptions),
    SettingsGlow(":/SettingsGlow"),
    SettingsBack(":/back icon"),
    SettingsClick(false)
{
    ui->setupUi(this);
    ui->SettingsPanel->hide();
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

