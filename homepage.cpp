#include "homepage.h"
#include "ui_homepage.h"
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QRegularExpression>
#include<QGroupBox>
#include<admin.h>
#include<QVector>
#include <QFileDialog>
#include <QBuffer>
#include <QImageReader>
#include<QSize>
#include"user.h"
#include "QString"
#include"Databasemanager.h"
#include<QLabel>
#include<QDialog>
#include<QSettings>
#include<QWidget>
#include <QSqlRecord>
#include<database.h>
#include<QList>
#include<QDate>
#include "usersetting.h"
#include<QVariant>
HomePage::HomePage(User *myuser,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage),
    blacklogo(":/MM White BG.png"),
    logo(":/MM Black BG.png"),
    whitesearch(":/whitesearchicon.png"),
    gear(":/gear.png"),
    whitegear(":/whitegear.png"),
    house(":/house.png"),
    whitehouse(":/whitehouse.png"),
    search(":searchicon.png"),
    left(":/left.png"),
    right(":/right.png"),
    whitestar(":/whitestar.png"),
    star(":/star.png")
{


    mysetting = new QSettings("myapp","MovieMaestro",this);
    mysetting->beginGroup("window");
    mysetting->setValue("username" , myuser->_username);
    lusername = myuser->_username;
    mysetting->endGroup();
    mysetting->beginGroup("window");

    QString userName = mysetting->value("username", "Default Name").toString();
    qDebug()<<"hey this is this  " << userName;
    mysetting->endGroup();
    ui->setupUi(this);
    intusername = myuser->_username;
    if (!myuser) {
        QMessageBox::critical(this, tr("Error"), tr("Invalid user object."), QMessageBox::Ok);
        return;
    }
    QSqlDatabase userdatabase = DatabaseManager::instance().getDatabase();
////////////////////////////////////////////////////////////////////////////////
    QSqlQuery query(userdatabase);
    query.prepare("SELECT images FROM userinfo WHERE user_id = :username");
    query.bindValue(":username", myuser->_username);
    qDebug()<<"after bind values";
    if (!query.exec()) {
         QMessageBox::critical(this, tr("Database Error"), tr("Failed to execute query: ") + query.lastError().text(), QMessageBox::Ok);
        return;
    }

        if (!query.next()) {
         QMessageBox::warning(this, tr("No Image Found"), tr("No image found for the specified user."), QMessageBox::Ok);
            return;
        }
            QByteArray imageData = query.value(0).toByteArray();
            QPixmap pixmap;
            pixmap.loadFromData(imageData);
            qDebug()<<"after pixxmap";
            if (!pixmap.isNull()) {
                ui->ProfilePicture->setIcon(pixmap);
            } else {
                QMessageBox::warning(this, tr("Image Load Error"), tr("Failed to load image from database."), QMessageBox::Ok);
                return;
            }
            /////////////////////////////////////////////////////////////////////////////
            QSqlDatabase setmovies = database::getMoviesData();
            QSqlQuery myquery(setmovies);
         myquery.prepare("SELECT Movie_ID FROM Movies_table");
            if (!myquery.exec()) {
                QMessageBox::critical(this, tr("Database Error"), tr("Failed to execute query: ") + myquery.lastError().text(), QMessageBox::Ok);
                return;
            }
            query.prepare("SELECT horro, action, thriller, romance, comedy, rom_com, drama, sci_fi, history, suspense FROM userinfo WHERE user_id = :username");
            query.bindValue(":username", myuser->_username);
            if (!query.exec()) {
                QMessageBox::warning(this, "Database Error", "The query to get the genre preferences was not executed: " + query.lastError().text());
                return;
            }
            if (!query.next()) {
                QMessageBox::warning(this, "Error", "Such username was not found.");
                return;
            }

            int horror = query.value(0).toInt();
            int action = query.value(1).toInt();
            int thriller = query.value(2).toInt();
            int romance = query.value(3).toInt();
            int comedy = query.value(4).toInt();
            int crime = query.value(5).toInt();
            int drama = query.value(6).toInt();
            int sci_fi = query.value(7).toInt();
            int history = query.value(8).toInt();
            int suspense = query.value(9).toInt();
            myquery.prepare("SELECT Genre_ID ,Genre_Name FROM Genres_table");
            if(!myquery.exec())
            {
                QMessageBox::warning(this , "something", "failed wihle executing genres_table");
                return ;
            }
            QVector<int> genreidlist;
            while(myquery.next())
            {
                bool preffered= false;
                QString GenreName = myquery.value(1).toString();
                if(GenreName == "Horror")
                {preffered = (horror == 1)?true:false;}
                if(GenreName == "Action")
                {preffered = (action == 1)?true:false;}

                if(GenreName == "Thriller")
                {preffered = (thriller == 1)?true:false;}

                if(GenreName == "Romance")
                {preffered = (romance == 1)?true:false;}

                if(GenreName == "Comedy")
                {preffered = (comedy == 1)?true:false;}

                if(GenreName == "Crime")
                {preffered = (crime == 1)?true:false;}

                if(GenreName == "Drama")
                {preffered = (drama == 1)?true:false;}

                if(GenreName == "Sci_Fi")
                {preffered = (sci_fi == 1)?true:false;}

                if(GenreName == "History")
                {preffered = (history == 1)?true:false;}

                if(GenreName == "Suspense")
                {preffered = (suspense == 1)?true:false;}
                if(preffered == true)
                {
                    genreidlist.append(myquery.value(0).toInt());
                }

            }

            /////////////////////////////////////////////
              QVector<QString> PrefferedMovies;

            myquery.prepare("SELECT MoviesGenres_table.Genre_ID,Movies_table.Title FROM MoviesGenres_table INNER JOIN Movies_table  ON Movies_table.Movie_ID =  MoviesGenres_table.Movie_ID ");
            if(!myquery.exec())

            {
                QMessageBox::warning(this, "something " ,"foreign key query failed");
                return;
            }

            while(myquery.next())
            {
                if(genreidlist.contains(myquery.value(0).toInt()))
                {
                    if(!PrefferedMovies.contains(myquery.value(1).toString()))
                    {
                        PrefferedMovies.append(myquery.value(1).toString());

                    }
                }
            }
            qDebug()<< "the movies to watch are " << PrefferedMovies;

            ////////////////////////////////////////////////////////////////////////////////
             QVector<QDate> ReleaseDate;
            myquery.prepare("SELECT Title , Released_Date FROM Movies_Table");
                if(!myquery.exec())
            {
             QMessageBox::warning(this , "what on earht " , "to filter out the movies the query isn't querying ");

            }
                while(myquery.next())
                {
                    if(PrefferedMovies.contains(myquery.value(0).toString()))
                    {
                         ReleaseDate.append(myquery.value(1).toDate());

                    }


         }
                qDebug()<<"the relase date of preffered movies are " << ReleaseDate;
         for(int i=0; i<ReleaseDate.count(); i++)
                {
                    for(int j =0 ; j<ReleaseDate.count(); j++)
                        {
                 QDate mydate;
                        if(ReleaseDate[i]>ReleaseDate[j])
                 {
                     mydate = ReleaseDate[i];
                            ReleaseDate[i] = ReleaseDate[j];
                     ReleaseDate[j] = mydate;
                 }
             }
                }
         qDebug()<<"the release date of the movies in order are " << ReleaseDate;
                    ////////////////////////////////////////////////////////////
         ordereddate = ReleaseDate;
         ///////////////////////////////////////////////////////////////////// this is for latest release
         for(int i =0 ; i<ReleaseDate.count(); i++)
         {

             myquery.prepare("SELECT Poster , Movie_ID FROM Movies_Table where Released_Date = :Date");
             myquery.bindValue(":Date" , ReleaseDate[i] );
            if(!myquery.exec())
             {
                 QMessageBox::warning(this ,"error" , "failed to add images to the buttons at last");
                return;
             }
            //////////////////////////////////////////////////////
             while(myquery.next())
             {
                 PrefferedMovieID.append(myquery.value(1).toInt());


             }
             /// ////////////////////////////////////////////////////
         }
         PrefferedMovieforlatestID = PrefferedMovieID;
         //////////////////////////////////end of latest slot


                ///////////////////////////////////////////////////////////////////
        setWindowTitle("Movie Maestro");
        setWindowIcon(QIcon(":/MM Transparent BG.png" ));
     ui->searchbar->hide();
     ui->searchbtn->setIcon(whitesearch);
     ui->logo->setPixmap(logo);
     ui->house->setIcon(whitehouse);
     ui->gearbtn->setIcon(whitegear);
     ui->rightbtn->setIcon(right);
     ui->leftbtn->setIcon(left);
     ui->leftbtn_2->setIcon(left);
     ui->rightbtn_2->setIcon(right);
     ui->descriptionbox->hide();
     ui->star->setIcon(whitestar);
     ui->star->setIconSize(QSize(61,51));
     ui->star2->setIcon(whitestar);
     ui->star2->setIconSize(QSize(61,51));
     ui->star3->setIcon(whitestar);
     ui->star3->setIconSize(QSize(61,51));
     ui->star4->setIcon(whitestar);
     ui->star4->setIconSize(QSize(61,51));
     ui->star5->setIcon(whitestar);
     ui->star5->setIconSize(QSize(61,51));
     ui->toprategroupbox->hide();
     ui->topleft->setIcon(left);
     ui->topleft->setIconSize(ui->topleft->size());
     ui->topright->setIcon(right);
     ui->topright->setIconSize(ui->topright->size());


     ui->foryoubox->show();
      ui->recentgroupbox->show();

     ui->recentgroupbox_2->hide();
   showforyoupage(position_1);
     showlatestmovies(position_2);
   showtoprated(position_3);
     }

HomePage::~HomePage()
{
    delete ui;
}
/////////////////////////////////////////////////////// all the user defined function here
void HomePage::showdescriptionbox3(int btn_number)
{
    foryouorlatest = 3;
    ui->descriptionbox->show();
    qDebug()<<"we are here 1";
    QSqlDatabase userdatabase = database::getMoviesData();
    QSqlQuery myquery(userdatabase);
    myquery.prepare("SELECT Released_Date, Title , Duration, Description , Poster ,Rating FROM Movies_Table WHERE Movie_ID =:movieid");
    myquery.bindValue(":movieid" ,_movielist[btn_number-1]);
 qDebug()<<"we are here 1";
    if(!myquery.exec())
    {
        QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + myquery.lastError().text());

    }
    if(!myquery.next())
    {
        QMessageBox::warning(this , "erro", "failed to find such data");
        return;
    }
    QString title = myquery.value(1).toString();
    QString duration = myquery.value(2).toString();
    QString description = myquery.value(3).toString();
    QString finaldesc = duration + " m :" + description + "   MOVIE RELEASED ON :  " + myquery.value(0).toString();
    QByteArray imageData2 = myquery.value(4).toByteArray();
    QPixmap pixmap2;
    pixmap2.loadFromData(imageData2);
    ui->moviedescbtn->setIcon(pixmap2);
    ui->ratinglabel->setText("Avg user rating : " +myquery.value(5).toString());
    QSize btnsize = ui->moviedescbtn->size();
    ui->moviedescbtn->setIconSize(btnsize);
    ui->movienamelabel->setText(title);
    ui->description->setText(finaldesc);
    int ID_Movie = _movielist[btn_number-1];
    QString casts = "";
    QString directors = "";
    myquery.prepare("SELECT MoviesCasts_table.Movie_ID , Casts_table.Cast_Name FROM MoviesCasts_table INNER JOIN Casts_table ON MoviesCasts_table.Cast_ID = Casts_table.Cast_ID ");
    if(!myquery.exec())
    {
        QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + myquery.lastError().text());

    }
    while(myquery.next())
    {
        if(ID_Movie == myquery.value(0).toInt())
        {
            casts = casts + myquery.value(1).toString() + ",";
        }

    }
    if (!casts.isEmpty() && casts.endsWith(',')) {
        casts.chop(1); // Remove the last character
    }
    ui->castnames->setText(casts);
    myquery.prepare("SELECT MoviesDirectors_table.Movie_ID , Directors_table.Director_Name FROM MoviesDirectors_table INNER JOIN Directors_table ON Directors_table.Director_ID = MoviesDirectors_table.Director_ID");
    if(!myquery.exec())
    {
        QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + myquery.lastError().text());

    }
    while(myquery.next())
    {
        if(ID_Movie == myquery.value(0).toInt())
        {
            directors = directors + myquery.value(1).toString() +  ",";
        }
    }
    if(!directors.isEmpty() && directors.endsWith(','))
    {
        directors.chop(1);
    }
    ui->directornames->setText(directors);
    QString genres;
    myquery.prepare("SELECT MoviesGenres_table.Movie_ID , MoviesGenres_table.Genre_ID ,Genres_table.Genre_Name FROM MoviesGenres_table INNER JOIN Genres_table ON Genres_table.Genre_ID = MoviesGenres_table.Genre_ID ");
    if(!myquery.exec())
    {
        QMessageBox::warning(this, "error" ,"oops error");
    }
    while(myquery.next())
    {
        if(ID_Movie == myquery.value(0).toInt())
        {
            genres += myquery.value(2).toString()+ ",";
        }
    }
    if(!genres.isEmpty() && genres.endsWith(','))
    {
        genres.chop(1);
    }
    ui->genrelabel->setText(genres);
}
/*---------------------------------------------------------showdescription2 here  */
void HomePage::showdescriptionbox2(int btn_number)
{
    foryouorlatest = 0;
    qDebug()<<"this has been called from " << btn_number;
    ui->descriptionbox->show();

    QSqlDatabase userdatabase = database::getMoviesData();
    QSqlQuery myquery(userdatabase);
    myquery.prepare("SELECT Released_Date, Title , Duration, Description , Poster ,Rating FROM Movies_Table WHERE Movie_ID =:myid");
    myquery.bindValue(":myid" ,PrefferedMovieID[btn_number-1]);

    if(!myquery.exec())
    {
        QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + myquery.lastError().text());

    }
    if(!myquery.next())
    {
        QMessageBox::warning(this , "erro", "failed to find such data");
        return;
    }
    QString title = myquery.value(1).toString();
    QString duration = myquery.value(2).toString();
    QString description = myquery.value(3).toString();
    QString finaldesc = "This movie runs for " + duration + " m :" + description + "   This Movie was released on:  " + myquery.value(0).toString() ;
    QByteArray imageData2 = myquery.value(4).toByteArray();
    QPixmap pixmap2;
    pixmap2.loadFromData(imageData2);
    ui->moviedescbtn->setIcon(pixmap2);
    ui->ratinglabel->setText("Avg user rating. " +myquery.value(5).toString());
    QSize btnsize = ui->moviedescbtn->size();
    ui->moviedescbtn->setIconSize(btnsize);
    ui->movienamelabel->setText(title);
    ui->description->setText(finaldesc);
    int ID_Movie = PrefferedMovieID[btn_number-1];
    QString casts = "";
    QString directors = "";
    myquery.prepare("SELECT MoviesCasts_table.Movie_ID , Casts_table.Cast_Name FROM MoviesCasts_table INNER JOIN Casts_table ON MoviesCasts_table.Cast_ID = Casts_table.Cast_ID ");
    if(!myquery.exec())
    {
        QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + myquery.lastError().text());

    }
    while(myquery.next())
    {
        if(ID_Movie == myquery.value(0).toInt())
        {
            casts = casts + myquery.value(1).toString() + ",";
        }

    }
    if (!casts.isEmpty() && casts.endsWith(',')) {
        casts.chop(1); // Remove the last character
    }
    ui->castnames->setText(casts);
    myquery.prepare("SELECT MoviesDirectors_table.Movie_ID , Directors_table.Director_Name FROM MoviesDirectors_table INNER JOIN Directors_table ON Directors_table.Director_ID = MoviesDirectors_table.Director_ID");
    if(!myquery.exec())
    {
        QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + myquery.lastError().text());

    }
    while(myquery.next())
    {
        if(ID_Movie == myquery.value(0).toInt())
        {
            directors = directors + myquery.value(1).toString() +  ",";
        }
    }
    if(!directors.isEmpty() && directors.endsWith(','))
    {
        directors.chop(1);
    }
    ui->directornames->setText(directors);
    QString genres;
    myquery.prepare("SELECT MoviesGenres_table.Movie_ID , MoviesGenres_table.Genre_ID ,Genres_table.Genre_Name FROM MoviesGenres_table INNER JOIN Genres_table ON Genres_table.Genre_ID = MoviesGenres_table.Genre_ID ");
    if(!myquery.exec())
    {
        QMessageBox::warning(this, "error" ,"oops error");
    }
    while(myquery.next())
    {
        if(ID_Movie == myquery.value(0).toInt())
        {
            genres += myquery.value(2).toString()+ ",";
        }
    }
    if(!genres.isEmpty() && genres.endsWith(','))
    {
        genres.chop(1);
    }
    ui->genrelabel->setText(genres);

}
/*-------------------------------------------------------------------*/
void HomePage::hidepage()
{
    ui->foryoubox->hide();
    ui->recentgroupbox->hide();
    ui->leftbtn->hide();
    ui->rightbtn->hide();
    ui->leftbtn_2->hide();
    ui->rightbtn_2->hide();
}
void HomePage::showpage()
{
    ui->foryoubox->show();
    ui->recentgroupbox->show();
    ui->leftbtn->show();
    ui->rightbtn->show();
    ui->leftbtn_2->show();
    ui->rightbtn_2->show();
}
void HomePage::showdescriptionbox(int btn_number)
{
    lockbtn_2 = ordereddate.count();
    qDebug()<<"the value of lockabtn _2 is " << lockbtn_2;
    qDebug()<<"the vlaue of btn number -1 is " << btn_number-1;
    if(btn_number> lockbtn_2)
    {
        return;
    }
    foryouorlatest = 1;
    qDebug()<<"this has been called from " << btn_number;
    ui->descriptionbox->show();
    QSqlDatabase userdatabase = database::getMoviesData();
    QSqlQuery myquery(userdatabase);
    myquery.prepare("SELECT Movie_ID , Title , Duration, Description , Poster ,Rating FROM Movies_Table WHERE Released_Date =:myDate");
    myquery.bindValue(":myDate" ,ordereddate[btn_number-1]);

    if(!myquery.exec())
    {
        QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + myquery.lastError().text());

    }
    if(!myquery.next())
    {
        QMessageBox::warning(this , "erro", "failed to find such data");
        return;
    }
    QString title = myquery.value(1).toString();
    QString duration = myquery.value(2).toString();
    QString description = myquery.value(3).toString();
    QString finaldesc = duration + " m :" + description + "   MOVIE RELEASED ON :  " + ordereddate[btn_number-1].toString() ;
    QByteArray imageData2 = myquery.value(4).toByteArray();
    QPixmap pixmap2;
    pixmap2.loadFromData(imageData2);
    ui->moviedescbtn->setIcon(pixmap2);
    ui->ratinglabel->setText("Avg user rating : " +myquery.value(5).toString());
    QSize btnsize = ui->moviedescbtn->size();
    ui->moviedescbtn->setIconSize(btnsize);
    ui->movienamelabel->setText(title);
    ui->description->setText(finaldesc);
    int ID_Movie = myquery.value(0).toInt();
    QString casts = "";
    QString directors = "";
    myquery.prepare("SELECT MoviesCasts_table.Movie_ID , Casts_table.Cast_Name FROM MoviesCasts_table INNER JOIN Casts_table ON MoviesCasts_table.Cast_ID = Casts_table.Cast_ID ");
    if(!myquery.exec())
    {
        QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + myquery.lastError().text());

    }
    while(myquery.next())
    {
        if(ID_Movie == myquery.value(0).toInt())
        {
            casts = casts + myquery.value(1).toString() + ",";
        }

    }
    if (!casts.isEmpty() && casts.endsWith(',')) {
        casts.chop(1); // Remove the last character
    }
    ui->castnames->setText(casts);
    myquery.prepare("SELECT MoviesDirectors_table.Movie_ID , Directors_table.Director_Name FROM MoviesDirectors_table INNER JOIN Directors_table ON Directors_table.Director_ID = MoviesDirectors_table.Director_ID");
    if(!myquery.exec())
    {
       QMessageBox::critical(this, "Database Error", "Failed to update user preferences: " + myquery.lastError().text());

    }
    while(myquery.next())
    {
        if(ID_Movie == myquery.value(0).toInt())
        {
            directors = directors + myquery.value(1).toString() +  ",";
        }
    }
    if(!directors.isEmpty() && directors.endsWith(','))
    {
        directors.chop(1);
    }
    ui->directornames->setText(directors);
    QString genres;
    myquery.prepare("SELECT MoviesGenres_table.Movie_ID , MoviesGenres_table.Genre_ID ,Genres_table.Genre_Name FROM MoviesGenres_table INNER JOIN Genres_table ON Genres_table.Genre_ID = MoviesGenres_table.Genre_ID ");
    if(!myquery.exec())
    {
        QMessageBox::warning(this, "error" ,"oops error");
    }
    while(myquery.next())
    {
        if(ID_Movie == myquery.value(0).toInt())
        {
            genres += myquery.value(2).toString()+ ",";
        }
    }
    if(!genres.isEmpty() && genres.endsWith(','))
    {
        genres.chop(1);
    }
    ui->genrelabel->setText(genres);
}
//////////////////////////////////////////////////////// for , for you section we have our sevlesa
void HomePage::showforyoupage(int position)
{


    QList<int> ratinglist;
    QSqlDatabase db = database::getMoviesData();
    QSqlQuery myquery(db);

    for(int i=0; i<PrefferedMovieID.count(); i++)
    {
        myquery.prepare("SELECT Poster,Rating FROM Movies_Table where Movie_ID = :movieid");
        myquery.bindValue(":movieid",PrefferedMovieID[i]);
        if(!myquery.exec())
        {
            QMessageBox::warning(this , "error", "failed to execute query in foryoupage 1");
        }
        while(myquery.next())
        {

            QVariant testfornull = myquery.value(1).toInt();
            if(testfornull.isNull())
            {
                ratinglist.append(0);
            }else
            {
                ratinglist.append(myquery.value(1).toInt());
            }

        }


    }
    qDebug() << "the rating list is as follos "<<ratinglist;
    if(!lock1)
    {
    for(int i=0; i< PrefferedMovieID.count(); i++)
    {
        for(int j=0; j<PrefferedMovieID.count(); j++)
        {

            int temp;
            int id;
            if(ratinglist[i]>=ratinglist[j])
            {
                temp = ratinglist[i];
                ratinglist[i] = ratinglist[j];
                ratinglist[j] = temp;
                id = PrefferedMovieID[i];
                PrefferedMovieID[i] = PrefferedMovieID[j];
                PrefferedMovieID[j] = id;
            }

        }
        lockbtn_1 = (PrefferedMovieID.count() + 3) / 4 - 1;
    }
    qDebug()<<"the no of movies are " << PrefferedMovieID.count();
    int templock;


    }
    lock1 = true;
    qDebug()<<"the lock btn no is " << lockbtn_1;
     qDebug() << "movie list in order of rating is as follwos  "<<PrefferedMovieID;
    /* -------------------------------------------------------now to add the pictures -----------------*/
     int startIndex = 4 * position;
     int endIndex = qMin(startIndex + 4, PrefferedMovieID.count());
     ui->moviebtn_1->setVisible(false);
     ui->moviebtn_2->setVisible(false);
     ui->moviebtn_3->setVisible(false);
     ui->moviebtn_4->setVisible(false);
    for(int i =startIndex ; i<endIndex; i++)
    {

        myquery.prepare("SELECT Poster  FROM Movies_Table where Movie_ID= :movieid");
        myquery.bindValue(":movieid" , PrefferedMovieID[i] );
        qDebug()<<"after it is binded we have";

        if(!myquery.exec())
        {
            QMessageBox::warning(this ,"error" , "failed to add images to the buttons for for you at last");
            return;
        }
        qDebug()<<"after checkin if it runs eerror ";
        //////////////////////////////////////////////////////
        while(myquery.next())
        {
            qDebug()<<"1";
            QByteArray imageData2 = myquery.value(0).toByteArray();

            QPixmap pixmap2;
qDebug()<<"2";
            pixmap2.loadFromData(imageData2);
qDebug()<<"3";

                // Access each button individually
           qDebug()<<"3";
                QPushButton* button = nullptr;
                switch (i-startIndex) {
                case 0: button = ui->moviebtn_1; break;
                case 1: button = ui->moviebtn_2; break;
                case 2: button = ui->moviebtn_3; break;
                case 3: button = ui->moviebtn_4; break;
                default: break;
qDebug()<<"4";
                }

                if (button) {
                  qDebug()<<"5";
                    if (!pixmap2.isNull())
                    {
                      qDebug()<<"6";
                        button->setIcon(pixmap2);
                        button->setIconSize(QSize(342, 171));
                        button->setVisible(true); // Show button if image is available
                    }

                }

            }


        }
        /// ////////////////////////////////////////////////////
    }


///////////////////////////////////////////////////////////////////////// end of for you seciont
    void HomePage::showlatestmovies(int position)
    {
        QSqlDatabase db = database::getMoviesData();
        QSqlQuery myquery(db);
        lockbtn_2 = (ordereddate.count() + 3) / 4 - 1;
        int startIndex = 4 * position;
        int endIndex = qMin(startIndex + 4, ordereddate.count());
        ui->moviebtn_9->setVisible(false);
        ui->moviebtn_10->setVisible(false);
        ui->moviebtn_11->setVisible(false);
        ui->moviebtn_12->setVisible(false);
        for(int i =0 ; i<ordereddate.count(); i++)
        {

            myquery.prepare("SELECT Poster , Movie_ID FROM Movies_Table where Released_Date = :Date");
            myquery.bindValue(":Date" , ordereddate[i] );
            if(!myquery.exec())
            {
                QMessageBox::warning(this ,"error" , "failed to add images to the buttons at last");
                return;
            }
            //////////////////////////////////////////////////////
            while(myquery.next())
            {

                QByteArray imageData2 = myquery.value(0).toByteArray();
                QPixmap pixmap2;
                pixmap2.loadFromData(imageData2);
                if (!pixmap2.isNull() ) {
                    // Access each button individually
                    QPushButton* button = nullptr;
                    switch (i-startIndex) {
                    case 0: button = ui->moviebtn_9; break;
                    case 1: button = ui->moviebtn_10; break;
                    case 2: button = ui->moviebtn_11; break;
                    case 3: button = ui->moviebtn_12; break;
                    default: break;

                    }

                    if (button) {
                        qDebug()<<"5";
                        if (!pixmap2.isNull())
                        {
                            qDebug()<<"6";
                            button->setIcon(pixmap2);
                            button->setIconSize(QSize(342, 171));
                            button->setVisible(true); // Show button if image is available
                        }

                    }
                }

            }
            /// ////////////////////////////////////////////////////
        }


    }
/*------------------------------------------------------------------for top rated -----------------------*/
    void HomePage::showtoprated(int position)
    {
        QSqlDatabase db = database::getMoviesData();
        QSqlQuery myquery(db);
        QList<int> movieids;
        QList<int> movierating;
        myquery.prepare("SELECT Movie_ID , Rating FROM Movies_table");

        if(!myquery.exec())
        {
            QMessageBox::warning(this ,"error" , "there is an error in select the movie id and rating ");
            return;
        }

        while(myquery.next())
        {

            movieids.append(myquery.value(0).toInt());
            QVariant myvariant = myquery.value(1).toInt();
            if(myvariant.isNull())
            {
                movierating.append(0);
            }
            else
            {
            movierating.append(myquery.value(1).toInt());
            }

        }
        qDebug()<<"hey this is " << movierating.count();
        qDebug()<<"hey this is " << movieids.count();
        for(int i=0; i<movierating.count(); i++)
        {

            for(int j=0; j<movierating.count(); j++)
            {
            int temp;
            int id;
            if(movierating[i]>=movierating[j])
            {
                temp = movierating[i];
                movierating[i] = movierating[j];
                movierating[j] = temp;
                id = movieids[i];
                movieids[i] = movieids[j];
                movieids[j] = id;

            }
            }

            lockbtn_3 = (movierating.count() + 3) / 4 - 1;

        }
        _movielist = movieids;
        int startIndex = 4 * position;
        int endIndex = qMin(startIndex + 4, movierating.count());
        ui->topratemovie_1->setVisible(false);
        ui->topratemovie_2->setVisible(false);
        ui->topratemovie_3->setVisible(false);
        ui->topratemovie_4->setVisible(false);
        for(int i =startIndex ; i<endIndex; i++)
        {

            myquery.prepare("SELECT Poster  FROM Movies_Table where Movie_ID= :movieid");
            myquery.bindValue(":movieid" , movieids[i]);

            if(!myquery.exec())
            {
                QMessageBox::warning(this ,"error" , "failed to add images to the buttons for for you at last");
                return;
            }

            //////////////////////////////////////////////////////
            while(myquery.next())
            {
                qDebug()<<"1";
                QByteArray imageData2 = myquery.value(0).toByteArray();

                QPixmap pixmap2;
                qDebug()<<"2";
                pixmap2.loadFromData(imageData2);
                qDebug()<<"3";

                // Access each button individually
                qDebug()<<"3";
                QPushButton* button = nullptr;
                switch (i-startIndex) {
                case 0: button = ui->topratemovie_1; break;
                case 1: button = ui->topratemovie_2; break;
                case 2: button = ui->topratemovie_3; break;
                case 3: button = ui->topratemovie_4; break;
                default: break;

                }

                if (button) {

                    if (!pixmap2.isNull())
                    {

                        button->setIcon(pixmap2);
                        button->setIconSize(button->size());
                        button->setVisible(true); // Show button if image is available
                    }

                }

            }

          /*-------------------------------------------------------------*/
        }
    }


///////////////////////////////////////////////////////////////////////////////////////////////
void HomePage::on_userpagebtn_clicked()
{
    User *newuser = new User;
    this->close();
    newuser->show();
}


void HomePage::on_house_clicked()
{
    QSettings mysetting("myapp","MovieMaestro");
    mysetting.setValue("isLogged",false);
    mysetting.setValue("username", "");
    User *myuser = new User();
    this->close();
    myuser->show();
}


void HomePage::on_leftbtn_clicked()
{
     qDebug()<<"the left vlaue of the position is from outside left else "<<position_1;
    if(!position_1<=0)
    {
        position_1--;
         qDebug()<<"the left vlaue of the position is from insisde  "<<position_1;
        showforyoupage(position_1);
    }
 else
    {
        showforyoupage(position_1);
    }
}


void HomePage::on_rightbtn_clicked()
{
    if(position_1 >=lockbtn_1)
    {
         qDebug()<<"the right vlaue of the position is from position > = lockbtn wala part "<<position_1;
        showforyoupage(position_1);
    }

    else
    {
     position_1++;
        qDebug()<<"the right vlaue of the position is  tesko else part"<<position_1;
    showforyoupage(position_1);
    }


}
void HomePage::on_leftbtn_2_clicked()
{
    if(!position_2<=0)
    {
        position_2--;
        showlatestmovies(position_2);
    }
    else
    {
        showlatestmovies(position_2);
    }
}


void HomePage::on_rightbtn_2_clicked()
{
    if(position_2 >=lockbtn_2)
    {
        showlatestmovies(position_2);
    }

    else
    {
        position_2++;
        showlatestmovies(position_2);
    }

}
void HomePage::on_topleft_clicked()
{
    if(!position_3<=0)
    {
        position_3--;
        showtoprated(position_3);
    }
    else
    {
        showtoprated(position_3);
    }
}


void HomePage::on_topright_clicked()
{
    if(position_3 >=lockbtn_3)
    {
        showtoprated(position_3);
    }

    else
    {
        position_3++;
        showtoprated(position_3);
    }
}

void HomePage::on_moviebtn_1_clicked()
{
     foryouorlatest =0;
    btn_number = 1 + 4*position_1;
    showdescriptionbox2(1+4*position_1);
    hidepage();
}


void HomePage::on_moviebtn_2_clicked()
{
     foryouorlatest =0;
btn_number = 2 + 4*position_1;
showdescriptionbox2(2+4*position_1);
hidepage();
}


void HomePage::on_moviebtn_3_clicked()
{
     foryouorlatest =0;
btn_number = 3 + 4*position_1;
    showdescriptionbox2(3+4*position_1);
hidepage();
}


void HomePage::on_moviebtn_5_clicked()
{

}


void HomePage::on_moviebtn_6_clicked()
{

}


void HomePage::on_moviebtn_7_clicked()
{


}


void HomePage::on_moviebtn_8_clicked()
{

}


void HomePage::on_moviebtn_9_clicked()
{
    foryouorlatest =1;
    btn_number = 1 + 4*position_2;
    showdescriptionbox(1+4*position_2);
    hidepage();

}


void HomePage::on_moviebtn_10_clicked()
{
    foryouorlatest =1;
    btn_number = 2 + 4*position_2;
    showdescriptionbox(2+4*position_2);
    hidepage();
}


void HomePage::on_moviebtn_11_clicked()
{
    foryouorlatest =1;
    btn_number = 3 + 4*position_2;
    showdescriptionbox(3+4*position_2);
    hidepage();
}


void HomePage::on_moviebtn_12_clicked()
{
    foryouorlatest =1;
    btn_number = 4 + 4*position_2;
    showdescriptionbox(4+4*position_2);
    hidepage();
}


void HomePage::on_moviebtn_13_clicked()
{

}


void HomePage::on_moviebtn_14_clicked()
{
}


void HomePage::on_moviebtn_15_clicked()
{

}


void HomePage::on_moviebtn_16_clicked()
{

}





void HomePage::on_moviebtn_4_clicked()
{
    foryouorlatest =0;
btn_number = 4 + 4*position_1;
showdescriptionbox2(4+4*position_1);
hidepage();
}




void HomePage::on_pushButton_7_clicked()
{
    ui->descriptionbox->close();//tyo close descrioption ko  sign ho yo
    if(pageno == 1)
    {
    showpage();
    }
    else if (pageno ==2)
    {
        ui->toprategroupbox->show();
    }
    }

/////////////////////////////////////////////// yo chai aba rating star ko lagi

void HomePage::on_star_clicked()
{
    ui->star->setIcon(star);
    ui->star2->setIcon(whitestar);
    ui->star3->setIcon(whitestar);
    ui->star4->setIcon(whitestar);
    ui->star5->setIcon(whitestar);
    rating = 1;
}


void HomePage::on_star2_clicked()
{
    ui->star->setIcon(star);
    ui->star2->setIcon(star);
    ui->star3->setIcon(whitestar);
    ui->star4->setIcon(whitestar);
    ui->star5->setIcon(whitestar);
    rating = 2;
}


void HomePage::on_star3_clicked()
{
    ui->star->setIcon(star);
    ui->star2->setIcon(star);
    ui->star3->setIcon(star);
    ui->star4->setIcon(whitestar);
    ui->star5->setIcon(whitestar);
    rating = 3;
}


void HomePage::on_star4_clicked()
{
    ui->star->setIcon(star);
    ui->star2->setIcon(star);
    ui->star3->setIcon(star);
    ui->star4->setIcon(star);
    ui->star5->setIcon(whitestar);
    rating = 4;
}


void HomePage::on_star5_clicked()
{
    ui->star->setIcon(star);
    ui->star2->setIcon(star);
    ui->star3->setIcon(star);
    ui->star4->setIcon(star);
    ui->star5->setIcon(star);
    rating = 5;

}

///////////////////////////////////////////// end of rating
////////////////////////////////////////////////// setting the rating
void HomePage::on_ratebtn_clicked()
{
    QString moviename;
    QSqlDatabase mydb = database::getMoviesData();
    QSqlQuery myquery(mydb);
    /*myquery.prepare("SELECT Title FROM Movies_table WHERE Movie_ID = :movieid");
    if(foryouorlatest == 1)
    {
    myquery.bindValue(":movieid", PrefferedMovieforlatestID[btn_number-1]);
    }
    else if(foryouorlatest == 0)
    {
        myquery.bindValue(":movieid",PrefferedMovieID[btn_number-1]);
    }
    else if(foryouorlatest ==3)
    {
        myquery.bindValue(":movieid",_movielist[btn_number-1]);
    }


    if(!myquery.exec())
    {
        QMessageBox::warning(this , "here are some error" , "you have entered wrong query in ratebtnclicked 1");
    }
    while(myquery.next())
    {

            moviename = myquery.value(0).toString();

    } */
    int id;
    if(foryouorlatest == 1)
    {
        id = PrefferedMovieforlatestID[btn_number-1];
    }
    else if(foryouorlatest == 0)
    {
        id = PrefferedMovieID[btn_number-1];
    }
    else if(foryouorlatest ==3)
    {
     id=_movielist[btn_number-1];
    }
    myquery.prepare("SELECT COUNT(*) FROM UserMovieRating WHERE username = :username AND movie_name = :moviename");
    myquery.bindValue(":username" , lusername);
    myquery.bindValue(":moviename" , QString::number(id));
    if(!myquery.exec())
    {
        QMessageBox::warning(this , "here are some error" , "you have entered wrong query in ratebtnclicked 2");
        return;
    }
    myquery.next();
    int count =  myquery.value(0).toInt();
    if(count >0)
    {
        myquery.prepare("UPDATE UserMovieRating SET rating =:rating WHERE username = :username AND movie_name = :movie_name");
    }
    else if (count == 0)
    {
        myquery.prepare("INSERT INTO UserMovieRating (username, movie_name, rating) VALUES (:username, :movie_name, :rating)");

    }
    myquery.bindValue(":username" ,lusername);
    myquery.bindValue(":rating",rating);
    myquery.bindValue(":movie_name", QString::number(id));

        if(!myquery.exec())
        {

            return;
        }

    int summationrating =0, ratingno=0 , avgrating=0;

    myquery.prepare("SELECT rating FROM UserMovieRating WHERE movie_name = :moviename");
    myquery.bindValue(":moviename",QString::number(id));
    if(!myquery.exec())
    {
        QMessageBox::warning(this , "here are some error" , "you have entered wrong query in ratebtnclicked 4");
        return;
    }

    while(myquery.next())
    {
        summationrating  += myquery.value(0).toInt();
    }
    myquery.prepare("SELECT COUNT(*) FROM UserMovieRating WHERE movie_name = :moviename");
    myquery.bindValue(":moviename" , QString::number(id));
    if(!myquery.exec())
    {
        QMessageBox::warning(this , "here are some error" , "you have entered wrong query in ratebtnclicked 5");
    }
    myquery.next();
    ratingno = myquery.value(0).toInt();
    avgrating = summationrating/ratingno;
    qDebug()<<"the summation rating is " << summationrating;
    qDebug()<<"the average rating of the movei is " << avgrating;
    qDebug()<<"there " << ratingno << " many field " ;
    myquery.prepare("UPDATE Movies_table SET rating =:rating WHERE Movie_ID = :moviename ");
    myquery.bindValue(":rating" , avgrating);
    myquery.bindValue(":moviename",id);
    if(!myquery.exec())
    {
        QMessageBox::warning(this , "some error " , "you have entered wrong query in ratebtnclicked 6");
        return;
    }


}

////////////////////////////////////////////////////////////// end of setting the rating

void HomePage::on_gearbtn_clicked()
{
    User *myuser = new User();
    myuser->_username = intusername;
    UserSetting *mysetting = new UserSetting(myuser);
    this->close();
    mysetting->show();


}


void HomePage::on_onepage_clicked()
{
    pageno = 1;
    showpage();
    ui->toprategroupbox->hide();
}


void HomePage::on_twopage_clicked()
{
    pageno = 2;
    hidepage();
    ui->toprategroupbox->show();

}




void HomePage::on_topratemovie_1_clicked()
{
    foryouorlatest =3;
    btn_number = 1 + 4*position_3;
    showdescriptionbox3(1+4*position_3);
    ui->toprategroupbox->close();

}


void HomePage::on_topratemovie_2_clicked()
{
    foryouorlatest =3;
    btn_number = 2 + 4*position_3;
    showdescriptionbox3(2+4*position_3);
    ui->toprategroupbox->close();

}


void HomePage::on_topratemovie_3_clicked()
{
    foryouorlatest =3;
    btn_number = 3 + 4*position_3;
    showdescriptionbox3(3+4*position_3);
    ui->toprategroupbox->close();

}


void HomePage::on_topratemovie_4_clicked()
{
    foryouorlatest =3;
    btn_number = 4+ 4*position_3;
    showdescriptionbox3(4+4*position_3);
    ui->toprategroupbox->close();
}

