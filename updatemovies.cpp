#include "updatemovies.h"
#include "ui_updatemovies.h"
#include "adminoptions.h"
#include "database.h"

updatemovies::updatemovies(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::updatemovies)
{
    ui->setupUi(this);

    QSqlDatabase moviesData = database::getMoviesData();

}

updatemovies::~updatemovies()
{
    delete ui;
}

void updatemovies::on_BackToAdminOptions_clicked()
{
    close();
    adminoptions *ao = new adminoptions();
    ao->show();
}

