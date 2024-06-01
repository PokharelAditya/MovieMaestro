/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QGroupBox *AdminGroupBox;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(1200, 750);
        Admin->setMinimumSize(QSize(1200, 750));
        Admin->setMaximumSize(QSize(1200, 750));
        Admin->setCursor(QCursor(Qt::ArrowCursor));
        Admin->setStyleSheet(QString::fromUtf8("background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.928, fx:0.5, fy:0.506044, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(67, 5, 5, 255));"));
        AdminGroupBox = new QGroupBox(Admin);
        AdminGroupBox->setObjectName("AdminGroupBox");
        AdminGroupBox->setGeometry(QRect(300, 150, 600, 450));
        AdminGroupBox->setAutoFillBackground(false);
        AdminGroupBox->setStyleSheet(QString::fromUtf8("background-image:url(:/anarchy-anonymous-dark-hacker-wallpaper-preview.jpg);\n"
"background-position:center;\n"
"background-repeat:no-repeat;\n"
"border: 2px solid gray;\n"
"border-radius: 15px;"));
        AdminGroupBox->setAlignment(Qt::AlignCenter);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Admin", nullptr));
        AdminGroupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
