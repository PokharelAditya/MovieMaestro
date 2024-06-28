#include "user.h"
#include "ui_user.h"
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QRegularExpression>
#include<QGroupBox>
#include<admin.h>
User::User(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::User),
    OpenEye(":/OpenEye.png"),
    CloseEye(":/CloseEye.png"),
    Cross(":/close.png")
{
    ui->setupUi(this);
    /////
    usernameslot = findChild<QLineEdit *>("usernameslot");//changed here this is how you find the child and use the same name of the datatpe that you defined in the header file
    passwordslot =findChild<QLineEdit *>("passwordslot");//changed here
    passwordslot_2 =findChild<QLineEdit *>("passwordslot_2"); // changed here
    QSqlDatabase userdatabase = QSqlDatabase::addDatabase("QSQLITE" , "myconnection"); //(this is optional but some times it shows a particular error ) here my connection is to say provide a unique id generally when we create a quey in slots the qt program already konws that we are doing referring to the given database but wheen we delcare a user defined function then the qt doesn't know what quey is to be passed where so we used myconnection unique id
      userdatabase.setDatabaseName(QCoreApplication::applicationDirPath()+"/../userdatabase.db");
    if(!userdatabase.open())
     {
         QMessageBox::warning(this , "database info", "failed to connect to the database"+ userdatabase.lastError().text(), QMessageBox::Ok);

     }
     else
    {
        QMessageBox::warning(this , "database info", " connect to the database", QMessageBox::Ok);


    }
     setWindowTitle("Movie Maestro");
   setWindowIcon(QIcon(":/MM Transparent BG.png" ));
     ui->eye->setIcon(OpenEye);
    ui->clearconfirmpasswordbtn_2->setIcon(Cross);
    ui->clearpasswordbtn->setIcon(Cross);
ui->clearusernamebtn->setIcon(Cross);
    ui->loginbox->hide();
ui->leye->setIcon(OpenEye);
    ui->lclearusernamebtn->setIcon(Cross);
ui->lclearpasswordbtn->setIcon(Cross);

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
 void User::setredusernamelineedit()
 {
     ui->usernameslot->setPlaceholderText("entere at least 8 characters");
     ui->usernameslot->setStyleSheet(
         "QLineEdit {"
         "border:2px solid red;"
         "background:none;"
         " }");
 }
 void User::setredpasswordlineedit()
 {
     ui->passwordslot->setPlaceholderText("enter password");
     ui->passwordslot_2->setPlaceholderText("re-enter the same password");
     ui->passwordslot->setStyleSheet(
          "QLineEdit {"
          "border:2px solid red;"
          "background:none;"
          " }");
      ui->passwordslot_2->setStyleSheet(
         "QLineEdit {"
         "border:2px solid red;"
         "background:none;"
         " }");
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
                        setredusernamelineedit();
                    }

                }
          else
                {
                    msg.warning(this , "SecurityWarning", "For strengthening your password please enter at least one special character or number");
                    passwordslot->clear();
                    passwordslot_2->clear();
                        setredpasswordlineedit();
                }
            }
            else
            {
                msg.warning(this , "MessageBox" , "enter password of length 8 or more ");
                passwordslot->clear();
                passwordslot_2->clear();
                setredpasswordlineedit();
            }
        }
        else
        { msg.warning(this, "Check Length", "You have to enter same password twice.");
            passwordslot->clear();
            passwordslot_2->clear();
            setredpasswordlineedit();
        }
    } else {
        msg.warning(this, "Check Length", "You have to enter a username with 8 or more characters.");
        usernameslot->clear();
         setredusernamelineedit();
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


void User::on_leye_clicked()
{
    if(lcount % 2==0)
    {
        ui->lpasswordslot->setEchoMode(QLineEdit::Normal);
        ui->leye->setIcon(CloseEye);
        lcount++;
    }
    else
    {
        ui->lpasswordslot->setEchoMode(QLineEdit::Password);

        ui->leye->setIcon(OpenEye);
        lcount++;
    }
}


void User::on_lclearusernamebtn_clicked()
{
    ui->lusernameslot->clear();
}


void User::on_lclearpasswordbtn_clicked()
{
    ui->lpasswordslot->clear();
}


void User::on_goback_clicked()
{
    ui->loginbox->hide();
    ui->signupbox->show();
}


void User::on_alreadyregistered_clicked()
{
    ui->signupbox->hide();
    ui->loginbox->show();
}


void User::on_loginbutton_clicked()
{
    QString pw = ui->lpasswordslot->text();
    QString uname = ui->lusernameslot->text();
    QSqlQuery myQuery(QSqlDatabase::database("myconnection"));
    myQuery.prepare("SELECT password FROM userinfo WHERE user_id = :username");
    myQuery.bindValue(":username",uname);

    if (myQuery.exec())/* this check if query sqlite ma gayera execute vayo kinai vanera  */{
        if (myQuery.next()) { // Check if a row is returned
            QString databasepw = myQuery.value(0).toString(); // Get the password from the result
            if (databasepw == pw) {
                QMessageBox::information(this, "Login Success", "Congratulations, you are logged in");
            } else {
                QMessageBox::warning(this, "Login Failure", "Incorrect password entered");
                ui->lpasswordslot->clear();
                // Later make this also red
                ui->lpasswordslot->clear();
                ui->lpasswordslot->setPlaceholderText("wrong password entered");
                ui->lpasswordslot->setStyleSheet(
                    "QLineEdit {"
                    "border:2px solid red;"
                    "background:none;"
                    " }");
            }
        } else {
            QMessageBox::warning(this, "Not Found", "Username not found");
            // Later add the red bordering in the lusernameslot
            ui->lusernameslot->clear();
            ui->lusernameslot->setPlaceholderText("wrong username entered");
            ui->lusernameslot->setStyleSheet(
                "QLineEdit {"
                "border:2px solid red;"
                "background:none;"
                " }");
        }
    } else {
        QMessageBox::critical(this, "Query Error", "Failed to execute query");
    }

}


void User::on_lusernameslot_returnPressed()
{

    User::on_loginbutton_clicked();
}


void User::on_lpasswordslot_returnPressed()
{
    User::on_loginbutton_clicked();
}


void User::on_usernameslot_returnPressed()
{
    User::on_signupbutton_clicked();
}


void User::on_passwordslot_returnPressed()
{
    User::on_signupbutton_clicked();
}


void User::on_passwordslot_2_returnPressed()
{
    User::on_signupbutton_clicked();
}


void User::on_adminloginbtn_clicked()
{
    this->close();
    Admin *myadmin = new Admin();
    myadmin->show();
}

