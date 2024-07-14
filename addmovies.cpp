#include "addmovies.h"
#include "ui_addmovies.h"
#include "adminoptions.h"
#include "database.h"

addmovies::addmovies(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::addmovies)
{
    ui->setupUi(this);
    ui->BackToAddMovies->hide();
    ui->BackToAddMovies2->hide();
    ui->addMoviesBox2->hide();
    ui->genresBox->hide();

    QIntValidator *intValidator = new QIntValidator(0,999,this);
    ui->duration->setValidator(intValidator);
}

addmovies::~addmovies()
{
    delete ui;
}

void addmovies::on_BackToAdminOptions_clicked()
{
    close();
    adminoptions *ao = new adminoptions();
    ao->show();
}

void addmovies::on_nextButton_clicked()
{
    ui->addMoviesBox->hide();
    ui->BackToAdminOptions->hide();
    ui->BackToAddMovies->show();
    ui->addMoviesBox2->show();
}

void addmovies::on_BackToAddMovies_clicked()
{
    ui->BackToAddMovies->hide();
    ui->addMoviesBox2->hide();
    ui->BackToAddMovies2->hide();
    ui->genresBox->hide();
    ui->addMoviesBox->show();
    ui->BackToAdminOptions->show();
}

void addmovies::on_nextButton2_clicked()
{
    ui->BackToAddMovies->hide();
    ui->addMoviesBox2->hide();
    ui->BackToAddMovies2->show();
    ui->genresBox->show();
}


void addmovies::on_BackToAddMovies2_clicked()
{
    ui->BackToAddMovies2->hide();
    ui->genresBox->hide();
    ui->BackToAddMovies->show();
    ui->addMoviesBox2->show();
}

void addmovies::on_poster_clicked()
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

bool addmovies::check_if_movie_already_exist(QString title)
{
    QSqlDatabase MoviesData = database::getMoviesData();
    QSqlQuery query(MoviesData);
    query.prepare("SELECT title from Movies_table");
    query.exec();
    while(query.next())
    {
        if(query.value(1).toString().toUpper() == title.toUpper())
        {
            database::closeMoviesData();
            return 1;
        }
    }
    database::closeMoviesData();
    return 0;
}

void addmovies::on_addButton_clicked()
{
    QString title = ui->title->text(),
            date = ui->date->date().toString("yyyy-MM-dd"),
            description = ui->description->toPlainText(),
            directors = ui->directors->toPlainText(),
            casts = ui->casts->toPlainText();

    int duration = ui->duration->text().toInt();

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
        on_BackToAddMovies_clicked();
        ui->title->setFocus();
    }
    else if(ui->duration->text().isEmpty())
    {
        QMessageBox::warning(this,"Error","Duration of the movie cannot be empty.");
        on_BackToAddMovies_clicked();
        ui->duration->setFocus();
    }
    else if(description.isEmpty())
    {
        QMessageBox::warning(this,"Error","Description of the movie cannot be empty.");
        on_BackToAddMovies_clicked();
        ui->description->setFocus();
    }
    else if(directors.isEmpty())
    {
        QMessageBox::warning(this,"Error","Directors of the movie cannot be empty.");
        on_BackToAddMovies2_clicked();
        ui->directors->setFocus();
    }
    else if(casts.isEmpty())
    {
        QMessageBox::warning(this,"Error","Casts of the movie cannot be empty.");
        on_BackToAddMovies2_clicked();
        ui->casts->setFocus();
    }
    else if(action==0 && comedy==0 && crime==0 && drama==0 && history==0 && horror==0 && romance==0 && scifi==0 && suspense==0 && thriller==0)
    {
        QMessageBox::warning(this,"Error","At lease one genre has to be selected.");
    }
    else if(ui->poster->text() == "Upload Poster")
    {
        QMessageBox::warning(this,"Error","Please upload a poster.");
        on_BackToAddMovies_clicked();
    }
    else
    {
        if(check_if_movie_already_exist(ui->title->text()))
        {
            if(QMessageBox::warning(this,"Error","Movie with same title already exists. Do you still want to add this movie?",QMessageBox::Yes,QMessageBox::No) != QMessageBox::Yes)
            {
                return;
            }
        }

        QString imagePath = ui->poster->text();
        QFile file(imagePath);
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::warning(this,"Error","Failed to open the image file");
            return;
        }
        QByteArray imageData = file.readAll();


        QSqlDatabase MoviesData = database::getMoviesData();
        QSqlQuery Mquery(MoviesData);

        Mquery.prepare("INSERT INTO Movies_table(Title, Duration, Released_Date, Description, Poster)"
                      "VALUES(:Title, :Duration, :Released_Date, :Description, :Poster)");
        Mquery.bindValue(":Title",title);
        Mquery.bindValue(":Duration",duration);
        Mquery.bindValue(":Released_Date",date);
        Mquery.bindValue(":Description",description);
        Mquery.bindValue(":Poster",imageData);
        Mquery.exec();

        int Movie_ID = Mquery.lastInsertId().toInt();


        QSqlQuery MGquery(MoviesData);
        MGquery.prepare("INSERT INTO MoviesGenres_table(Movie_ID, Genre_ID)"
                        "VALUES(:Movie_ID, :Genre_ID)");
        if(action == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
            MGquery.bindValue(":Genre_ID",1);
            MGquery.exec();
        }
        if(comedy == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
            MGquery.bindValue(":Genre_ID",2);
            MGquery.exec();
        }
        if(crime == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
            MGquery.bindValue(":Genre_ID",3);
            MGquery.exec();
        }
        if(drama == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
            MGquery.bindValue(":Genre_ID",4);
            MGquery.exec();
        }
        if(history == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
            MGquery.bindValue(":Genre_ID",5);
            MGquery.exec();
        }
        if(horror == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
            MGquery.bindValue(":Genre_ID",6);
            MGquery.exec();
        }
        if(romance == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
            MGquery.bindValue(":Genre_ID",7);
            MGquery.exec();
        }
        if(scifi == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
            MGquery.bindValue(":Genre_ID",8);
            MGquery.exec();
        }
        if(suspense == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
            MGquery.bindValue(":Genre_ID",9);
            MGquery.exec();
        }
        if(thriller == 1)
        {
            MGquery.bindValue(":Movie_ID",Movie_ID);
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
                    MDquery.bindValue(":Movie_ID",Movie_ID);
                    MDquery.bindValue(":Director_ID",Dquery.value(0));
                    MDquery.exec();
                    goto Dskip;
                }
            }

            DInputquery.bindValue(":newdirector",str);
            DInputquery.exec();
            newdirector_id = DInputquery.lastInsertId().toInt();
            MDquery.bindValue(":Movie_ID",Movie_ID);
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
                    MCquery.bindValue(":Movie_ID",Movie_ID);
                    MCquery.bindValue(":Cast_ID",Cquery.value(0));
                    MCquery.exec();
                    goto Cskip;
                }
            }
            CInputquery.bindValue(":newcast",str);
            CInputquery.exec();
            newcast_id = CInputquery.lastInsertId().toInt();
            MCquery.bindValue(":Movie_ID",Movie_ID);
            MCquery.bindValue(":Cast_ID",newcast_id);
            MCquery.exec();

            Cskip:
            continue;
        }

        database::closeMoviesData();

        QMessageBox::information(this,"Info","The movie has been added.");
        if(QMessageBox::question(this,"?","Do you want to another movie?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
        {
            close();
            addmovies *am = new addmovies;
            am->show();
        }
        else
        {
            close();
            adminoptions *ao = new adminoptions();
            ao->show();
        }
    }
}
