#include "user.h"
#include "ui_user.h"
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QRegularExpression>

User::User(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::User)
{
    ui->setupUi(this);
    /////
    usernameslot = findChild<QLineEdit *>("usernameslot");//changed here
    passwordslot =findChild<QLineEdit *>("passwordslot");//changed here
    passwordslot_2 =findChild<QLineEdit *>("passwordslot_2"); // changed here

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
                    // connect to sql
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
        count++;
    }
    else
    {
        passwordslot->setEchoMode(QLineEdit::Password);
        passwordslot_2->setEchoMode(QLineEdit::Password);
        count++;
    }
}

