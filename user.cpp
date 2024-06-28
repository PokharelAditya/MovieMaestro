#include "user.h"
#include "ui_user.h"
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QRegularExpression>

User::User(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::User),
    OpenEye(":/OpenEye.png"),
    CloseEye(":/CloseEye.png")

{
    ui->setupUi(this);
    /////
    usernameslot = findChild<QLineEdit *>("usernameslot");//changed here this is how you find the child and use the same name of the datatpe that you defined in the header file
    passwordslot =findChild<QLineEdit *>("passwordslot");//changed here
    passwordslot_2 =findChild<QLineEdit *>("passwordslot_2"); // changed here
    QSqlDatabase userdatabase = QSqlDatabase::addDatabase("QSQLITE" , "myconnection"); // here my connection is to say provide a unique id generally when we create a quey in slots the qt program already konws that we are doing referring to the given database but wheen we delcare a user defined function then the qt doesn't know what quey is to be passed where so we used myconnection unique id
      userdatabase.setDatabaseName("D:/database/userdatabase.db");
    if(!userdatabase.open())
     {
         QMessageBox::warning(this , "database info", "failed to connect to the database"+ userdatabase.lastError().text(), QMessageBox::Ok);

     }
     else
    {
        QMessageBox::warning(this , "database info", " connect to the database", QMessageBox::Ok);


    }
     ui->eye->setIcon(OpenEye);
}

User::~User()
{
    delete ui;
}
bool User::containsSpecialCharAndNumber(const QString &text)
{
    QRegularExpression specialCharRegex("[@#$%^&*()|\"';:<>?/~`!]");
    QRegularExpression numberRegex("\\d");

    return specialCharRegex.match(text).hasMatch() && numberRegex.match(text).hasMatch();
}
bool User::checklength(const QString &text, bool ispassword)///changed here
{
    if(ispassword)
    {
        if(text.length() >= 8)
        {

                return true;


        }
        else
        {return false;}
    }
    else
    {
        if(text.length() >= 8)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
bool User::checkifalreadyexists(QString &users )
{
     // Check if the username already exists
    QSqlQuery checkQuery(QSqlDatabase::database("myconnection"));
    checkQuery.prepare("SELECT user_id FROM userinfo WHERE user_id = :username");
    checkQuery.bindValue(":username", users);

    if (checkQuery.exec()) {
        return checkQuery.next(); // If a row exists, return true
    } else {

        return false;
    }

 }
bool User::adduserdata(QString &user_id , QString &password)
 {
     QSqlQuery query(QSqlDatabase::database("myconnection"));
     query.prepare("INSERT INTO userinfo (user_id, password) VALUES (:username, :password)");
     query.bindValue(":username", user_id);
     query.bindValue(":password", password);

     if (query.exec()) {
         return true;

     } else {
         return false;

     }
 }
void User::on_signupbutton_clicked()
{
    QString username = usernameslot->text();
    QString password = passwordslot->text();
    QString confirmPassword = passwordslot_2->text();
    QMessageBox msg;
    msg.setStyleSheet("QMessageBox { background-color: white; color: black; }");
    if(checklength(username, false)) {
        if(password == confirmPassword)
        {
            if(checklength(password , true))
            {
                if(containsSpecialCharAndNumber(password))
                {
                    if(!(checkifalreadyexists(username)))
                    {
                       isquerypass =  adduserdata(username , password);
                        if(isquerypass)
                       {
                            QMessageBox::information(this, "Signup Successful", "User signed up successfully!");

                       }
                        else
                        {
                            QMessageBox::warning(this, "Database Error", "Failed to insert data into the database: ");

                        }
                    }
                    else
                    {
                        QMessageBox::warning(this, "Username Exists", "The username already exists. Please choose a different one.", QMessageBox::Ok);
                        usernameslot->clear();
                    }

                }
          else
                {
                    msg.warning(this , "SecurityWarning", "For strengthening your password please enter at least one special character or number");
                    passwordslot->clear();
                    passwordslot_2->clear();
                }
            }
            else
            {
                msg.warning(this , "MessageBox" , "enter password of length 8 or more ");
                passwordslot->clear();
                passwordslot_2->clear();
            }
        }
        else
        { msg.warning(this, "Check Length", "You have to enter same password twice.");
            passwordslot->clear();
            passwordslot_2->clear();
        }
    } else {
        msg.warning(this, "Check Length", "You have to enter a username with 8 or more characters.");
        usernameslot->clear();
        return; // Exit the function if username length is invalid
    }

}



void User::on_eye_clicked()
{
    if(count % 2==0)
    {
    passwordslot->setEchoMode(QLineEdit::Normal);
    passwordslot_2->setEchoMode(QLineEdit::Normal);
    ui->eye->setIcon(CloseEye);
        count++;
    }
    else
    {
        passwordslot->setEchoMode(QLineEdit::Password);
        passwordslot_2->setEchoMode(QLineEdit::Password);
        ui->eye->setIcon(OpenEye);
        count++;
    }
}


void User::on_clearusernamebtn_clicked()
{
    ui->usernameslot->clear();

}

void User::on_clearpasswordbtn_clicked()
{
    ui->passwordslot->clear();

}

void User::on_clearconfirmpasswordbtn_2_clicked()
{
    ui->passwordslot_2->clear();
}

