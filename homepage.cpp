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
HomePage::HomePage(User *myuser ,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
    if (!myuser) {
        QMessageBox::critical(this, tr("Error"), tr("Invalid user object."), QMessageBox::Ok);
        return;
    }
   QSqlDatabase userdatabase = DatabaseManager::getDatabase();

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


    QString welcometext = "Welcome " + myuser->_username;
    ui->Username->setText(welcometext);
    qDebug()<<welcometext;
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

