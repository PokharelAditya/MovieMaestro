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
#include <QtWidgets/QGroupBox>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QGroupBox *Topbox;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(1200, 750);
        User->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"\n"
"background-color:white;\n"
"}"));
        Topbox = new QGroupBox(User);
        Topbox->setObjectName("Topbox");
        Topbox->setGeometry(QRect(0, 0, 1201, 491));
        Topbox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"  \n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 black, stop:1 red);\n"
"border:none;\n"
"filter:blue(8px);\n"
"\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 0 3px;\n"
"}\n"
"\n"
""));
        groupBox = new QGroupBox(Topbox);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(110, 60, 280, 330));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-image:url(:/andhadhun.jpg);\n"
"background-repeat:no-repeat;\n"
" background-size: cover;\n"
"background-position : top;\n"
" border:none;\n"
"}"));
        groupBox_2 = new QGroupBox(Topbox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(850, 70, 280, 330));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-image:url(:/photos for project/americanpsycho.jpg);\n"
"background-size:contain;\n"
"background-repeat:no-repeat;\n"
"background-position:top right;\n"
"border:none;\n"
"}"));
        groupBox_3 = new QGroupBox(Topbox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(340, 30, 551, 401));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{background-image : url(:/photos for project/avengers-infinity-war-4yngzhbhqmtam73j.jpg) 0 0 0 0 stretch stretch;\n"
"background-position : center;\n"
"height:100%;\n"
"width:100%;\n"
"\n"
"border:none;\n"
" }"));

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Dialog", nullptr));
        Topbox->setTitle(QString());
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
