#include "updatemovies.h"
#include "ui_updatemovies.h"
#include "adminoptions.h"
#include "database.h"

extern QString option;
int searchId = 0;

updatemovies::updatemovies(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::updatemovies)
{
    ui->setupUi(this);
    ui->viewMoviesBox->hide();
    ui->deleteMoviesBox->hide();
    ui->updateMoviesBox->hide();

    QIntValidator *intValidator = new QIntValidator(0,999,this);
    ui->duration->setValidator(intValidator);

    QSqlDatabase moviesData = database::getMoviesData();
    QSqlQuery query(moviesData);
    query.prepare("SELECT Movie_ID from Movies_table ORDER BY Title ASC");
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
    query.prepare("SELECT Movie_ID,Poster from Movies_table ORDER BY Title ASC");
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
    if(!(ui->searchBox->text().isEmpty()))
    {
        QSqlDatabase moviesData = database::getMoviesData();
        QSqlQuery Squery(moviesData);
        Squery.prepare("SELECT Movie_ID from Movies_table WHERE title LIKE :searchText ORDER BY Title ASC");
        Squery.bindValue(":searchText","%"+ui->searchBox->text()+"%");
        Squery.exec();
        while(Squery.next())
        {
            if(Squery.value(0).toInt() == ui->textID_14->text().toInt())
            {
                Squery.next();
                searchId = Squery.value(0).toInt();
            }
        }
        database::closeMoviesData();
        on_searchBox_textChanged(ui->searchBox->text());
        return;
    }

    int id = 0;
    QSqlDatabase moviesData = database::getMoviesData();
    QSqlQuery query(moviesData);
    query.prepare("SELECT Movie_ID FROM Movies_table ORDER BY Title ASC");
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
    if(!(ui->searchBox->text().isEmpty()))
    {
        QSqlDatabase moviesData = database::getMoviesData();
        QSqlQuery Squery(moviesData);
        Squery.prepare("SELECT Movie_ID from Movies_table WHERE title LIKE :searchText ORDER BY Title DESC");
        Squery.bindValue(":searchText","%"+ui->searchBox->text()+"%");
        Squery.exec();
        while(Squery.next())
        {
            if(Squery.value(0).toInt() == ui->textID_1->text().toInt())
            {
                for(int i=1;i<=14;i++)
                {
                    Squery.next();
                }
                searchId = Squery.value(0).toInt();
            }
        }
        database::closeMoviesData();
        on_searchBox_textChanged(ui->searchBox->text());
        return;
    }

    int id = 0;
    QSqlDatabase moviesData = database::getMoviesData();
    QSqlQuery query(moviesData);
    query.prepare("SELECT Movie_ID FROM Movies_table ORDER BY Title DESC");
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
    ui->action->setChecked(false);
    ui->comedy->setChecked(false);
    ui->crime->setChecked(false);
    ui->drama->setChecked(false);
    ui->history->setChecked(false);
    ui->horror->setChecked(false);
    ui->romance->setChecked(false);
    ui->scifi->setChecked(false);
    ui->suspense->setChecked(false);
    ui->thriller->setChecked(false);
    while(MGquery.next())
    {
        int gid = MGquery.value(0).toInt();
        if(gid == 1)
        {
            ui->action->setChecked(true);
        }
        else if(gid == 2)
        {
            ui->comedy->setChecked(true);
        }
        else if(gid == 3)
        {
            ui->crime->setChecked(true);
        }
        else if(gid == 4)
        {
            ui->drama->setChecked(true);
        }
        else if(gid == 5)
        {
            ui->history->setChecked(true);
        }
        else if(gid == 6)
        {
            ui->horror->setChecked(true);
        }
        else if(gid == 7)
        {
            ui->romance->setChecked(true);
        }
        else if(gid == 8)
        {
            ui->scifi->setChecked(true);
        }
        else if(gid == 9)
        {
            ui->suspense->setChecked(true);
        }
        else if(gid == 10)
        {
            ui->thriller->setChecked(true);
        }
        QSqlQuery Gquery(moviesData);
        Gquery.prepare("SELECT Genre_ID, Genre_Name FROM Genres_table");
        Gquery.exec();
        while(Gquery.next())
        {
            if(gid == Gquery.value(0).toInt())
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
        ui->updateMoviesBox->show();
        ui->updateID->setText(QString::number(id));
        ui->title->setText(title);
        ui->duration->setText(duration);
        ui->date->setDate(QDate::fromString(date,"yyyy-MM-dd"));
        ui->directors->setText(directors);
        ui->casts->setText(casts);
        ui->description->setText(description);
        ui->poster->setText("Change Poster");
        ui->posterLabel->setPixmap(pixmap);
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

void updatemovies::on_updateCancelButton_clicked()
{
    ui->updateMoviesBox->hide();
    ui->BackToAdminOptions->show();
    ui->searchGroupBox->show();
    ui->moviesBox->show();
}

void updatemovies::on_poster_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Select Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
    if(!imagePath.isEmpty())
    {
        QPixmap pixmap(imagePath);
        if(!pixmap.isNull())
        {
            ui->posterLabel->setPixmap(pixmap);
            ui->poster->setText(imagePath);
        }
        else
        {
            QMessageBox::critical(this,"Error","Could not load image.");
        }
    }
}

void updatemovies::on_updateUpdateButton_clicked()
{
    QString title = ui->title->text(),
        date = ui->date->date().toString("yyyy-MM-dd"),
        description = ui->description->toPlainText(),
        directors = ui->directors->toPlainText(),
        casts = ui->casts->toPlainText();

    int id = ui->updateID->text().toInt(),duration = ui->duration->text().toInt();

    bool action = ui->action->isChecked(),
        comedy = ui->comedy->isChecked(),
        crime = ui->crime->isChecked(),
        drama = ui->drama->isChecked(),
        history = ui->history->isChecked(),
        horror = ui->horror->isChecked(),
        romance = ui->romance->isChecked(),
        scifi = ui->scifi->isChecked(),
        suspense = ui->suspense->isChecked(),
        thriller = ui->thriller->isChecked();

    if(title.isEmpty())
    {
        QMessageBox::warning(this,"Error","Title of the movie cannot be empty.");
        ui->title->setFocus();
    }
    else if(ui->duration->text().isEmpty())
    {
        QMessageBox::warning(this,"Error","Duration of the movie cannot be empty.");
        ui->duration->setFocus();
    }
    else if(description.isEmpty())
    {
        QMessageBox::warning(this,"Error","Description of the movie cannot be empty.");
        ui->description->setFocus();
    }
    else if(directors.isEmpty())
    {
        QMessageBox::warning(this,"Error","Directors of the movie cannot be empty.");
        ui->directors->setFocus();
    }
    else if(casts.isEmpty())
    {
        QMessageBox::warning(this,"Error","Casts of the movie cannot be empty.");
        ui->casts->setFocus();
    }
    else if(action==0 && comedy==0 && crime==0 && drama==0 && history==0 && horror==0 && romance==0 && scifi==0 && suspense==0 && thriller==0)
    {
        QMessageBox::warning(this,"Error","At lease one genre has to be selected.");
    }
    else if(ui->posterLabel->pixmap().isNull())
    {
        QMessageBox::warning(this,"Error","Please upload a poster.");
    }
    else
    {
        QSqlDatabase MoviesData = database::getMoviesData();

        QSqlQuery Pquery(MoviesData);
        Pquery.prepare("Select Poster,Rating from Movies_table where Movie_ID = :id");
        Pquery.bindValue(":id",id);
        Pquery.exec();
        Pquery.next();
        QByteArray imageData = Pquery.value(0).toByteArray();
        double rating = Pquery.value(1).toDouble();

        if(ui->poster->text() != "Change Poster")
        {
            QString imagePath = ui->poster->text();
            QFile file(imagePath);
            if(!file.open(QIODevice::ReadOnly))
            {
                QMessageBox::warning(this,"Error","Failed to open the image file");
                return;
            }
            imageData = file.readAll();
        }

        QSqlQuery Deletequery(MoviesData);
        Deletequery.prepare("DELETE FROM Movies_table WHERE Movie_ID = :id");
        Deletequery.bindValue(":id",id);
        Deletequery.exec();

        QSqlQuery Mquery(MoviesData);
        Mquery.prepare("INSERT INTO Movies_table(Movie_ID, Title, Duration, Released_Date, Description, Poster, Rating)"
                       "VALUES(:id, :Title, :Duration, :Released_Date, :Description, :Poster, :Rating)");
        Mquery.bindValue(":id",id);
        Mquery.bindValue(":Title",title);
        Mquery.bindValue(":Duration",duration);
        Mquery.bindValue(":Released_Date",date);
        Mquery.bindValue(":Description",description);
        Mquery.bindValue(":Poster",imageData);
        Mquery.bindValue(":Rating",rating);
        Mquery.exec();

        QSqlQuery MGquery(MoviesData);
        MGquery.prepare("INSERT INTO MoviesGenres_table(Movie_ID, Genre_ID)"
                        "VALUES(:Movie_ID, :Genre_ID)");
        if(action == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",1);
            MGquery.exec();
        }
        if(comedy == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",2);
            MGquery.exec();
        }
        if(crime == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",3);
            MGquery.exec();
        }
        if(drama == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",4);
            MGquery.exec();
        }
        if(history == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",5);
            MGquery.exec();
        }
        if(horror == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",6);
            MGquery.exec();
        }
        if(romance == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",7);
            MGquery.exec();
        }
        if(scifi == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",8);
            MGquery.exec();
        }
        if(suspense == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",9);
            MGquery.exec();
        }
        if(thriller == 1)
        {
            MGquery.bindValue(":Movie_ID",id);
            MGquery.bindValue(":Genre_ID",10);
            MGquery.exec();
        }


        QVector<QString> directorsArray;
        QString director;
        for(int index=0;index<directors.length();index++)
        {
            QChar ch = directors.at(index);
            if(ch != ',')
            {
                director += ch;
            }
            else
            {
                directorsArray.append(director.trimmed());
                director = "";
            }
        }
        if(!director.isEmpty())
        {
            directorsArray.append(director.trimmed());
        }

        for(const QString &str : directorsArray)
        {
            QSqlQuery Dquery(MoviesData);
            Dquery.prepare("SELECT Director_ID,Director_Name from Directors_table");
            Dquery.exec();

            QSqlQuery DInputquery(MoviesData);
            DInputquery.prepare("INSERT INTO Directors_table(Director_Name)"
                                "VALUES(:newdirector)");
            int newdirector_id;

            QSqlQuery MDquery(MoviesData);
            MDquery.prepare("INSERT INTO MoviesDirectors_table(Movie_ID, Director_ID)"
                            "VALUES(:Movie_ID, :Director_ID)");

            while(Dquery.next())
            {
                if(str.toUpper() == Dquery.value(1).toString().toUpper())
                {
                    MDquery.bindValue(":Movie_ID",id);
                    MDquery.bindValue(":Director_ID",Dquery.value(0));
                    MDquery.exec();
                    goto Dskip;
                }
            }

            DInputquery.bindValue(":newdirector",str);
            DInputquery.exec();
            newdirector_id = DInputquery.lastInsertId().toInt();
            MDquery.bindValue(":Movie_ID",id);
            MDquery.bindValue(":Director_ID",newdirector_id);
            MDquery.exec();

        Dskip:
            continue;
        }

        QVector<QString> castsArray;
        QString cast;
        for(int index=0;index<casts.length();index++)
        {
            QChar ch = casts.at(index);
            if(ch != ',')
            {
                cast += ch;
            }
            else
            {
                castsArray.append(cast.trimmed());
                cast = "";
            }
        }
        if(!cast.isEmpty())
        {
            castsArray.append(cast.trimmed());
        }

        for(const QString &str: castsArray)
        {
            QSqlQuery Cquery(MoviesData);
            Cquery.prepare("Select Cast_ID, Cast_Name from Casts_table");
            Cquery.exec();

            QSqlQuery CInputquery(MoviesData);
            CInputquery.prepare("INSERT INTO Casts_table(Cast_Name)"
                                "VALUES(:newcast)");
            int newcast_id;

            QSqlQuery MCquery(MoviesData);
            MCquery.prepare("INSERT INTO MoviesCasts_table(Movie_ID,Cast_ID)"
                            "VALUES(:Movie_ID,:Cast_ID)");

            while(Cquery.next())
            {
                if(str.toUpper() == Cquery.value(1).toString().toUpper())
                {
                    MCquery.bindValue(":Movie_ID",id);
                    MCquery.bindValue(":Cast_ID",Cquery.value(0));
                    MCquery.exec();
                    goto Cskip;
                }
            }
            CInputquery.bindValue(":newcast",str);
            CInputquery.exec();
            newcast_id = CInputquery.lastInsertId().toInt();
            MCquery.bindValue(":Movie_ID",id);
            MCquery.bindValue(":Cast_ID",newcast_id);
            MCquery.exec();

        Cskip:
            continue;
        }

        database::closeMoviesData();

        close();
        updatemovies *um = new updatemovies();
        um->show();
        QMessageBox::information(this,"Info","The movie has been updated.");
    }
}

void updatemovies::on_searchBox_textChanged(const QString &searchText)
{
    if(searchText == "")
    {
        QSqlDatabase moviesData = database::getMoviesData();
        QSqlQuery query(moviesData);
        query.prepare("SELECT Movie_ID from Movies_table ORDER BY Title ASC");
        query.exec();
        query.next();
        int id = query.value(0).toInt();
        database::closeMoviesData();
        setPoster(id);
        return;
    }

    QSqlDatabase moviesData = database::getMoviesData();
    QSqlQuery Squery(moviesData);
    Squery.prepare("SELECT Movie_ID,Poster from Movies_table WHERE title LIKE :searchText ORDER BY Title ASC");
    Squery.bindValue(":searchText","%"+searchText+"%");
    Squery.exec();
    while(Squery.next())
    {
        if(Squery.value(0).toInt()==searchId || searchId==0)
        {
            for(int i=1;i<=14;i++)
            {
                QString posterName = QString("poster_%1").arg(i);
                QPushButton *poster = findChild<QPushButton *>(posterName);
                QString idName = QString("textID_%1").arg(i);
                QLabel *textID = findChild<QLabel *>(idName);

                QString mid = Squery.value(0).toString();
                QByteArray imageData = Squery.value(1).toByteArray();
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

                Squery.next();
            }
            break;
        }
    }
    searchId = 0;
    database::closeMoviesData();
}
