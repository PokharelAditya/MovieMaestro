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
    right(":/right.png")


{


    mysetting = new QSettings("myapp","MovieMaestro",this);
    mysetting->beginGroup("window");
    mysetting->setValue("username" , myuser->_username);
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

    qDebug()<<"the username is " << myuser->_username;
    QSqlQuery query(userdatabase);
    qDebug()<<"after newconnection";
    query.prepare("SELECT images FROM userinfo WHERE user_id = :username");
    query.bindValue(":username", myuser->_username);
    qDebug()<<"after bind values";
    if (!query.exec()) {
         QMessageBox::critical(this, tr("Database Error"), tr("Failed to execute query: ") + query.lastError().text(), QMessageBox::Ok);
        return;
    }
    qDebug()<<"after !query.exec()";
        if (!query.next()) {
         QMessageBox::warning(this, tr("No Image Found"), tr("No image found for the specified user."), QMessageBox::Ok);
            return;
    }
        qDebug()<<"after !query.next()";
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

