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
    QGroupBox *signupbox;
    QLabel *Signup;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *usernameslot;
    QLineEdit *passwordslot;
    QLabel *label_4;
    QLineEdit *passwordslot_2;
    QFrame *line;
    QPushButton *signupbutton;
    QPushButton *eye;
    QPushButton *clearusernamebtn;
    QPushButton *clearpasswordbtn;
    QPushButton *clearconfirmpasswordbtn_2;
    QPushButton *alreadyregistered;
    QGroupBox *loginbox;
    QLabel *login;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lusernameslot;
    QLineEdit *lpasswordslot;
    QFrame *line_2;
    QPushButton *loginbutton;
    QPushButton *leye;
    QPushButton *lclearusernamebtn;
    QPushButton *lclearpasswordbtn;
    QPushButton *goback;
    QPushButton *adminloginbtn;

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
        signupbox = new QGroupBox(User);
        signupbox->setObjectName("signupbox");
        signupbox->setGeometry(QRect(710, 55, 471, 661));
        signupbox->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid black;\n"
""));
        Signup = new QLabel(signupbox);
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
        label_2 = new QLabel(signupbox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 240, 41, 41));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/passwordicon.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(signupbox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 150, 41, 41));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/usericon.png")));
        label_3->setScaledContents(true);
        usernameslot = new QLineEdit(signupbox);
        usernameslot->setObjectName("usernameslot");
        usernameslot->setGeometry(QRect(70, 150, 361, 41));
        usernameslot->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;"));
        passwordslot = new QLineEdit(signupbox);
        passwordslot->setObjectName("passwordslot");
        passwordslot->setGeometry(QRect(70, 240, 361, 41));
        passwordslot->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;\n"
""));
        passwordslot->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(signupbox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 330, 41, 41));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/passwordicon.png")));
        label_4->setScaledContents(true);
        passwordslot_2 = new QLineEdit(signupbox);
        passwordslot_2->setObjectName("passwordslot_2");
        passwordslot_2->setGeometry(QRect(70, 330, 361, 41));
        passwordslot_2->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;\n"
""));
        passwordslot_2->setEchoMode(QLineEdit::Password);
        line = new QFrame(signupbox);
        line->setObjectName("line");
        line->setGeometry(QRect(280, 430, 118, 3));
        line->setStyleSheet(QString::fromUtf8("background-color:white;"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        signupbutton = new QPushButton(signupbox);
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
        signupbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        eye = new QPushButton(signupbox);
        eye->setObjectName("eye");
        eye->setGeometry(QRect(390, 290, 51, 31));
        eye->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        clearusernamebtn = new QPushButton(signupbox);
        clearusernamebtn->setObjectName("clearusernamebtn");
        clearusernamebtn->setGeometry(QRect(400, 160, 21, 20));
        clearpasswordbtn = new QPushButton(signupbox);
        clearpasswordbtn->setObjectName("clearpasswordbtn");
        clearpasswordbtn->setGeometry(QRect(400, 250, 21, 20));
        clearconfirmpasswordbtn_2 = new QPushButton(signupbox);
        clearconfirmpasswordbtn_2->setObjectName("clearconfirmpasswordbtn_2");
        clearconfirmpasswordbtn_2->setGeometry(QRect(400, 340, 21, 20));
        alreadyregistered = new QPushButton(signupbox);
        alreadyregistered->setObjectName("alreadyregistered");
        alreadyregistered->setGeometry(QRect(250, 393, 181, 29));
        alreadyregistered->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        loginbox = new QGroupBox(User);
        loginbox->setObjectName("loginbox");
        loginbox->setGeometry(QRect(710, 55, 471, 661));
        loginbox->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid black;\n"
""));
        login = new QLabel(loginbox);
        login->setObjectName("login");
        login->setGeometry(QRect(10, 10, 101, 41));
        login->setFont(font);
        login->setStyleSheet(QString::fromUtf8("color:white;"));
        label_5 = new QLabel(loginbox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 240, 41, 41));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/passwordicon.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(loginbox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 150, 41, 41));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/usericon.png")));
        label_6->setScaledContents(true);
        lusernameslot = new QLineEdit(loginbox);
        lusernameslot->setObjectName("lusernameslot");
        lusernameslot->setGeometry(QRect(70, 150, 361, 41));
        lusernameslot->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;"));
        lpasswordslot = new QLineEdit(loginbox);
        lpasswordslot->setObjectName("lpasswordslot");
        lpasswordslot->setGeometry(QRect(70, 240, 361, 41));
        lpasswordslot->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;\n"
""));
        lpasswordslot->setEchoMode(QLineEdit::Password);
        line_2 = new QFrame(loginbox);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(283, 359, 118, 3));
        line_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        loginbutton = new QPushButton(loginbox);
        loginbutton->setObjectName("loginbutton");
        loginbutton->setGeometry(QRect(60, 400, 361, 51));
        loginbutton->setFont(font1);
        loginbutton->setCursor(QCursor(Qt::PointingHandCursor));
        loginbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        leye = new QPushButton(loginbox);
        leye->setObjectName("leye");
        leye->setGeometry(QRect(70, 290, 51, 31));
        leye->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        lclearusernamebtn = new QPushButton(loginbox);
        lclearusernamebtn->setObjectName("lclearusernamebtn");
        lclearusernamebtn->setGeometry(QRect(400, 160, 21, 20));
        lclearusernamebtn->setFocusPolicy(Qt::NoFocus);
        lclearpasswordbtn = new QPushButton(loginbox);
        lclearpasswordbtn->setObjectName("lclearpasswordbtn");
        lclearpasswordbtn->setGeometry(QRect(400, 250, 21, 20));
        goback = new QPushButton(loginbox);
        goback->setObjectName("goback");
        goback->setGeometry(QRect(260, 310, 171, 41));
        goback->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        adminloginbtn = new QPushButton(User);
        adminloginbtn->setObjectName("adminloginbtn");
        adminloginbtn->setGeometry(QRect(30, 10, 161, 101));
        QFont font2;
        font2.setPointSize(54);
        adminloginbtn->setFont(font2);
        adminloginbtn->setStyleSheet(QString::fromUtf8("background:black\n"
"\n"
";\n"
""));

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Dialog", nullptr));
        label->setText(QString());
        signupbox->setTitle(QString());
        Signup->setText(QCoreApplication::translate("User", "SignUp", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        usernameslot->setPlaceholderText(QCoreApplication::translate("User", "enter user name must be 8 characters long", nullptr));
        passwordslot->setPlaceholderText(QCoreApplication::translate("User", "enter your password", nullptr));
        label_4->setText(QString());
        passwordslot_2->setPlaceholderText(QCoreApplication::translate("User", "confirm your password", nullptr));
        signupbutton->setText(QCoreApplication::translate("User", "Sign Up", nullptr));
        eye->setText(QString());
        clearusernamebtn->setText(QString());
        clearpasswordbtn->setText(QString());
        clearconfirmpasswordbtn_2->setText(QString());
        alreadyregistered->setText(QCoreApplication::translate("User", "already have an account", nullptr));
        loginbox->setTitle(QString());
        login->setText(QCoreApplication::translate("User", "Login", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        lusernameslot->setPlaceholderText(QCoreApplication::translate("User", "enter user name must be 8 characters long", nullptr));
        lpasswordslot->setPlaceholderText(QCoreApplication::translate("User", "enter your password", nullptr));
        loginbutton->setText(QCoreApplication::translate("User", "Login", nullptr));
        leye->setText(QString());
        lclearusernamebtn->setText(QString());
        lclearpasswordbtn->setText(QString());
        goback->setText(QCoreApplication::translate("User", "go back to sign up", nullptr));
        adminloginbtn->setText(QCoreApplication::translate("User", "\360\237\221\250\342\200\215\360\237\222\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
