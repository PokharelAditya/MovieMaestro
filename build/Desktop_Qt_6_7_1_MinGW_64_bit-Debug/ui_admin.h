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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QGroupBox *AdminGroupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(1200, 750);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Admin->sizePolicy().hasHeightForWidth());
        Admin->setSizePolicy(sizePolicy);
        Admin->setMinimumSize(QSize(1200, 750));
        Admin->setMaximumSize(QSize(1200, 750));
        Admin->setCursor(QCursor(Qt::ArrowCursor));
        Admin->setStyleSheet(QString::fromUtf8("background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.928, fx:0.5, fy:0.506044, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(67, 5, 5, 255));"));
        AdminGroupBox = new QGroupBox(Admin);
        AdminGroupBox->setObjectName("AdminGroupBox");
        AdminGroupBox->setGeometry(QRect(320, 150, 560, 450));
        sizePolicy.setHeightForWidth(AdminGroupBox->sizePolicy().hasHeightForWidth());
        AdminGroupBox->setSizePolicy(sizePolicy);
        AdminGroupBox->setMinimumSize(QSize(560, 450));
        AdminGroupBox->setMaximumSize(QSize(560, 450));
        AdminGroupBox->setLayoutDirection(Qt::LeftToRight);
        AdminGroupBox->setAutoFillBackground(false);
        AdminGroupBox->setStyleSheet(QString::fromUtf8("background-image:url(:/anarchy-anonymous-dark-hacker-wallpaper-preview.jpg);\n"
"background-position:left;\n"
"\n"
"border: 2px solid gray;\n"
"border-radius: 15px;"));
        AdminGroupBox->setAlignment(Qt::AlignCenter);
        label = new QLabel(AdminGroupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 30, 171, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Stencil")});
        font.setPointSize(30);
        font.setBold(false);
        label->setFont(font);
        label->setFocusPolicy(Qt::NoFocus);
        label->setContextMenuPolicy(Qt::DefaultContextMenu);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.655, fx:0.5, fy:0.506, stop:0 rgba(135, 0, 0, 255), stop:0.746479 rgba(0, 0, 0, 255));\n"
"border:none;"));
        label->setLineWidth(0);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label_2 = new QLabel(AdminGroupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 130, 271, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Stencil")});
        font1.setPointSize(14);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setFocusPolicy(Qt::NoFocus);
        label_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.557, fx:0.5, fy:0.506, stop:0 rgba(72, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"border:none;"));
        label_2->setLineWidth(0);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label_3 = new QLabel(AdminGroupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 250, 271, 51));
        label_3->setFont(font1);
        label_3->setFocusPolicy(Qt::NoFocus);
        label_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.557, fx:0.5, fy:0.506, stop:0 rgba(72, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"border:none;"));
        label_3->setLineWidth(0);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);
        lineEdit = new QLineEdit(AdminGroupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 190, 251, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Imprint MT Shadow")});
        font2.setPointSize(14);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(AdminGroupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(40, 310, 251, 35));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(AdminGroupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 380, 131, 29));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Stencil")});
        font3.setPointSize(12);
        font3.setBold(false);
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid gray;\n"
"border-radius:5px;\n"
"background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.874, fx:0.5, fy:0.506, stop:0 rgba(79, 0, 0, 255), stop:0.784038 rgba(0, 0, 0, 255));"));

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Admin", nullptr));
        AdminGroupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Admin", "ADMIN", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "USERNAME", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "PASSWORD", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin", "L O G    I N", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
