#include "user.h"
#include "ui_user.h"
#include "admin.h"

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
