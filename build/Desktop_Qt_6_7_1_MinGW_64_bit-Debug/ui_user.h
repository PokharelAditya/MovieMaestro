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
#include <QtWidgets/QRadioButton>

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
    QPushButton *UploadImage;
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
    QGroupBox *genre;
    QLabel *login_2;
    QRadioButton *horror;
    QRadioButton *action;
    QRadioButton *thriller;
    QRadioButton *romance;
    QRadioButton *comedy;
    QRadioButton *romcom;
    QRadioButton *drama;
    QRadioButton *scifi;
    QRadioButton *history;
    QRadioButton *suspense;
    QPushButton *submit;
    QPushButton *left;

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
        label->setGeometry(QRect(20, 185, 641, 380));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo.jpg")));
        label->setScaledContents(true);
        signupbox = new QGroupBox(User);
        signupbox->setObjectName("signupbox");
        signupbox->setGeometry(QRect(710, 55, 471, 631));
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
        usernameslot->setClearButtonEnabled(true);
        passwordslot = new QLineEdit(signupbox);
        passwordslot->setObjectName("passwordslot");
        passwordslot->setGeometry(QRect(70, 240, 361, 41));
        passwordslot->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;\n"
""));
        passwordslot->setEchoMode(QLineEdit::Password);
        passwordslot->setClearButtonEnabled(true);
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
        passwordslot_2->setClearButtonEnabled(true);
        line = new QFrame(signupbox);
        line->setObjectName("line");
        line->setGeometry(QRect(280, 430, 118, 3));
        line->setStyleSheet(QString::fromUtf8("background-color:white;"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        signupbutton = new QPushButton(signupbox);
        signupbutton->setObjectName("signupbutton");
        signupbutton->setGeometry(QRect(50, 480, 361, 51));
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
        clearusernamebtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearusernamebtn->setStyleSheet(QString::fromUtf8("border:none;"));
        clearpasswordbtn = new QPushButton(signupbox);
        clearpasswordbtn->setObjectName("clearpasswordbtn");
        clearpasswordbtn->setGeometry(QRect(400, 250, 21, 20));
        clearpasswordbtn->setCursor(QCursor(Qt::PointingHandCursor));
        clearpasswordbtn->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        clearconfirmpasswordbtn_2 = new QPushButton(signupbox);
        clearconfirmpasswordbtn_2->setObjectName("clearconfirmpasswordbtn_2");
        clearconfirmpasswordbtn_2->setGeometry(QRect(360, 340, 21, 20));
        clearconfirmpasswordbtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        clearconfirmpasswordbtn_2->setStyleSheet(QString::fromUtf8("border:none;"));
        alreadyregistered = new QPushButton(signupbox);
        alreadyregistered->setObjectName("alreadyregistered");
        alreadyregistered->setGeometry(QRect(250, 400, 181, 29));
        alreadyregistered->setCursor(QCursor(Qt::PointingHandCursor));
        alreadyregistered->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"\n"
"}"));
        UploadImage = new QPushButton(signupbox);
        UploadImage->setObjectName("UploadImage");
        UploadImage->setGeometry(QRect(300, 20, 141, 101));
        UploadImage->setCursor(QCursor(Qt::PointingHandCursor));
        UploadImage->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:none;\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"color:white;}\n"
"QPushButton:hover\n"
"{\n"
"background:rgb(255,163,26);\n"
"}"));
        UploadImage->setIconSize(QSize(141, 101));
        loginbox = new QGroupBox(User);
        loginbox->setObjectName("loginbox");
        loginbox->setGeometry(QRect(710, 55, 471, 631));
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
        lusernameslot->setClearButtonEnabled(true);
        lpasswordslot = new QLineEdit(loginbox);
        lpasswordslot->setObjectName("lpasswordslot");
        lpasswordslot->setGeometry(QRect(70, 240, 361, 41));
        lpasswordslot->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;\n"
""));
        lpasswordslot->setEchoMode(QLineEdit::Password);
        lpasswordslot->setClearButtonEnabled(true);
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
        lclearusernamebtn->setStyleSheet(QString::fromUtf8(""));
        lclearpasswordbtn = new QPushButton(loginbox);
        lclearpasswordbtn->setObjectName("lclearpasswordbtn");
        lclearpasswordbtn->setGeometry(QRect(400, 250, 21, 20));
        goback = new QPushButton(loginbox);
        goback->setObjectName("goback");
        goback->setGeometry(QRect(260, 320, 171, 41));
        goback->setCursor(QCursor(Qt::PointingHandCursor));
        goback->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:none;\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"\n"
"}"));
        adminloginbtn = new QPushButton(User);
        adminloginbtn->setObjectName("adminloginbtn");
        adminloginbtn->setGeometry(QRect(30, 30, 111, 101));
        QFont font2;
        font2.setPointSize(54);
        adminloginbtn->setFont(font2);
        adminloginbtn->setCursor(QCursor(Qt::PointingHandCursor));
        adminloginbtn->setStyleSheet(QString::fromUtf8("background:black\n"
"\n"
";\n"
""));
        genre = new QGroupBox(User);
        genre->setObjectName("genre");
        genre->setGeometry(QRect(710, 55, 471, 631));
        genre->setStyleSheet(QString::fromUtf8("background:none;"));
        login_2 = new QLabel(genre);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(10, 30, 261, 41));
        login_2->setFont(font);
        login_2->setStyleSheet(QString::fromUtf8("color:white;"));
        horror = new QRadioButton(genre);
        horror->setObjectName("horror");
        horror->setGeometry(QRect(40, 130, 181, 51));
        horror->setCursor(QCursor(Qt::PointingHandCursor));
        horror->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        action = new QRadioButton(genre);
        action->setObjectName("action");
        action->setGeometry(QRect(250, 130, 181, 51));
        action->setCursor(QCursor(Qt::PointingHandCursor));
        action->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        thriller = new QRadioButton(genre);
        thriller->setObjectName("thriller");
        thriller->setGeometry(QRect(40, 210, 181, 51));
        thriller->setCursor(QCursor(Qt::PointingHandCursor));
        thriller->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        romance = new QRadioButton(genre);
        romance->setObjectName("romance");
        romance->setGeometry(QRect(250, 210, 181, 51));
        romance->setCursor(QCursor(Qt::PointingHandCursor));
        romance->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        comedy = new QRadioButton(genre);
        comedy->setObjectName("comedy");
        comedy->setGeometry(QRect(40, 290, 181, 51));
        comedy->setCursor(QCursor(Qt::PointingHandCursor));
        comedy->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        romcom = new QRadioButton(genre);
        romcom->setObjectName("romcom");
        romcom->setGeometry(QRect(250, 290, 181, 51));
        romcom->setCursor(QCursor(Qt::PointingHandCursor));
        romcom->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        drama = new QRadioButton(genre);
        drama->setObjectName("drama");
        drama->setGeometry(QRect(40, 370, 181, 51));
        drama->setCursor(QCursor(Qt::PointingHandCursor));
        drama->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        scifi = new QRadioButton(genre);
        scifi->setObjectName("scifi");
        scifi->setGeometry(QRect(250, 370, 181, 51));
        scifi->setCursor(QCursor(Qt::PointingHandCursor));
        scifi->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        history = new QRadioButton(genre);
        history->setObjectName("history");
        history->setGeometry(QRect(40, 440, 181, 51));
        history->setCursor(QCursor(Qt::PointingHandCursor));
        history->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        suspense = new QRadioButton(genre);
        suspense->setObjectName("suspense");
        suspense->setGeometry(QRect(250, 440, 181, 51));
        suspense->setCursor(QCursor(Qt::PointingHandCursor));
        suspense->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
"padding:5px;\n"
"\n"
"}\n"
"QRadioButton:hover\n"
"{\n"
"background-color:rgb(255,163,26);\n"
"}"));
        submit = new QPushButton(genre);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(60, 530, 361, 51));
        submit->setFont(font1);
        submit->setCursor(QCursor(Qt::PointingHandCursor));
        submit->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        left = new QPushButton(genre);
        left->setObjectName("left");
        left->setGeometry(QRect(330, 20, 131, 51));
        left->setCursor(QCursor(Qt::PointingHandCursor));
        left->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:2px solid rgb(255,163,26);\n"
"border-radius:10px;\n"
""));
        label->raise();
        adminloginbtn->raise();
        genre->raise();
        signupbox->raise();
        loginbox->raise();

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
        UploadImage->setText(QString());
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
        genre->setTitle(QString());
        login_2->setText(QCoreApplication::translate("User", "Your Preferences", nullptr));
        horror->setText(QCoreApplication::translate("User", "horror", nullptr));
        action->setText(QCoreApplication::translate("User", "action", nullptr));
        thriller->setText(QCoreApplication::translate("User", "thriller", nullptr));
        romance->setText(QCoreApplication::translate("User", "romance", nullptr));
        comedy->setText(QCoreApplication::translate("User", "comedy", nullptr));
        romcom->setText(QCoreApplication::translate("User", "crime", nullptr));
        drama->setText(QCoreApplication::translate("User", "drama", nullptr));
        scifi->setText(QCoreApplication::translate("User", "sci-fi", nullptr));
        history->setText(QCoreApplication::translate("User", "history", nullptr));
        suspense->setText(QCoreApplication::translate("User", "suspense", nullptr));
        submit->setText(QCoreApplication::translate("User", "Submit", nullptr));
        left->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
