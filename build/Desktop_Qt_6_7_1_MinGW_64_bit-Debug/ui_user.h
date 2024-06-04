/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QLabel *label;
    QGroupBox *Userloginform;
    QLabel *Signup;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *usernameslot;
    QLineEdit *passwordslot;
    QLabel *label_4;
    QLineEdit *passwordslot_2;
    QLabel *haveanaccountlabel;
    QFrame *line;
    QPushButton *signupbutton;
    QPushButton *eye;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(1200, 750);
        User->setStyleSheet(QString::fromUtf8(" background: qlineargradient(\n"
"        spread:pad, x1:0, y1:0, x2:1, y2:0, \n"
"        stop:0 #000000, stop:0.65 #000000, stop:1 #505050\n"
"    );"));
        label = new QLabel(User);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 140, 641, 381));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo.jpg")));
        label->setScaledContents(true);
        Userloginform = new QGroupBox(User);
        Userloginform->setObjectName("Userloginform");
        Userloginform->setGeometry(QRect(710, 50, 471, 661));
        Userloginform->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid black;\n"
""));
        Signup = new QLabel(Userloginform);
        Signup->setObjectName("Signup");
        Signup->setGeometry(QRect(10, 10, 111, 41));
        QFont font;
        font.setPointSize(20);
        font.setWeight(QFont::Black);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        Signup->setFont(font);
        Signup->setStyleSheet(QString::fromUtf8("color:white;"));
        label_2 = new QLabel(Userloginform);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 240, 41, 41));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/passwordicon.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(Userloginform);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 150, 41, 41));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/usericon.png")));
        label_3->setScaledContents(true);
        usernameslot = new QLineEdit(Userloginform);
        usernameslot->setObjectName("usernameslot");
        usernameslot->setGeometry(QRect(70, 150, 361, 41));
        usernameslot->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;"));
        passwordslot = new QLineEdit(Userloginform);
        passwordslot->setObjectName("passwordslot");
        passwordslot->setGeometry(QRect(70, 240, 361, 41));
        passwordslot->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;\n"
""));
        passwordslot->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(Userloginform);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 330, 41, 41));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/passwordicon.png")));
        label_4->setScaledContents(true);
        passwordslot_2 = new QLineEdit(Userloginform);
        passwordslot_2->setObjectName("passwordslot_2");
        passwordslot_2->setGeometry(QRect(70, 330, 361, 41));
        passwordslot_2->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;\n"
""));
        passwordslot_2->setEchoMode(QLineEdit::Password);
        haveanaccountlabel = new QLabel(Userloginform);
        haveanaccountlabel->setObjectName("haveanaccountlabel");
        haveanaccountlabel->setGeometry(QRect(278, 400, 171, 20));
        haveanaccountlabel->setCursor(QCursor(Qt::PointingHandCursor));
        haveanaccountlabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:white;"));
        line = new QFrame(Userloginform);
        line->setObjectName("line");
        line->setGeometry(QRect(280, 430, 118, 3));
        line->setStyleSheet(QString::fromUtf8("background-color:white;"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        signupbutton = new QPushButton(Userloginform);
        signupbutton->setObjectName("signupbutton");
        signupbutton->setGeometry(QRect(59, 460, 361, 51));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        signupbutton->setFont(font1);
        signupbutton->setCursor(QCursor(Qt::PointingHandCursor));
        signupbutton->setStyleSheet(QString::fromUtf8("background-color:rgb(255,163,26);"));
        eye = new QPushButton(Userloginform);
        eye->setObjectName("eye");
        eye->setGeometry(QRect(370, 290, 51, 31));
        eye->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Dialog", nullptr));
        label->setText(QString());
        Userloginform->setTitle(QString());
        Signup->setText(QCoreApplication::translate("User", "SignUp", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        usernameslot->setPlaceholderText(QCoreApplication::translate("User", "enter user name must be 8 characters long", nullptr));
        passwordslot->setPlaceholderText(QCoreApplication::translate("User", "enter your password", nullptr));
        label_4->setText(QString());
        passwordslot_2->setPlaceholderText(QCoreApplication::translate("User", "confirm your password", nullptr));
        haveanaccountlabel->setText(QCoreApplication::translate("User", "already have an account", nullptr));
        signupbutton->setText(QCoreApplication::translate("User", "Sign Up", nullptr));
        eye->setText(QCoreApplication::translate("User", "\360\237\221\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
