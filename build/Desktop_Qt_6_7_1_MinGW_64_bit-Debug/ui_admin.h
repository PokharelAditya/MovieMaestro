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
#include <QtGui/QIcon>
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
    QPushButton *LogInButton;
    QLineEdit *APassword;
    QLabel *textAdmin;
    QLabel *UNicon;
    QLabel *PWicon;
    QLineEdit *AUsername;
    QPushButton *ShowHidePW;
    QPushButton *forgotPassword;
    QLabel *Background;
    QLabel *Logo;
    QPushButton *BackToUser;

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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MM Transparent BG.png"), QSize(), QIcon::Normal, QIcon::Off);
        Admin->setWindowIcon(icon);
        Admin->setStyleSheet(QString::fromUtf8("background:none"));
        AdminGroupBox = new QGroupBox(Admin);
        AdminGroupBox->setObjectName("AdminGroupBox");
        AdminGroupBox->setGeometry(QRect(390, 150, 420, 450));
        sizePolicy.setHeightForWidth(AdminGroupBox->sizePolicy().hasHeightForWidth());
        AdminGroupBox->setSizePolicy(sizePolicy);
        AdminGroupBox->setLayoutDirection(Qt::LeftToRight);
        AdminGroupBox->setAutoFillBackground(false);
        AdminGroupBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        AdminGroupBox->setAlignment(Qt::AlignCenter);
        LogInButton = new QPushButton(AdminGroupBox);
        LogInButton->setObjectName("LogInButton");
        LogInButton->setGeometry(QRect(110, 360, 200, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LogInButton->sizePolicy().hasHeightForWidth());
        LogInButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        LogInButton->setFont(font);
        LogInButton->setCursor(QCursor(Qt::PointingHandCursor));
        LogInButton->setMouseTracking(true);
        LogInButton->setLayoutDirection(Qt::LeftToRight);
        LogInButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgba(230, 149, 40, 200);\n"
"border-radius:none;\n"
"border-radius:20px;\n"
""));
        LogInButton->setAutoRepeatInterval(-1);
        APassword = new QLineEdit(AdminGroupBox);
        APassword->setObjectName("APassword");
        APassword->setGeometry(QRect(90, 240, 280, 35));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(APassword->sizePolicy().hasHeightForWidth());
        APassword->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(12);
        APassword->setFont(font1);
        APassword->setCursor(QCursor(Qt::IBeamCursor));
        APassword->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;"));
        APassword->setEchoMode(QLineEdit::Password);
        APassword->setAlignment(Qt::AlignCenter);
        APassword->setCursorMoveStyle(Qt::LogicalMoveStyle);
        APassword->setClearButtonEnabled(true);
        textAdmin = new QLabel(AdminGroupBox);
        textAdmin->setObjectName("textAdmin");
        textAdmin->setGeometry(QRect(90, 40, 240, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(29);
        font2.setBold(true);
        font2.setItalic(false);
        textAdmin->setFont(font2);
        textAdmin->setFocusPolicy(Qt::NoFocus);
        textAdmin->setContextMenuPolicy(Qt::DefaultContextMenu);
        textAdmin->setAutoFillBackground(false);
        textAdmin->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        textAdmin->setLineWidth(0);
        textAdmin->setScaledContents(false);
        textAdmin->setAlignment(Qt::AlignCenter);
        textAdmin->setWordWrap(false);
        UNicon = new QLabel(AdminGroupBox);
        UNicon->setObjectName("UNicon");
        UNicon->setGeometry(QRect(40, 160, 31, 31));
        UNicon->setStyleSheet(QString::fromUtf8("background: none;"));
        UNicon->setPixmap(QPixmap(QString::fromUtf8(":/usericon.png")));
        UNicon->setScaledContents(true);
        PWicon = new QLabel(AdminGroupBox);
        PWicon->setObjectName("PWicon");
        PWicon->setGeometry(QRect(40, 240, 31, 31));
        PWicon->setStyleSheet(QString::fromUtf8("background:none;"));
        PWicon->setPixmap(QPixmap(QString::fromUtf8(":/passwordicon.png")));
        PWicon->setScaledContents(true);
        AUsername = new QLineEdit(AdminGroupBox);
        AUsername->setObjectName("AUsername");
        AUsername->setGeometry(QRect(90, 160, 280, 35));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(12);
        font3.setKerning(true);
        AUsername->setFont(font3);
        AUsername->setFocusPolicy(Qt::StrongFocus);
        AUsername->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;\n"
"\n"
""));
        AUsername->setFrame(true);
        AUsername->setEchoMode(QLineEdit::Normal);
        AUsername->setCursorPosition(0);
        AUsername->setAlignment(Qt::AlignCenter);
        AUsername->setClearButtonEnabled(true);
        ShowHidePW = new QPushButton(AdminGroupBox);
        ShowHidePW->setObjectName("ShowHidePW");
        ShowHidePW->setGeometry(QRect(330, 280, 41, 21));
        ShowHidePW->setCursor(QCursor(Qt::PointingHandCursor));
        ShowHidePW->setMouseTracking(true);
        ShowHidePW->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/OpenEye.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowHidePW->setIcon(icon1);
        ShowHidePW->setIconSize(QSize(25, 30));
        forgotPassword = new QPushButton(AdminGroupBox);
        forgotPassword->setObjectName("forgotPassword");
        forgotPassword->setGeometry(QRect(80, 280, 121, 21));
        QFont font4;
        font4.setPointSize(9);
        font4.setUnderline(false);
        forgotPassword->setFont(font4);
        forgotPassword->setCursor(QCursor(Qt::PointingHandCursor));
        forgotPassword->setMouseTracking(true);
        forgotPassword->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgba(230, 149, 40, 200);"));
        Background = new QLabel(Admin);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 1200, 750));
        Background->setMinimumSize(QSize(1200, 750));
        Background->setMaximumSize(QSize(1200, 750));
        Background->setStyleSheet(QString::fromUtf8(""));
        Background->setPixmap(QPixmap(QString::fromUtf8(":/background1.png")));
        Background->setScaledContents(true);
        Logo = new QLabel(Admin);
        Logo->setObjectName("Logo");
        Logo->setGeometry(QRect(1040, 30, 121, 111));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/MM Transparent BG.png")));
        Logo->setScaledContents(true);
        BackToUser = new QPushButton(Admin);
        BackToUser->setObjectName("BackToUser");
        BackToUser->setGeometry(QRect(40, 40, 51, 51));
        BackToUser->setCursor(QCursor(Qt::PointingHandCursor));
        BackToUser->setMouseTracking(true);
        BackToUser->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/back icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        BackToUser->setIcon(icon2);
        BackToUser->setIconSize(QSize(50, 50));
        Background->raise();
        AdminGroupBox->raise();
        Logo->raise();
        BackToUser->raise();

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Admin", nullptr));
        AdminGroupBox->setTitle(QString());
        LogInButton->setText(QCoreApplication::translate("Admin", "Sign In", nullptr));
        APassword->setText(QString());
        textAdmin->setText(QCoreApplication::translate("Admin", "Admin", nullptr));
        UNicon->setText(QString());
        PWicon->setText(QString());
        AUsername->setText(QString());
        ShowHidePW->setText(QString());
        forgotPassword->setText(QCoreApplication::translate("Admin", "Forgot password?", nullptr));
        Background->setText(QString());
        Logo->setText(QString());
        BackToUser->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
