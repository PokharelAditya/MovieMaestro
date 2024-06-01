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
    QGroupBox *groupBox;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(1200, 750);
        groupBox = new QGroupBox(User);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(190, 10, 701, 375));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-color:green;}"));

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("User", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
