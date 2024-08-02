#include "usersetting.h"
#include "ui_usersetting.h"
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QRegularExpression>
#include<QGroupBox>
#include<QVector>
#include <QFileDialog>
#include <QBuffer>
#include<QLabel>
#include<QList>
#include <QImageReader>
#include "database.h"
#include"homepage.h"
#include "user.h"
#include "Databasemanager.h"
#include<QSettings>
#include<QIcon>
#include<QSql>
UserSetting::UserSetting(User *myuser,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserSetting)
{
    ui->setupUi(this);
    ui->horror->setAutoExclusive(false);
    ui->action->setAutoExclusive(false);
    ui->thriller->setAutoExclusive(false);
    ui->romance->setAutoExclusive(false);
    ui->comedy->setAutoExclusive(false);
    ui->romcom->setAutoExclusive(false);
    ui->drama->setAutoExclusive(false);
    ui->scifi->setAutoExclusive(false);
    ui->history->setAutoExclusive(false);
    ui->suspense->setAutoExclusive(false);
    setWindowTitle("Movie Maestro");
    setWindowIcon(QIcon(":/MM Transparent BG.png" ));
    qDebug()<<"Helloo " << myuser->_username;
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QSqlQuery myquery(db);
    myquery.prepare("SELECT images FROM userinfo WHERE user_id = :username");
    myquery.bindValue(":username", myuser->_username);
    if(!myquery.exec())
    {
        QMessageBox::warning(this , "error", "ther have been some error");

    }
    if(myquery.next())
    {
        imageData = myquery.value(0).toByteArray();
        pixmap.loadFromData(imageData);
        if (!pixmap.isNull()) {

            ui->profilepic->setPixmap(pixmap);
            ui->profilepic->setScaledContents(true);
            ui->profilepicbtn->setIcon(pixmap);
            ui->profilepicbtn->setIconSize(ui->profilepicbtn->size());

        }
    }

    ui->changepwbox->hide();
    ui->genrebox->hide();
    ui->updateppbox->hide();
    ui->options->show();
    tusername = myuser->_username;

}

UserSetting::~UserSetting()
{
    delete ui;
}

void UserSetting::on_changepwbtn_clicked()
{
    ui->options->hide();
    ui->changepwbox->show();
}


void UserSetting::on_updategenrebtn_clicked()
{
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QSqlQuery query(db);
    query.prepare("SELECT horro , action , thriller, romance , comedy , rom_com , drama , sci_fi ,history , suspense FROM userinfo WHERE user_id = :userid");
    query.bindValue(":userid" ,tusername );
    if(!query.exec())
    {
        QMessageBox::warning(this , "error" , "query error");
    }
    if(!query.next())
    {
        QMessageBox::warning(this , "error" , "such table not found");
    }


    if(query.value(0).toInt() ==1)
    {
        ui->horror->setChecked(true);
    }
    if(query.value(1).toInt() ==1)
    {
        ui->action->setChecked(true);
    }
    if(query.value(2).toInt() ==1)
    {
        ui->thriller->setChecked(true);
    }
    if(query.value(3).toInt() ==1)
    {
        ui->romance->setChecked(true);
    }
    if(query.value(4).toInt() ==1)
    {
        ui->comedy->setChecked(true);
    }
    if(query.value(5).toInt() ==1)
    {
        ui->romcom->setChecked(true);
    }
    if(query.value(6).toInt() ==1)
    {
        ui->drama->setChecked(true);
    }
    if(query.value(7).toInt() ==1)
    {
        ui->scifi->setChecked(true);
    }
    if(query.value(8).toInt() ==1)
    {
        ui->history->setChecked(true);
    }
    if(query.value(9).toInt() ==1)
    {
        ui->suspense->setChecked(true);
    }
    ui->options->hide();
    ui->genrebox->show();
}


void UserSetting::on_updateppbtn_clicked()
{
    ui->updateppbox->show();
    ui->options->hide();
}


void UserSetting::on_changegenrebtn_clicked()
{
    horror = ui->horror->isChecked() ? 1 : 0;
    thriller = ui->thriller->isChecked() ? 1 : 0;
    romance = ui->romance->isChecked() ? 1 : 0;
    comedy = ui->comedy->isChecked() ? 1 : 0;
    rom_com = ui->romcom->isChecked() ? 1 : 0;
    drama = ui->drama->isChecked() ? 1 : 0;
    sci_fi = ui->scifi->isChecked() ? 1 : 0;
    history = ui->history->isChecked() ? 1 : 0;
    suspense = ui->suspense->isChecked() ? 1 : 0;
    action = ui->action->isChecked() ? 1 : 0;

    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QSqlQuery query(db);
    query.prepare("UPDATE userinfo SET horro = :horror , action = :action, thriller =:thriller , romance = :romance , comedy =:comedy , rom_com = :rom_com , drama = :drama , sci_fi = :sci_fi , history = :history , suspense = :suspense WHERE user_id = :username");
    query.bindValue(":horror", horror);
    query.bindValue(":action", action);
    query.bindValue(":thriller", thriller);
    query.bindValue(":romance", romance);
    query.bindValue(":comedy", comedy);
    query.bindValue(":rom_com", rom_com);
    query.bindValue(":drama", drama);
    query.bindValue(":sci_fi", sci_fi);
    query.bindValue(":history", history);
    query.bindValue(":suspense", suspense);
    query.bindValue(":username", tusername);
    if(!query.exec())
    {
        QMessageBox::warning(this, "error", "here are few of the errors in the query to update the query list  ");
        return;
    }
    QMessageBox::information(this,"Updated","The genre has been changed.");

}


void UserSetting::on_updategenrebtn_2_clicked()
{  QList<int> firstlist;
    firstlist.append( ui->horror->isChecked() ? 1 : 0);
    firstlist.append(ui->action->isChecked() ? 1 : 0);
    firstlist.append (ui->thriller->isChecked() ? 1 : 0);
    firstlist.append(ui->romance->isChecked() ? 1 : 0);
    firstlist.append(ui->comedy->isChecked() ? 1 : 0);
    firstlist.append( ui->romcom->isChecked() ? 1 : 0);
    firstlist.append(ui->drama->isChecked() ? 1 : 0);
    firstlist.append(ui->scifi->isChecked() ? 1 : 0);
    firstlist.append(ui->history->isChecked() ? 1 : 0);
    firstlist.append(ui->suspense->isChecked() ? 1 : 0);
    qDebug()<<"printing" << firstlist;
    QList<int> secondlist;
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QSqlQuery query(db);
    query.prepare("SELECT horro  , action , thriller  , romance  , comedy  , rom_com  , drama  , sci_fi , history  , suspense FROM userinfo WHERE user_id =:username ");
    query.bindValue(":username", tusername);
    if(!query.exec())
    {
        QMessageBox::warning(this , "error","the select query doesnt work");
        return;
    }
    if(!query.next())
    {
        QMessageBox::warning(this , "error" ,"no such username in ");
    }
    for(int i=0; i<10; i++)
    {
        secondlist.append(query.value(i).toInt());
    }
    for(int i =0; i<10; i++)
    {
    thirdlist.append(firstlist[i]|secondlist[i]);
    }
        qDebug()<<"printing " << secondlist;
    qDebug()<<"printing  " << thirdlist;
     query.prepare("UPDATE userinfo SET horro = :horror , action = :action, thriller =:thriller , romance = :romance , comedy =:comedy , rom_com = :rom_com , drama = :drama , sci_fi = :sci_fi , history = :history , suspense = :suspense WHERE user_id = :username");
    query.bindValue(":username" ,tusername);
     query.bindValue(":horror", thirdlist[0]);
     query.bindValue(":action",thirdlist[1]);
     query.bindValue(":thriller", thirdlist[2]);
     query.bindValue(":romance",thirdlist[3]);
     query.bindValue(":comedy", thirdlist[4]);
     query.bindValue(":rom_com", thirdlist[5]);
     query.bindValue(":drama", thirdlist[6]);
     query.bindValue(":sci_fi", thirdlist[7]);
     query.bindValue(":history", thirdlist[8]);
     query.bindValue(":suspense", thirdlist[9]);
     if(!query.exec())
     {
         QMessageBox::warning(this ,"error" ,"here are some porble in the end ");
         return;
     }
    QMessageBox::information(this,"Added","The selected genre has been added.");
}


void UserSetting::on_updatebtn_clicked()
{
    QString oldpassword = ui->oldpassword->text();
    QString newpassword = ui->newpassword->text();
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QSqlQuery query(db);
    query.prepare("SELECT password FROM userinfo WHERE user_id =:username");
    query.bindValue(":username" , tusername);
    if(!query.exec())
    {

        QMessageBox::warning(this , "error" , "some erorr in extracting password");
        return;
    }

    if(!query.next())
    {
        QMessageBox::warning(this , "error" , "the username was not found ");
        return;
    }
    User *myuser = new User();

    if(myuser->encrypt(oldpassword)!= query.value(0).toString())
    {
        QMessageBox::warning(this , "error" , "there old password is not matching ");
        return;
    }
    User *youruser = new User();
    /*--------------------------------------------------------------*/
    if (!youruser->checklength(newpassword, true)) {
        QMessageBox::warning(this, "Check Length", "Enter password of length 8 or more.");
        ui->newpassword->clear();
        return; // Exit the function if password length is invalid
    }

    if (!youruser->containsSpecialCharAndNumber(newpassword)) {
         QMessageBox::warning(this, "Security Warning", "For strengthening your password please enter at least one special character or number.");
        ui->newpassword->clear();
        return; // Exit the function if password does not meet security criteria
    }
      /*--------------------------------------------------------------*/
    query.prepare("UPDATE userinfo SET password=:password WHERE user_id = :username");
    query.bindValue(":password" , youruser->encrypt(newpassword) );
    query.bindValue(":username" ,tusername);
    if(!query.exec())
    {
        QMessageBox::warning(this , "error" ,"there seems to be an error with username or something ");
        return;
    }

}


void UserSetting::on_updateprofilepicbtn_clicked()
{
    if(QMessageBox::question(this,"Update","Do you want to update your profile picture?",QMessageBox::Yes,QMessageBox::No) == QMessageBox::Yes)
    {
    QSqlDatabase db = DatabaseManager::instance().getDatabase();
    QSqlQuery query(db);
    query.prepare("UPDATE userinfo SET images= :images WHERE user_id =:username");
    query.bindValue(":username" , tusername);
    query.bindValue(":images" , imageData2);
    if(!query.exec())
    {
        QMessageBox::warning(this , "error" , "erro while executing query to insert the data " );
        return ;
    }
    QMessageBox::information(this ,"Info" , "Your profile picture has been updated.");
    }

}


void UserSetting::on_profilepicbtn_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
    if (filePath.isEmpty()) {
        return;
    }

    QImage image(filePath);
    if (image.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "The selected file is not a valid image.");
        return;
    }


    QBuffer buffer(&imageData2);
    buffer.open(QIODevice::WriteOnly);
    image.save(&buffer, "PNG");
    QPixmap pixmap;
    pixmap.loadFromData(imageData2);

    ui->profilepicbtn->setIcon(pixmap);
    ui->profilepicbtn->setIconSize(ui->profilepicbtn->size());

}

void UserSetting::backpressed(QGroupBox *mybox)
{
    mybox->close();
    ui->options->show();
}
void UserSetting::on_updateprofilepicbtn_2_clicked()
{


}


void UserSetting::on_backpw_clicked()
{

    QGroupBox *mybox = nullptr;
    mybox = ui->changepwbox;
    backpressed(mybox);
}


void UserSetting::on_backgenre_clicked()
{

    QGroupBox *mybox = nullptr;
    mybox = ui->genrebox;
    backpressed(mybox);
}


void UserSetting::on_gobackbtn_clicked()
{
    User *thisuser = new User();
    thisuser->_username = tusername;
    HomePage *thishome = new HomePage(thisuser);
    this->close();
    thishome->show();
}


void UserSetting::on_backpp_clicked()
{
    QGroupBox *mybox = nullptr;
    mybox = ui->updateppbox;
    backpressed(mybox);
}

