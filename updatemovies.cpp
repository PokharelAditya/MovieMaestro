#include "updatemovies.h"
#include "ui_updatemovies.h"
#include "adminoptions.h"
#include "database.h"

extern QString option;

updatemovies::updatemovies(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::updatemovies)
{
    ui->setupUi(this);
    ui->viewMoviesBox->hide();
    ui->deleteMoviesBox->hide();

    QSqlDatabase moviesData = database::getMoviesData();
    QSqlQuery query(moviesData);
    query.prepare("SELECT Movie_ID from Movies_table ORDER BY Movie_ID DESC");
    query.exec();
    query.next();
    int id = query.value(0).toInt();
    database::closeMoviesData();
    setPoster(id);
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

void updatemovies::setPoster(int id)
{
    QSqlDatabase moviesData = database::getMoviesData();
    QSqlQuery query(moviesData);
    query.prepare("SELECT Movie_ID,Poster from Movies_table ORDER BY Movie_ID DESC");
    query.exec();
    while(query.next())
    {
        if(query.value(0).toInt() == id)
        {
            for(int i=1;i<=14;i++)
            {
                QString posterName = QString("poster_%1").arg(i);
                QPushButton *poster = findChild<QPushButton *>(posterName);
                QString idName = QString("textID_%1").arg(i);
                QLabel *textID = findChild<QLabel *>(idName);

                QString mid = query.value(0).toString();
                QByteArray imageData = query.value(1).toByteArray();
                QPixmap pixmap;
                pixmap.loadFromData(imageData);

                textID->setText(mid);
                poster->setIcon(pixmap);
                poster->setIconSize(QSize(120,180));

                if(mid.isEmpty())
                {
                    poster->hide();
                    textID->hide();
                }
                else
                {
                    poster->show();
                    textID->show();
                    poster->installEventFilter(this);
                }

                query.next();
            }
            break;
        }
    }
    database::closeMoviesData();
}

void updatemovies::on_Next_clicked()
{
    int id = 0;
    QSqlDatabase moviesData = database::getMoviesData();
    QSqlQuery query(moviesData);
    query.prepare("SELECT Movie_ID FROM Movies_table ORDER BY Movie_ID DESC");
    query.exec();
    while(query.next())
    {
        if(query.value(0).toInt() == ui->textID_14->text().toInt())
        {
            query.next();
            id = query.value(0).toInt();
            break;
        }
    }
    database::closeMoviesData();
    setPoster(id);
}

void updatemovies::on_Previous_clicked()
{
    int id = 0;
    QSqlDatabase moviesData = database::getMoviesData();
    QSqlQuery query(moviesData);
    query.prepare("SELECT Movie_ID FROM Movies_table ORDER BY Movie_ID ASC");
    query.exec();
    while(query.next())
    {
        if(query.value(0).toInt() == ui->textID_1->text().toInt())
        {   for(int i=1;i<=14;i++)
            {
                query.next();
                id = query.value(0).toInt();
            }
            break;
        }
    }
    database::closeMoviesData();
    setPoster(id);
}

void updatemovies::setTitle(int id)
{
    QSqlDatabase moviesData = database::getMoviesData();
    QSqlQuery query(moviesData);
    query.prepare("SELECT Title from Movies_table WHERE Movie_ID = :id");
    query.bindValue(":id",id);
    query.exec();
    query.next();
    ui->titleText->setText(query.value(0).toString());
    database::closeMoviesData();
}

bool updatemovies::eventFilter(QObject *obj, QEvent *event)
{
    for(int i=1;i<=14;i++)
    {
        QString posterName = QString("poster_%1").arg(i);
        QPushButton *poster = findChild<QPushButton *>(posterName);
        QString idName = QString("textID_%1").arg(i);
        QLabel *textID = findChild<QLabel *>(idName);

        if(obj == poster)
        {
            if(event->type() == QEvent::Enter)
            {
                setTitle(textID->text().toInt());
                poster->resize(134,199);
                poster->setIconSize(QSize(130,195));
                return true;
            }
            else if(event->type() == QEvent::Leave)
            {
                ui->titleText->clear();
                poster->resize(124,184);
                poster->setIconSize(QSize(120,180));
                return true;
            }
        }
    }
    return QWidget::eventFilter(obj, event);
}

void updatemovies::on_poster_1_clicked()
{
    viewupdatedelete(ui->textID_1->text().toInt());
}

void updatemovies::on_poster_2_clicked()
{
    viewupdatedelete(ui->textID_2->text().toInt());
}

void updatemovies::on_poster_3_clicked()
{
    viewupdatedelete(ui->textID_3->text().toInt());
}

void updatemovies::on_poster_4_clicked()
{
    viewupdatedelete(ui->textID_4->text().toInt());
}

void updatemovies::on_poster_5_clicked()
{
    viewupdatedelete(ui->textID_5->text().toInt());
}

void updatemovies::on_poster_6_clicked()
{
    viewupdatedelete(ui->textID_6->text().toInt());
}

void updatemovies::on_poster_7_clicked()
{
    viewupdatedelete(ui->textID_7->text().toInt());
}

void updatemovies::on_poster_8_clicked()
{
    viewupdatedelete(ui->textID_8->text().toInt());
}

void updatemovies::on_poster_9_clicked()
{
    viewupdatedelete(ui->textID_9->text().toInt());
}

void updatemovies::on_poster_10_clicked()
{
    viewupdatedelete(ui->textID_10->text().toInt());
}

void updatemovies::on_poster_11_clicked()
{
    viewupdatedelete(ui->textID_11->text().toInt());
}

void updatemovies::on_poster_12_clicked()
{
    viewupdatedelete(ui->textID_12->text().toInt());
}

void updatemovies::on_poster_13_clicked()
{
    viewupdatedelete(ui->textID_13->text().toInt());
}

void updatemovies::on_poster_14_clicked()
{
    viewupdatedelete(ui->textID_14->text().toInt());
}

void updatemovies::viewupdatedelete(int id)
{
    ui->BackToAdminOptions->hide();
    ui->searchGroupBox->hide();
    ui->moviesBox->hide();

    QSqlDatabase moviesData = database::getMoviesData();

    QSqlQuery Mquery(moviesData);
    Mquery.prepare("SELECT Title, Duration, Released_Date, Description, Poster, Rating from Movies_table WHERE Movie_ID = :id");
    Mquery.bindValue(":id",id);
    Mquery.exec();
    Mquery.next();
    QString title = Mquery.value(0).toString(),duration = Mquery.value(1).toString(),date = Mquery.value(2).toString(),description = Mquery.value(3).toString(),rating = Mquery.value(5).toString();
    if(rating.isEmpty())
    {
        rating = "Unrated";
    }
    else
    {
        rating += "/5";
    }
    QByteArray imageData = Mquery.value(4).toByteArray();
    QPixmap pixmap;
    pixmap.loadFromData(imageData);

    QString genres;
    QSqlQuery MGquery(moviesData);
    MGquery.prepare("SELECT Genre_ID FROM MoviesGenres_table WHERE Movie_ID = :id");
    MGquery.bindValue(":id",id);
    MGquery.exec();
    while(MGquery.next())
    {
        QSqlQuery Gquery(moviesData);
        Gquery.prepare("SELECT Genre_ID, Genre_Name FROM Genres_table");
        Gquery.exec();
        while(Gquery.next())
        {
            if(MGquery.value(0).toInt() == Gquery.value(0).toInt())
            {
                if(genres.isEmpty())
                {
                    genres = Gquery.value(1).toString();
                }
                else
                {
                    genres += ", " + Gquery.value(1).toString();
                }
                break;
            }
        }
    }

    QString directors;
    QSqlQuery MDquery(moviesData);
    MDquery.prepare("SELECT Director_ID FROM MoviesDirectors_table WHERE Movie_ID = :id");
    MDquery.bindValue(":id",id);
    MDquery.exec();
    while(MDquery.next())
    {
        QSqlQuery Dquery(moviesData);
        Dquery.prepare("SELECT Director_ID, Director_Name FROM Directors_table");
        Dquery.exec();
        while(Dquery.next())
        {
            if(MDquery.value(0).toInt() == Dquery.value(0).toInt())
            {
                if(directors.isEmpty())
                {
                    directors = Dquery.value(1).toString();
                }
                else
                {
                    directors += ", " + Dquery.value(1).toString();
                }
                break;
            }
        }
    }

    QString casts;
    QSqlQuery MCquery(moviesData);
    MCquery.prepare("SELECT Cast_ID FROM MoviesCasts_table WHERE Movie_ID = :id");
    MCquery.bindValue(":id",id);
    MCquery.exec();
    while(MCquery.next())
    {
        QSqlQuery Cquery(moviesData);
        Cquery.prepare("SELECT Cast_ID, Cast_Name FROM Casts_table");
        Cquery.exec();
        while(Cquery.next())
        {
            if(MCquery.value(0).toInt() == Cquery.value(0).toInt())
            {
                if(casts.isEmpty())
                {
                    casts = Cquery.value(1).toString();
                }
                else
                {
                    casts += ", " + Cquery.value(1).toString();
                }
                break;
            }
        }
    }
    database::closeMoviesData();

    if(option == "view")
    {
        ui->viewMoviesBox->show();
        ui->viewTitle->setText(title);
        ui->viewPoster->setPixmap(pixmap);
        ui->viewDetails->setText("Overview:\n" + description + "\n\nGenre:  " + genres + "\nReleased:  " + date + "\nDuration:  " + duration + "  min\nRating:  " + rating + "\n\nDirectors:  " + directors + "\nCasts:  " + casts);
    }
    else if(option == "update")
    {

    }
    else if(option == "delete")
    {
        ui->deleteMoviesBox->show();
        ui->deleteID->setText(QString::number(id));
        ui->deleteTitle->setText(title);
        ui->deletePoster->setPixmap(pixmap);
        ui->deleteDetails->setText("Overview:\n" + description + "\n\nGenre:  " + genres + "\nReleased:  " + date + "\nDuration:  " + duration + "  min\nRating:  " + rating + "\n\nDirectors:  " + directors + "\nCasts:  " + casts);
    }
}

void updatemovies::on_viewDoneButton_clicked()
{
    ui->viewMoviesBox->hide();
    ui->BackToAdminOptions->show();
    ui->searchGroupBox->show();
    ui->moviesBox->show();
}

void updatemovies::on_deleteCancelButton_clicked()
{
    ui->deleteMoviesBox->hide();
    ui->moviesBox->show();
    ui->searchGroupBox->show();
    ui->BackToAdminOptions->show();
}

void updatemovies::on_deleteDeleteButton_clicked()
{
    if(QMessageBox::question(this,"?","Do you want to delete this movie permanently?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
        QSqlDatabase moviesData = database::getMoviesData();
        QSqlQuery query(moviesData);
        int id = ui->deleteID->text().toInt();
        query.prepare("DELETE FROM Movies_table WHERE Movie_ID = :id");
        query.bindValue(":id",id);
        if(query.exec())
        {
            database::closeMoviesData();
            QMessageBox::information(this,"Info","Movie has been deleted successfully");
            close();
            updatemovies *um = new updatemovies();
            um->show();
        }
        else
        {
            database::closeMoviesData();
            QMessageBox::critical(this,"Error","Failed to delete movie.");
        }
    }
}
