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
    sun(":sun.png"),
    moon(":/moon.png"),
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
             QByteArray imageData2 = myquery.value(0).toByteArray();
             QPixmap pixmap2;
             pixmap2.loadFromData(imageData2);
             if (!pixmap2.isNull() ) {
                 // Access each button individually
                 QPushButton* button = nullptr;
                 switch (i) {
                 case 0: button = ui->moviebtn_9; break;
                 case 1: button = ui->moviebtn_10; break;
                 case 2: button = ui->moviebtn_11; break;
                 case 3: button = ui->moviebtn_12; break;
                 case 4: button = ui->moviebtn_13; break;
                 case 5: button = ui->moviebtn_14; break;
                 case 6: button = ui->moviebtn_15; break;
                 case 7: button = ui->moviebtn_16; break;
                 default: break;

                 }

                 if (button) {
                     button->setIcon(pixmap2);
                     button->setIconSize(QSize(342, 171));

                 }
             }

             }
             /// ////////////////////////////////////////////////////
         }
         PrefferedMovieforlatestID = PrefferedMovieID;
         //////////////////////////////////end of latest slot
         /// //////////////////////////////////////////////////////////////////start of for you section
         QList<int> ratinglist;
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

         for(int i=0; i< PrefferedMovieID.count(); i++)
         {
             for(int j=0; j<PrefferedMovieID.count(); j++)
             {

                 int temp;
                 int id;
                 if(ratinglist[i]>ratinglist[j])
                 {
                     temp = ratinglist[i];
                     ratinglist[i] = ratinglist[j];
                     ratinglist[j] = temp;
                     id = PrefferedMovieID[i];
                     PrefferedMovieID[i] = PrefferedMovieID[j];
                     PrefferedMovieID[j] = id;
                 }

             }
         }
/* -------------------------------------------------------now to add the pictures -----------------*/
         for(int i =0 ; i<PrefferedMovieID.count(); i++)
         {

             myquery.prepare("SELECT Poster  FROM Movies_Table where Movie_ID= :movieid");
             myquery.bindValue(":movieid" , PrefferedMovieID[i] );
             if(!myquery.exec())
             {
                 QMessageBox::warning(this ,"error" , "failed to add images to the buttons for for you at last");
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
                     switch (i) {
                     case 0: button = ui->moviebtn_1; break;
                     case 1: button = ui->moviebtn_2; break;
                     case 2: button = ui->moviebtn_3; break;
                     case 3: button = ui->moviebtn_4; break;
                     case 4: button = ui->moviebtn_5; break;
                     case 5: button = ui->moviebtn_6; break;
                     case 6: button = ui->moviebtn_7; break;
                     case 7: button = ui->moviebtn_8; break;
                     default: break;

                     }

                     if (button) {
                         button->setIcon(pixmap2);
                         button->setIconSize(QSize(342, 171));

                     }
                 }

             }
             /// ////////////////////////////////////////////////////
         }

         /////////////////////////////////////////////////////////////////////end of for you section

                ///////////////////////////////////////////////////////////////////
        setWindowTitle("Movie Maestro");
        setWindowIcon(QIcon(":/MM Transparent BG.png" ));
     ui->searchbar->hide();
     ui->searchbtn->setIcon(whitesearch);
     ui->logo->setPixmap(logo);
     ui->house->setIcon(whitehouse);
     ui->gearbtn->setIcon(whitegear);
     ui->brightnessmodebtn->setIcon(sun);
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

     if(position_1 == 0)
     {
     ui->foryoubox_2->hide();

     ui->foryoubox->show();
     }
     if(position_2==0)
     {
         ui->recentgroupbox_2->hide();
         ui->recentgroupbox->show();
     }
     }

HomePage::~HomePage()
{
    delete ui;
}
/////////////////////////////////////////////////////// all the user defined function here
/*---------------------------------------------------------showdescription2 here  */
void HomePage::showdescriptionbox2(int btn_number)
{
    lockbtn_1 = PrefferedMovieID.count();
    qDebug()<<"the value of lockabtn _1 is " << lockbtn_1;
    qDebug()<<"the vlaue of btn number -1 is " << btn_number-1;
    if(btn_number> lockbtn_1)
    {
        return;
    }
    foryouorlatest = 0;
    qDebug()<<"this has been called from " << btn_number;
    ui->descriptionbox->show();
    QSqlDatabase userdatabase = database::getMoviesData();
    QSqlQuery myquery(userdatabase);
    myquery.prepare("SELECT Released_Date, Title , Duration, Description , Poster FROM Movies_Table WHERE Movie_ID =:myid");
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
    QString finaldesc = duration + " m :" + description + "   MOVIE RELEASED ON :  " + myquery.value(0).toString() ;
    QByteArray imageData2 = myquery.value(4).toByteArray();
    QPixmap pixmap2;
    pixmap2.loadFromData(imageData2);
    ui->moviedescbtn->setIcon(pixmap2);
    ui->moviedescbtn->setIconSize(QSize(171,171));
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
            casts = casts + myquery.value(1).toString() + "  ";
        }

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
            directors = directors + myquery.value(1).toString() +  "  ";
        }
    }
    ui->directornames->setText(directors);

}
/*-------------------------------------------------------------------*/
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
    myquery.prepare("SELECT Movie_ID , Title , Duration, Description , Poster FROM Movies_Table WHERE Released_Date =:myDate");
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
    ui->moviedescbtn->setIconSize(QSize(171,171));
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
            casts = casts + myquery.value(1).toString() + "  ";
        }

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
            directors = directors + myquery.value(1).toString() +  "  ";
        }
    }
    ui->directornames->setText(directors);

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
    if(position_1 == 1)
    {
        ui->foryoubox->show();
        ui->foryoubox_2->hide();
        position_1=0;
    }
}


void HomePage::on_rightbtn_clicked()
{
    if(position_1 == 0)
    {
        ui->foryoubox_2->show();
        ui->foryoubox->hide();
        position_1=1;
    }
}


void HomePage::on_brightnessmodebtn_clicked()
{
    if(brightness == 0)
    {
        ui->searchbtn->setIcon(search);
        ui->logo->setPixmap(blacklogo);
        ui->house->setIcon(house);
        ui->gearbtn->setIcon(gear);
        ui->brightnessmodebtn->setIcon(moon);
        QString stylescript = R"(
          QDialog
{
background-color:white;

}

)";
        this->setStyleSheet(stylescript);
        stylescript = R"(
  QLabel
{
background-color:white;
color:black;

}

)";
        ui->foryoulabel->setStyleSheet(stylescript);
        stylescript = R"(
QPushButton
{
background-color:white;
border:none;
}
)";

        ui->leftbtn->setStyleSheet(stylescript);
        ui->rightbtn->setStyleSheet(stylescript);
        ui->leftbtn_2->setStyleSheet(stylescript);
        ui->rightbtn_2->setStyleSheet(stylescript);
        stylescript = R"(
QPushButton
{
background:white;
border:none;
}
)";
        ui->gearbtn->setStyleSheet(stylescript);
        ui->searchbtn->setStyleSheet(stylescript);
        ui->ProfilePicture->setStyleSheet(stylescript);
        ui->brightnessmodebtn->setStyleSheet(stylescript);
        ui->house->setStyleSheet(stylescript);
        stylescript = R"(
  QLabel
{
background-color:white;
color:black;

}

)";
        ui->recentlabel->setStyleSheet(stylescript);
        ui->recentlabel->setStyleSheet(stylescript);
        stylescript = R"(
QGroupBox{
background:white;
color:black;
}
)";
        ui->descriptionbox->setStyleSheet(stylescript);
        brightness = 1;
    }
    else if (brightness ==1)
    {
        ui->searchbtn->setIcon(whitesearch);
        ui->logo->setPixmap(logo);
        ui->house->setIcon(whitehouse);
        ui->gearbtn->setIcon(whitegear);
        ui->brightnessmodebtn->setIcon(sun);
        QString stylescript = R"(
          QDialog
{
background-color:black;

}

)";
        this->setStyleSheet(stylescript);
        stylescript = R"(
  QLabel
{
background-color:black;
color:white;

}

)";
        ui->foryoulabel->setStyleSheet(stylescript);
        stylescript = R"(
QPushButton
{
background-color:black;
border:none;
}

)";
        ui->leftbtn->setStyleSheet(stylescript);
        ui->rightbtn->setStyleSheet(stylescript);
        ui->leftbtn_2->setStyleSheet(stylescript);
        ui->rightbtn_2->setStyleSheet(stylescript);
        stylescript = R"(
QPushButton
{
background:black;
border:none;
}
)";
        ui->gearbtn->setStyleSheet(stylescript);
        ui->searchbtn->setStyleSheet(stylescript);
        ui->ProfilePicture->setStyleSheet(stylescript);
        ui->brightnessmodebtn->setStyleSheet(stylescript);
        ui->house->setStyleSheet(stylescript);
        stylescript = R"(
  QLabel
{
background-color:black;
color:white;

}

)";
        ui->recentlabel->setStyleSheet(stylescript);
        stylescript = R"(
QGroupBox{
background:black;
color:white;
}
)";
        ui->descriptionbox->setStyleSheet(stylescript);
        brightness = 0;
    }
}





void HomePage::on_leftbtn_2_clicked()
{
    if(position_2 == 1)
    {
        ui->recentgroupbox->show();
        ui->recentgroupbox_2->hide();
        position_2=0;
    }
}


void HomePage::on_rightbtn_2_clicked()
{
    if(position_2 == 0)
    {
        ui->recentgroupbox->hide();
        ui->recentgroupbox_2->show();
        position_2=1;
    }
}

void HomePage::on_moviebtn_1_clicked()
{
    btn_number = 1;
    showdescriptionbox2(1);
}


void HomePage::on_moviebtn_2_clicked()
{
    btn_number = 2;
    showdescriptionbox2(2);
}


void HomePage::on_moviebtn_3_clicked()
{
    btn_number = 3;
    showdescriptionbox2(3);
}


void HomePage::on_moviebtn_5_clicked()
{
    btn_number = 5;
    showdescriptionbox2(5);
}


void HomePage::on_moviebtn_6_clicked()
{
    btn_number = 6;
    showdescriptionbox2(6);
}


void HomePage::on_moviebtn_7_clicked()
{
    btn_number = 7;
    showdescriptionbox2(7);
}


void HomePage::on_moviebtn_8_clicked()
{
    btn_number = 8;
    showdescriptionbox2(8);
}


void HomePage::on_moviebtn_9_clicked()
{
    btn_number = 1;
    showdescriptionbox(1);
}


void HomePage::on_moviebtn_10_clicked()
{
    btn_number = 2;
    showdescriptionbox(2);
}


void HomePage::on_moviebtn_11_clicked()
{
    btn_number = 3;
    showdescriptionbox(3);
}


void HomePage::on_moviebtn_12_clicked()
{
    btn_number = 4;
    showdescriptionbox(4);
}


void HomePage::on_moviebtn_13_clicked()
{
    btn_number = 5;
    showdescriptionbox(5);
}


void HomePage::on_moviebtn_14_clicked()
{
    btn_number = 6;
    showdescriptionbox(6);
}


void HomePage::on_moviebtn_15_clicked()
{
    btn_number = 7;
    showdescriptionbox(7);
}


void HomePage::on_moviebtn_16_clicked()
{
    btn_number = 8;
    showdescriptionbox(8);
}





void HomePage::on_moviebtn_4_clicked()
{
    btn_number = 4;
    showdescriptionbox2(4);
}




void HomePage::on_pushButton_7_clicked()
{
    ui->descriptionbox->close();//tyo cross sign ho yo
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
    myquery.prepare("SELECT Title FROM Movies_table WHERE Movie_ID = :movieid");
    if(foryouorlatest == 1)
    {
    myquery.bindValue(":movieid", PrefferedMovieforlatestID[btn_number-1]);
    }
    else if(foryouorlatest == 0)
    {
        myquery.bindValue(":movieid",PrefferedMovieID[btn_number-1]);
    }
    qDebug()<<"the preffered movie list is " << PrefferedMovieforlatestID[btn_number-1];

    if(!myquery.exec())
    {
        QMessageBox::warning(this , "here are some error" , "you have entered wrong query in ratebtnclicked 1");
    }
    while(myquery.next())
    {

            moviename = myquery.value(0).toString();

    }
    qDebug()<<"the movie name is " << moviename;
    myquery.prepare("SELECT COUNT(*) FROM UserMovieRating WHERE username = :username AND movie_name = :moviename");
    myquery.bindValue(":username" , lusername);
    myquery.bindValue(":moviename" , moviename);
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
    myquery.bindValue(":movie_name",moviename);

        if(!myquery.exec())
        {

            return;
        }

    int summationrating =0, ratingno=0 , avgrating=0;

    myquery.prepare("SELECT rating FROM UserMovieRating WHERE movie_name = :moviename");
    myquery.bindValue(":moviename",moviename);
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
    myquery.bindValue(":moviename" , moviename);
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
    myquery.prepare("UPDATE Movies_table SET rating =:rating WHERE Title = :moviename ");
    myquery.bindValue(":rating" , avgrating);
    myquery.bindValue(":moviename",moviename);
    if(!myquery.exec())
    {
        QMessageBox::warning(this , "some error " , "you have entered wrong query in ratebtnclicked 6");
        return;
    }


}

////////////////////////////////////////////////////////////// end of setting the rating
