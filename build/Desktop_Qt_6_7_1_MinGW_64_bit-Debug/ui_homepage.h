/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QLabel *Username;
    QPushButton *ProfilePicture;
    QPushButton *userpagebtn;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(1200, 750);
        HomePage->setStyleSheet(QString::fromUtf8("background:black;\n"
""));
        Username = new QLabel(HomePage);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(70, 340, 731, 111));
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        Username->setFont(font);
        Username->setAlignment(Qt::AlignCenter);
        ProfilePicture = new QPushButton(HomePage);
        ProfilePicture->setObjectName("ProfilePicture");
        ProfilePicture->setGeometry(QRect(340, 110, 200, 200));
        ProfilePicture->setIconSize(QSize(200, 200));
        userpagebtn = new QPushButton(HomePage);
        userpagebtn->setObjectName("userpagebtn");
        userpagebtn->setGeometry(QRect(50, 30, 121, 81));
        QFont font1;
        font1.setPointSize(15);
        userpagebtn->setFont(font1);
        userpagebtn->setStyleSheet(QString::fromUtf8("background:green;\n"
"text:white;\n"
""));
        userpagebtn->setIconSize(QSize(200, 200));

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        Username->setText(QCoreApplication::translate("HomePage", "sadfasdf", nullptr));
        ProfilePicture->setText(QString());
        userpagebtn->setText(QCoreApplication::translate("HomePage", "go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
