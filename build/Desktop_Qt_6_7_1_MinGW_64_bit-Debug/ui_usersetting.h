/********************************************************************************
** Form generated from reading UI file 'usersetting.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSETTING_H
#define UI_USERSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_UserSetting
{
public:
    QLabel *profilepic;
    QGroupBox *options;
    QLabel *label;
    QPushButton *changepwbtn;
    QPushButton *updateppbtn;
    QPushButton *updategenrebtn;
    QGroupBox *genrebox;
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
    QPushButton *changegenrebtn;
    QPushButton *updategenrebtn_2;
    QPushButton *backgenre;
    QGroupBox *changepwbox;
    QLabel *PasswordLabel;
    QLabel *label_2;
    QLineEdit *oldpassword;
    QLabel *label_4;
    QLineEdit *newpassword;
    QPushButton *updatebtn;
    QPushButton *eye;
    QPushButton *eyebtn;
    QPushButton *backpw;
    QGroupBox *updateppbox;
    QPushButton *profilepicbtn;
    QPushButton *updateprofilepicbtn;
    QPushButton *backpp;
    QPushButton *gobackbtn;

    void setupUi(QDialog *UserSetting)
    {
        if (UserSetting->objectName().isEmpty())
            UserSetting->setObjectName("UserSetting");
        UserSetting->resize(1315, 838);
        UserSetting->setStyleSheet(QString::fromUtf8("background:black;\n"
""));
        profilepic = new QLabel(UserSetting);
        profilepic->setObjectName("profilepic");
        profilepic->setGeometry(QRect(20, 10, 141, 151));
        options = new QGroupBox(UserSetting);
        options->setObjectName("options");
        options->setGeometry(QRect(400, 200, 451, 471));
        options->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"border:2px solid orange;\n"
"border-radius:10px\n"
"}"));
        label = new QLabel(options);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 421, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        changepwbtn = new QPushButton(options);
        changepwbtn->setObjectName("changepwbtn");
        changepwbtn->setGeometry(QRect(60, 130, 341, 61));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        changepwbtn->setFont(font1);
        changepwbtn->setCursor(QCursor(Qt::PointingHandCursor));
        changepwbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:2px solid orange;\n"
"border-radius:10px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"}"));
        updateppbtn = new QPushButton(options);
        updateppbtn->setObjectName("updateppbtn");
        updateppbtn->setGeometry(QRect(60, 340, 341, 61));
        updateppbtn->setFont(font1);
        updateppbtn->setCursor(QCursor(Qt::PointingHandCursor));
        updateppbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:2px solid orange;\n"
"border-radius:10px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"}"));
        updategenrebtn = new QPushButton(options);
        updategenrebtn->setObjectName("updategenrebtn");
        updategenrebtn->setGeometry(QRect(60, 230, 341, 61));
        updategenrebtn->setFont(font1);
        updategenrebtn->setCursor(QCursor(Qt::PointingHandCursor));
        updategenrebtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border:2px solid orange;\n"
"border-radius:10px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"}"));
        genrebox = new QGroupBox(UserSetting);
        genrebox->setObjectName("genrebox");
        genrebox->setGeometry(QRect(400, 60, 471, 661));
        genrebox->setStyleSheet(QString::fromUtf8("border:2px solid orange;\n"
"border-radius:10px;\n"
"background:black;"));
        login_2 = new QLabel(genrebox);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(10, 30, 261, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setWeight(QFont::Black);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        login_2->setFont(font2);
        login_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:white;"));
        horror = new QRadioButton(genrebox);
        horror->setObjectName("horror");
        horror->setGeometry(QRect(10, 130, 181, 51));
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
        action = new QRadioButton(genrebox);
        action->setObjectName("action");
        action->setGeometry(QRect(220, 130, 181, 51));
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
        thriller = new QRadioButton(genrebox);
        thriller->setObjectName("thriller");
        thriller->setGeometry(QRect(10, 210, 181, 51));
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
        romance = new QRadioButton(genrebox);
        romance->setObjectName("romance");
        romance->setGeometry(QRect(220, 210, 181, 51));
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
        comedy = new QRadioButton(genrebox);
        comedy->setObjectName("comedy");
        comedy->setGeometry(QRect(10, 290, 181, 51));
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
        romcom = new QRadioButton(genrebox);
        romcom->setObjectName("romcom");
        romcom->setGeometry(QRect(220, 290, 181, 51));
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
        drama = new QRadioButton(genrebox);
        drama->setObjectName("drama");
        drama->setGeometry(QRect(10, 370, 181, 51));
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
        scifi = new QRadioButton(genrebox);
        scifi->setObjectName("scifi");
        scifi->setGeometry(QRect(220, 370, 181, 51));
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
        history = new QRadioButton(genrebox);
        history->setObjectName("history");
        history->setGeometry(QRect(10, 440, 181, 51));
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
        suspense = new QRadioButton(genrebox);
        suspense->setObjectName("suspense");
        suspense->setGeometry(QRect(220, 440, 181, 51));
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
        changegenrebtn = new QPushButton(genrebox);
        changegenrebtn->setObjectName("changegenrebtn");
        changegenrebtn->setGeometry(QRect(20, 530, 181, 51));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        changegenrebtn->setFont(font3);
        changegenrebtn->setCursor(QCursor(Qt::PointingHandCursor));
        changegenrebtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        updategenrebtn_2 = new QPushButton(genrebox);
        updategenrebtn_2->setObjectName("updategenrebtn_2");
        updategenrebtn_2->setGeometry(QRect(220, 530, 181, 51));
        updategenrebtn_2->setFont(font3);
        updategenrebtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        updategenrebtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        backgenre = new QPushButton(genrebox);
        backgenre->setObjectName("backgenre");
        backgenre->setGeometry(QRect(360, 600, 101, 51));
        backgenre->setFont(font3);
        backgenre->setCursor(QCursor(Qt::PointingHandCursor));
        backgenre->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        changepwbox = new QGroupBox(UserSetting);
        changepwbox->setObjectName("changepwbox");
        changepwbox->setGeometry(QRect(400, 200, 471, 461));
        changepwbox->setStyleSheet(QString::fromUtf8("background:black;\n"
"border:2px solid orange;\n"
"\n"
"\n"
""));
        PasswordLabel = new QLabel(changepwbox);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setGeometry(QRect(10, 10, 451, 41));
        PasswordLabel->setFont(font2);
        PasswordLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"border:none;"));
        PasswordLabel->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(changepwbox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 130, 41, 41));
        label_2->setStyleSheet(QString::fromUtf8("border:none;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/passwordicon.png")));
        label_2->setScaledContents(true);
        oldpassword = new QLineEdit(changepwbox);
        oldpassword->setObjectName("oldpassword");
        oldpassword->setGeometry(QRect(70, 130, 361, 41));
        oldpassword->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;\n"
""));
        oldpassword->setEchoMode(QLineEdit::Password);
        oldpassword->setClearButtonEnabled(true);
        label_4 = new QLabel(changepwbox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 210, 41, 41));
        label_4->setStyleSheet(QString::fromUtf8("border:none;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/passwordicon.png")));
        label_4->setScaledContents(true);
        newpassword = new QLineEdit(changepwbox);
        newpassword->setObjectName("newpassword");
        newpassword->setGeometry(QRect(70, 210, 361, 41));
        newpassword->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid white;\n"
"background-color:transparent;\n"
"color:white;\n"
""));
        newpassword->setEchoMode(QLineEdit::Password);
        newpassword->setClearButtonEnabled(true);
        updatebtn = new QPushButton(changepwbox);
        updatebtn->setObjectName("updatebtn");
        updatebtn->setGeometry(QRect(50, 300, 361, 51));
        updatebtn->setFont(font3);
        updatebtn->setCursor(QCursor(Qt::PointingHandCursor));
        updatebtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        eye = new QPushButton(changepwbox);
        eye->setObjectName("eye");
        eye->setGeometry(QRect(390, 290, 51, 31));
        eye->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        eyebtn = new QPushButton(changepwbox);
        eyebtn->setObjectName("eyebtn");
        eyebtn->setGeometry(QRect(390, 178, 31, 21));
        eyebtn->setStyleSheet(QString::fromUtf8("border:none;"));
        backpw = new QPushButton(changepwbox);
        backpw->setObjectName("backpw");
        backpw->setGeometry(QRect(360, 390, 101, 51));
        backpw->setFont(font3);
        backpw->setCursor(QCursor(Qt::PointingHandCursor));
        backpw->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        updateppbox = new QGroupBox(UserSetting);
        updateppbox->setObjectName("updateppbox");
        updateppbox->setGeometry(QRect(400, 200, 531, 441));
        updateppbox->setStyleSheet(QString::fromUtf8("border:2px solid orange;\n"
"border-radius:10px;\n"
""));
        profilepicbtn = new QPushButton(updateppbox);
        profilepicbtn->setObjectName("profilepicbtn");
        profilepicbtn->setGeometry(QRect(140, 30, 291, 231));
        updateprofilepicbtn = new QPushButton(updateppbox);
        updateprofilepicbtn->setObjectName("updateprofilepicbtn");
        updateprofilepicbtn->setGeometry(QRect(190, 300, 181, 51));
        updateprofilepicbtn->setFont(font3);
        updateprofilepicbtn->setCursor(QCursor(Qt::PointingHandCursor));
        updateprofilepicbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        backpp = new QPushButton(updateppbox);
        backpp->setObjectName("backpp");
        backpp->setGeometry(QRect(410, 370, 101, 51));
        backpp->setFont(font3);
        backpp->setCursor(QCursor(Qt::PointingHandCursor));
        backpp->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        gobackbtn = new QPushButton(UserSetting);
        gobackbtn->setObjectName("gobackbtn");
        gobackbtn->setGeometry(QRect(1080, 10, 211, 51));
        gobackbtn->setFont(font3);
        gobackbtn->setCursor(QCursor(Qt::PointingHandCursor));
        gobackbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        retranslateUi(UserSetting);

        QMetaObject::connectSlotsByName(UserSetting);
    } // setupUi

    void retranslateUi(QDialog *UserSetting)
    {
        UserSetting->setWindowTitle(QCoreApplication::translate("UserSetting", "Dialog", nullptr));
        profilepic->setText(QCoreApplication::translate("UserSetting", "Profile pic", nullptr));
        options->setTitle(QString());
        label->setText(QCoreApplication::translate("UserSetting", "Options", nullptr));
        changepwbtn->setText(QCoreApplication::translate("UserSetting", "Change Password", nullptr));
        updateppbtn->setText(QCoreApplication::translate("UserSetting", "Change Profile Picture", nullptr));
        updategenrebtn->setText(QCoreApplication::translate("UserSetting", "Update Genre", nullptr));
        genrebox->setTitle(QString());
        login_2->setText(QCoreApplication::translate("UserSetting", "Change Preferences", nullptr));
        horror->setText(QCoreApplication::translate("UserSetting", "horror", nullptr));
        action->setText(QCoreApplication::translate("UserSetting", "action", nullptr));
        thriller->setText(QCoreApplication::translate("UserSetting", "thriller", nullptr));
        romance->setText(QCoreApplication::translate("UserSetting", "romance", nullptr));
        comedy->setText(QCoreApplication::translate("UserSetting", "comedy", nullptr));
        romcom->setText(QCoreApplication::translate("UserSetting", "rom-com", nullptr));
        drama->setText(QCoreApplication::translate("UserSetting", "drama", nullptr));
        scifi->setText(QCoreApplication::translate("UserSetting", "sci-fi", nullptr));
        history->setText(QCoreApplication::translate("UserSetting", "history", nullptr));
        suspense->setText(QCoreApplication::translate("UserSetting", "suspense", nullptr));
        changegenrebtn->setText(QCoreApplication::translate("UserSetting", "Change", nullptr));
        updategenrebtn_2->setText(QCoreApplication::translate("UserSetting", "Add", nullptr));
        backgenre->setText(QCoreApplication::translate("UserSetting", "Back", nullptr));
        changepwbox->setTitle(QString());
        PasswordLabel->setText(QCoreApplication::translate("UserSetting", "Change Password", nullptr));
        label_2->setText(QString());
        oldpassword->setPlaceholderText(QCoreApplication::translate("UserSetting", "enter your old password", nullptr));
        label_4->setText(QString());
        newpassword->setPlaceholderText(QCoreApplication::translate("UserSetting", "enter your new password", nullptr));
        updatebtn->setText(QCoreApplication::translate("UserSetting", "Update", nullptr));
        eye->setText(QString());
        eyebtn->setText(QString());
        backpw->setText(QCoreApplication::translate("UserSetting", "Back", nullptr));
        updateppbox->setTitle(QString());
        profilepicbtn->setText(QString());
        updateprofilepicbtn->setText(QCoreApplication::translate("UserSetting", "Update", nullptr));
        backpp->setText(QCoreApplication::translate("UserSetting", "Back", nullptr));
        gobackbtn->setText(QCoreApplication::translate("UserSetting", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserSetting: public Ui_UserSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSETTING_H
