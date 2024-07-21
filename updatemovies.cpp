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
    QSqlQuery query(moviesData);
    query.prepare("SELECT Title,Poster from Movies_table ORDER BY Movie_ID DESC");
    query.exec();
    for(int i=1;i<=5;i++)
    {
        query.next();
        QString title = query.value(0).toString();
        QByteArray imageData = query.value(1).toByteArray();
        QPixmap pixmap;
        pixmap.loadFromData(imageData);

        QString posterName = QString("poster_%1").arg(i);
        QLabel *poster = findChild<QLabel *>(posterName);

        poster->setPixmap(pixmap);
    }

    database::closeMoviesData();
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

