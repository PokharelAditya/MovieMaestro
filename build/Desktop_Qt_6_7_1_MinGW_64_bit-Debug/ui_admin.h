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
    QGroupBox *TwoFABox;
    QPushButton *ConfirmButton;
    QLabel *textTwoFA;
    QLineEdit *TwoFA1;
    QLineEdit *TwoFA2;
    QLineEdit *TwoFA4;
    QLineEdit *TwoFA3;
    QPushButton *forgotTwoFA;
    QPushButton *BackToAdmin;
    QGroupBox *SecurityBox;
    QPushButton *nextButton;
    QLineEdit *SQ1ans;
    QLabel *textSQ;
    QLabel *textSQ1;
    QLineEdit *SQ2ans;
    QLabel *textSQ2;
    QPushButton *BackTo2FA;
    QGroupBox *forgotPwBox;
    QPushButton *cancelPW;
    QLineEdit *newPassword;
    QLabel *resetPWtext;
    QPushButton *ShowHideNPW;
    QLineEdit *cnewPassword;
    QPushButton *resetPW;
    QGroupBox *forgot2faBox;
    QPushButton *cancel2FA;
    QLineEdit *new2FA;
    QLabel *reset2FAtext;
    QPushButton *ShowHide2FA;
    QLineEdit *cnew2FA;
    QPushButton *reset2FA;
    QPushButton *UN_Focus_Button;

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
        LogInButton->setGeometry(QRect(110, 360, 200, 51));
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
        LogInButton->setStyleSheet(QString::fromUtf8("#LogInButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#LogInButton:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
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
        textAdmin->raise();
        UNicon->raise();
        PWicon->raise();
        ShowHidePW->raise();
        forgotPassword->raise();
        AUsername->raise();
        APassword->raise();
        LogInButton->raise();
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
        TwoFABox = new QGroupBox(Admin);
        TwoFABox->setObjectName("TwoFABox");
        TwoFABox->setGeometry(QRect(400, 215, 400, 320));
        sizePolicy.setHeightForWidth(TwoFABox->sizePolicy().hasHeightForWidth());
        TwoFABox->setSizePolicy(sizePolicy);
        TwoFABox->setLayoutDirection(Qt::LeftToRight);
        TwoFABox->setAutoFillBackground(false);
        TwoFABox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        TwoFABox->setAlignment(Qt::AlignCenter);
        ConfirmButton = new QPushButton(TwoFABox);
        ConfirmButton->setObjectName("ConfirmButton");
        ConfirmButton->setGeometry(QRect(100, 220, 200, 50));
        sizePolicy1.setHeightForWidth(ConfirmButton->sizePolicy().hasHeightForWidth());
        ConfirmButton->setSizePolicy(sizePolicy1);
        ConfirmButton->setFont(font);
        ConfirmButton->setCursor(QCursor(Qt::PointingHandCursor));
        ConfirmButton->setMouseTracking(true);
        ConfirmButton->setLayoutDirection(Qt::LeftToRight);
        ConfirmButton->setStyleSheet(QString::fromUtf8("#ConfirmButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#ConfirmButton:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        ConfirmButton->setAutoRepeatInterval(-1);
        textTwoFA = new QLabel(TwoFABox);
        textTwoFA->setObjectName("textTwoFA");
        textTwoFA->setGeometry(QRect(15, 20, 370, 81));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(17);
        font5.setBold(true);
        font5.setItalic(false);
        textTwoFA->setFont(font5);
        textTwoFA->setFocusPolicy(Qt::NoFocus);
        textTwoFA->setContextMenuPolicy(Qt::DefaultContextMenu);
        textTwoFA->setAutoFillBackground(false);
        textTwoFA->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        textTwoFA->setLineWidth(0);
        textTwoFA->setScaledContents(false);
        textTwoFA->setAlignment(Qt::AlignCenter);
        textTwoFA->setWordWrap(false);
        TwoFA1 = new QLineEdit(TwoFABox);
        TwoFA1->setObjectName("TwoFA1");
        TwoFA1->setGeometry(QRect(110, 120, 31, 35));
        TwoFA1->setFont(font3);
        TwoFA1->setFocusPolicy(Qt::StrongFocus);
        TwoFA1->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;\n"
"\n"
""));
        TwoFA1->setMaxLength(1);
        TwoFA1->setFrame(true);
        TwoFA1->setEchoMode(QLineEdit::Password);
        TwoFA1->setCursorPosition(0);
        TwoFA1->setAlignment(Qt::AlignCenter);
        TwoFA2 = new QLineEdit(TwoFABox);
        TwoFA2->setObjectName("TwoFA2");
        TwoFA2->setGeometry(QRect(160, 120, 31, 35));
        TwoFA2->setFont(font3);
        TwoFA2->setFocusPolicy(Qt::StrongFocus);
        TwoFA2->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;\n"
"\n"
""));
        TwoFA2->setMaxLength(1);
        TwoFA2->setFrame(true);
        TwoFA2->setEchoMode(QLineEdit::Password);
        TwoFA2->setCursorPosition(0);
        TwoFA2->setAlignment(Qt::AlignCenter);
        TwoFA4 = new QLineEdit(TwoFABox);
        TwoFA4->setObjectName("TwoFA4");
        TwoFA4->setGeometry(QRect(260, 120, 31, 35));
        TwoFA4->setFont(font3);
        TwoFA4->setFocusPolicy(Qt::StrongFocus);
        TwoFA4->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;\n"
"\n"
""));
        TwoFA4->setMaxLength(1);
        TwoFA4->setFrame(true);
        TwoFA4->setEchoMode(QLineEdit::Password);
        TwoFA4->setCursorPosition(0);
        TwoFA4->setAlignment(Qt::AlignCenter);
        TwoFA4->setClearButtonEnabled(false);
        TwoFA3 = new QLineEdit(TwoFABox);
        TwoFA3->setObjectName("TwoFA3");
        TwoFA3->setGeometry(QRect(210, 120, 31, 35));
        TwoFA3->setFont(font3);
        TwoFA3->setFocusPolicy(Qt::StrongFocus);
        TwoFA3->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;\n"
"\n"
""));
        TwoFA3->setMaxLength(1);
        TwoFA3->setFrame(true);
        TwoFA3->setEchoMode(QLineEdit::Password);
        TwoFA3->setCursorPosition(0);
        TwoFA3->setAlignment(Qt::AlignCenter);
        TwoFA3->setClearButtonEnabled(false);
        forgotTwoFA = new QPushButton(TwoFABox);
        forgotTwoFA->setObjectName("forgotTwoFA");
        forgotTwoFA->setGeometry(QRect(260, 170, 121, 21));
        forgotTwoFA->setFont(font4);
        forgotTwoFA->setCursor(QCursor(Qt::PointingHandCursor));
        forgotTwoFA->setMouseTracking(true);
        forgotTwoFA->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgba(230, 149, 40, 200);"));
        BackToAdmin = new QPushButton(Admin);
        BackToAdmin->setObjectName("BackToAdmin");
        BackToAdmin->setGeometry(QRect(40, 40, 51, 51));
        BackToAdmin->setCursor(QCursor(Qt::PointingHandCursor));
        BackToAdmin->setMouseTracking(true);
        BackToAdmin->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        BackToAdmin->setIcon(icon2);
        BackToAdmin->setIconSize(QSize(50, 50));
        SecurityBox = new QGroupBox(Admin);
        SecurityBox->setObjectName("SecurityBox");
        SecurityBox->setEnabled(true);
        SecurityBox->setGeometry(QRect(130, 150, 940, 450));
        sizePolicy.setHeightForWidth(SecurityBox->sizePolicy().hasHeightForWidth());
        SecurityBox->setSizePolicy(sizePolicy);
        SecurityBox->setLayoutDirection(Qt::LeftToRight);
        SecurityBox->setAutoFillBackground(false);
        SecurityBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        SecurityBox->setAlignment(Qt::AlignCenter);
        nextButton = new QPushButton(SecurityBox);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(740, 360, 161, 51));
        sizePolicy1.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy1);
        nextButton->setFont(font);
        nextButton->setCursor(QCursor(Qt::PointingHandCursor));
        nextButton->setMouseTracking(true);
        nextButton->setLayoutDirection(Qt::LeftToRight);
        nextButton->setStyleSheet(QString::fromUtf8("#nextButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#nextButton:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        nextButton->setAutoRepeatInterval(-1);
        SQ1ans = new QLineEdit(SecurityBox);
        SQ1ans->setObjectName("SQ1ans");
        SQ1ans->setGeometry(QRect(50, 170, 280, 35));
        sizePolicy2.setHeightForWidth(SQ1ans->sizePolicy().hasHeightForWidth());
        SQ1ans->setSizePolicy(sizePolicy2);
        SQ1ans->setFont(font1);
        SQ1ans->setCursor(QCursor(Qt::IBeamCursor));
        SQ1ans->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;\n"
""));
        SQ1ans->setEchoMode(QLineEdit::Normal);
        SQ1ans->setAlignment(Qt::AlignCenter);
        SQ1ans->setCursorMoveStyle(Qt::LogicalMoveStyle);
        SQ1ans->setClearButtonEnabled(true);
        textSQ = new QLabel(SecurityBox);
        textSQ->setObjectName("textSQ");
        textSQ->setGeometry(QRect(270, 20, 400, 81));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI")});
        font6.setPointSize(20);
        font6.setBold(true);
        font6.setItalic(false);
        textSQ->setFont(font6);
        textSQ->setFocusPolicy(Qt::NoFocus);
        textSQ->setContextMenuPolicy(Qt::DefaultContextMenu);
        textSQ->setAutoFillBackground(false);
        textSQ->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        textSQ->setLineWidth(0);
        textSQ->setScaledContents(false);
        textSQ->setAlignment(Qt::AlignCenter);
        textSQ->setWordWrap(false);
        textSQ1 = new QLabel(SecurityBox);
        textSQ1->setObjectName("textSQ1");
        textSQ1->setGeometry(QRect(35, 90, 870, 80));
        QFont font7;
        font7.setPointSize(12);
        font7.setWeight(QFont::Medium);
        font7.setItalic(true);
        textSQ1->setFont(font7);
        textSQ1->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        SQ2ans = new QLineEdit(SecurityBox);
        SQ2ans->setObjectName("SQ2ans");
        SQ2ans->setGeometry(QRect(50, 320, 280, 35));
        sizePolicy2.setHeightForWidth(SQ2ans->sizePolicy().hasHeightForWidth());
        SQ2ans->setSizePolicy(sizePolicy2);
        SQ2ans->setFont(font1);
        SQ2ans->setCursor(QCursor(Qt::IBeamCursor));
        SQ2ans->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;"));
        SQ2ans->setEchoMode(QLineEdit::Normal);
        SQ2ans->setAlignment(Qt::AlignCenter);
        SQ2ans->setCursorMoveStyle(Qt::LogicalMoveStyle);
        SQ2ans->setClearButtonEnabled(true);
        textSQ2 = new QLabel(SecurityBox);
        textSQ2->setObjectName("textSQ2");
        textSQ2->setGeometry(QRect(35, 240, 870, 80));
        textSQ2->setFont(font7);
        textSQ2->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        BackTo2FA = new QPushButton(Admin);
        BackTo2FA->setObjectName("BackTo2FA");
        BackTo2FA->setGeometry(QRect(40, 40, 51, 51));
        BackTo2FA->setCursor(QCursor(Qt::PointingHandCursor));
        BackTo2FA->setMouseTracking(true);
        BackTo2FA->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        BackTo2FA->setIcon(icon2);
        BackTo2FA->setIconSize(QSize(50, 50));
        forgotPwBox = new QGroupBox(Admin);
        forgotPwBox->setObjectName("forgotPwBox");
        forgotPwBox->setGeometry(QRect(390, 150, 420, 450));
        sizePolicy.setHeightForWidth(forgotPwBox->sizePolicy().hasHeightForWidth());
        forgotPwBox->setSizePolicy(sizePolicy);
        forgotPwBox->setLayoutDirection(Qt::LeftToRight);
        forgotPwBox->setAutoFillBackground(false);
        forgotPwBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        forgotPwBox->setAlignment(Qt::AlignCenter);
        cancelPW = new QPushButton(forgotPwBox);
        cancelPW->setObjectName("cancelPW");
        cancelPW->setGeometry(QRect(50, 360, 140, 45));
        sizePolicy1.setHeightForWidth(cancelPW->sizePolicy().hasHeightForWidth());
        cancelPW->setSizePolicy(sizePolicy1);
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Segoe UI")});
        font8.setPointSize(13);
        font8.setBold(true);
        font8.setItalic(false);
        cancelPW->setFont(font8);
        cancelPW->setCursor(QCursor(Qt::PointingHandCursor));
        cancelPW->setMouseTracking(true);
        cancelPW->setLayoutDirection(Qt::LeftToRight);
        cancelPW->setStyleSheet(QString::fromUtf8("#cancelPW\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#cancelPW:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        cancelPW->setAutoRepeatInterval(-1);
        newPassword = new QLineEdit(forgotPwBox);
        newPassword->setObjectName("newPassword");
        newPassword->setGeometry(QRect(65, 160, 290, 35));
        sizePolicy2.setHeightForWidth(newPassword->sizePolicy().hasHeightForWidth());
        newPassword->setSizePolicy(sizePolicy2);
        newPassword->setFont(font1);
        newPassword->setCursor(QCursor(Qt::IBeamCursor));
        newPassword->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;"));
        newPassword->setEchoMode(QLineEdit::Password);
        newPassword->setAlignment(Qt::AlignCenter);
        newPassword->setCursorMoveStyle(Qt::LogicalMoveStyle);
        newPassword->setClearButtonEnabled(true);
        resetPWtext = new QLabel(forgotPwBox);
        resetPWtext->setObjectName("resetPWtext");
        resetPWtext->setGeometry(QRect(20, 40, 380, 80));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Segoe UI")});
        font9.setPointSize(23);
        font9.setBold(true);
        font9.setItalic(false);
        resetPWtext->setFont(font9);
        resetPWtext->setFocusPolicy(Qt::NoFocus);
        resetPWtext->setContextMenuPolicy(Qt::DefaultContextMenu);
        resetPWtext->setAutoFillBackground(false);
        resetPWtext->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        resetPWtext->setLineWidth(0);
        resetPWtext->setScaledContents(false);
        resetPWtext->setAlignment(Qt::AlignCenter);
        resetPWtext->setWordWrap(false);
        ShowHideNPW = new QPushButton(forgotPwBox);
        ShowHideNPW->setObjectName("ShowHideNPW");
        ShowHideNPW->setGeometry(QRect(310, 290, 41, 21));
        ShowHideNPW->setCursor(QCursor(Qt::PointingHandCursor));
        ShowHideNPW->setMouseTracking(true);
        ShowHideNPW->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        ShowHideNPW->setIcon(icon1);
        ShowHideNPW->setIconSize(QSize(25, 30));
        cnewPassword = new QLineEdit(forgotPwBox);
        cnewPassword->setObjectName("cnewPassword");
        cnewPassword->setGeometry(QRect(65, 240, 290, 35));
        sizePolicy2.setHeightForWidth(cnewPassword->sizePolicy().hasHeightForWidth());
        cnewPassword->setSizePolicy(sizePolicy2);
        cnewPassword->setFont(font1);
        cnewPassword->setCursor(QCursor(Qt::IBeamCursor));
        cnewPassword->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;"));
        cnewPassword->setEchoMode(QLineEdit::Password);
        cnewPassword->setAlignment(Qt::AlignCenter);
        cnewPassword->setCursorMoveStyle(Qt::LogicalMoveStyle);
        cnewPassword->setClearButtonEnabled(true);
        resetPW = new QPushButton(forgotPwBox);
        resetPW->setObjectName("resetPW");
        resetPW->setGeometry(QRect(230, 360, 140, 45));
        sizePolicy1.setHeightForWidth(resetPW->sizePolicy().hasHeightForWidth());
        resetPW->setSizePolicy(sizePolicy1);
        resetPW->setFont(font8);
        resetPW->setCursor(QCursor(Qt::PointingHandCursor));
        resetPW->setMouseTracking(true);
        resetPW->setLayoutDirection(Qt::LeftToRight);
        resetPW->setStyleSheet(QString::fromUtf8("#resetPW\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#resetPW:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        resetPW->setAutoRepeatInterval(-1);
        forgot2faBox = new QGroupBox(Admin);
        forgot2faBox->setObjectName("forgot2faBox");
        forgot2faBox->setGeometry(QRect(390, 150, 420, 450));
        sizePolicy.setHeightForWidth(forgot2faBox->sizePolicy().hasHeightForWidth());
        forgot2faBox->setSizePolicy(sizePolicy);
        forgot2faBox->setLayoutDirection(Qt::LeftToRight);
        forgot2faBox->setAutoFillBackground(false);
        forgot2faBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        forgot2faBox->setAlignment(Qt::AlignCenter);
        cancel2FA = new QPushButton(forgot2faBox);
        cancel2FA->setObjectName("cancel2FA");
        cancel2FA->setGeometry(QRect(50, 360, 140, 45));
        sizePolicy1.setHeightForWidth(cancel2FA->sizePolicy().hasHeightForWidth());
        cancel2FA->setSizePolicy(sizePolicy1);
        cancel2FA->setFont(font8);
        cancel2FA->setCursor(QCursor(Qt::PointingHandCursor));
        cancel2FA->setMouseTracking(true);
        cancel2FA->setLayoutDirection(Qt::LeftToRight);
        cancel2FA->setStyleSheet(QString::fromUtf8("#cancel2FA\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#cancel2FA:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        cancel2FA->setAutoRepeatInterval(-1);
        new2FA = new QLineEdit(forgot2faBox);
        new2FA->setObjectName("new2FA");
        new2FA->setGeometry(QRect(65, 160, 290, 35));
        sizePolicy2.setHeightForWidth(new2FA->sizePolicy().hasHeightForWidth());
        new2FA->setSizePolicy(sizePolicy2);
        new2FA->setFont(font1);
        new2FA->setCursor(QCursor(Qt::IBeamCursor));
        new2FA->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;"));
        new2FA->setMaxLength(4);
        new2FA->setEchoMode(QLineEdit::Password);
        new2FA->setAlignment(Qt::AlignCenter);
        new2FA->setCursorMoveStyle(Qt::LogicalMoveStyle);
        new2FA->setClearButtonEnabled(true);
        reset2FAtext = new QLabel(forgot2faBox);
        reset2FAtext->setObjectName("reset2FAtext");
        reset2FAtext->setGeometry(QRect(20, 40, 380, 80));
        reset2FAtext->setFont(font9);
        reset2FAtext->setFocusPolicy(Qt::NoFocus);
        reset2FAtext->setContextMenuPolicy(Qt::DefaultContextMenu);
        reset2FAtext->setAutoFillBackground(false);
        reset2FAtext->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        reset2FAtext->setLineWidth(0);
        reset2FAtext->setScaledContents(false);
        reset2FAtext->setAlignment(Qt::AlignCenter);
        reset2FAtext->setWordWrap(false);
        ShowHide2FA = new QPushButton(forgot2faBox);
        ShowHide2FA->setObjectName("ShowHide2FA");
        ShowHide2FA->setGeometry(QRect(310, 290, 41, 21));
        ShowHide2FA->setCursor(QCursor(Qt::PointingHandCursor));
        ShowHide2FA->setMouseTracking(true);
        ShowHide2FA->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        ShowHide2FA->setIcon(icon1);
        ShowHide2FA->setIconSize(QSize(25, 30));
        cnew2FA = new QLineEdit(forgot2faBox);
        cnew2FA->setObjectName("cnew2FA");
        cnew2FA->setGeometry(QRect(65, 240, 290, 35));
        sizePolicy2.setHeightForWidth(cnew2FA->sizePolicy().hasHeightForWidth());
        cnew2FA->setSizePolicy(sizePolicy2);
        cnew2FA->setFont(font1);
        cnew2FA->setCursor(QCursor(Qt::IBeamCursor));
        cnew2FA->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;"));
        cnew2FA->setMaxLength(4);
        cnew2FA->setEchoMode(QLineEdit::Password);
        cnew2FA->setAlignment(Qt::AlignCenter);
        cnew2FA->setCursorMoveStyle(Qt::LogicalMoveStyle);
        cnew2FA->setClearButtonEnabled(true);
        reset2FA = new QPushButton(forgot2faBox);
        reset2FA->setObjectName("reset2FA");
        reset2FA->setGeometry(QRect(230, 360, 140, 45));
        sizePolicy1.setHeightForWidth(reset2FA->sizePolicy().hasHeightForWidth());
        reset2FA->setSizePolicy(sizePolicy1);
        reset2FA->setFont(font8);
        reset2FA->setCursor(QCursor(Qt::PointingHandCursor));
        reset2FA->setMouseTracking(true);
        reset2FA->setLayoutDirection(Qt::LeftToRight);
        reset2FA->setStyleSheet(QString::fromUtf8("#reset2FA\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#reset2FA:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        reset2FA->setAutoRepeatInterval(-1);
        UN_Focus_Button = new QPushButton(Admin);
        UN_Focus_Button->setObjectName("UN_Focus_Button");
        UN_Focus_Button->setGeometry(QRect(1090, 70, 21, 21));
        UN_Focus_Button->setStyleSheet(QString::fromUtf8("backgroud:none;\n"
"border:none;"));
        Background->raise();
        BackToUser->raise();
        TwoFABox->raise();
        BackToAdmin->raise();
        SecurityBox->raise();
        BackTo2FA->raise();
        forgotPwBox->raise();
        forgot2faBox->raise();
        UN_Focus_Button->raise();
        Logo->raise();
        AdminGroupBox->raise();

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "MovieMaestro", nullptr));
        AdminGroupBox->setTitle(QString());
        LogInButton->setText(QCoreApplication::translate("Admin", "Sign In", nullptr));
        APassword->setText(QString());
        APassword->setPlaceholderText(QCoreApplication::translate("Admin", "Password", nullptr));
        textAdmin->setText(QCoreApplication::translate("Admin", "Admin", nullptr));
        UNicon->setText(QString());
        PWicon->setText(QString());
        AUsername->setText(QString());
        AUsername->setPlaceholderText(QCoreApplication::translate("Admin", "Username", nullptr));
        ShowHidePW->setText(QString());
        forgotPassword->setText(QCoreApplication::translate("Admin", "Forgot password?", nullptr));
        Background->setText(QString());
        Logo->setText(QString());
        BackToUser->setText(QString());
        TwoFABox->setTitle(QString());
        ConfirmButton->setText(QCoreApplication::translate("Admin", "Confirm", nullptr));
        textTwoFA->setText(QCoreApplication::translate("Admin", "Two Factor Authentication", nullptr));
        TwoFA1->setText(QString());
        TwoFA2->setText(QString());
        TwoFA4->setText(QString());
        TwoFA3->setText(QString());
        forgotTwoFA->setText(QCoreApplication::translate("Admin", "Forgot code?", nullptr));
        BackToAdmin->setText(QString());
        SecurityBox->setTitle(QString());
        nextButton->setText(QCoreApplication::translate("Admin", "Next", nullptr));
        SQ1ans->setText(QString());
        SQ1ans->setPlaceholderText(QCoreApplication::translate("Admin", "Answer", nullptr));
        textSQ->setText(QCoreApplication::translate("Admin", "Security Question", nullptr));
        textSQ1->setText(QCoreApplication::translate("Admin", "1.", nullptr));
        SQ2ans->setText(QString());
        SQ2ans->setPlaceholderText(QCoreApplication::translate("Admin", "Answer", nullptr));
        textSQ2->setText(QCoreApplication::translate("Admin", "2. ", nullptr));
        BackTo2FA->setText(QString());
        forgotPwBox->setTitle(QString());
        cancelPW->setText(QCoreApplication::translate("Admin", "Cancel", nullptr));
        newPassword->setText(QString());
        newPassword->setPlaceholderText(QCoreApplication::translate("Admin", "New Password", nullptr));
        resetPWtext->setText(QCoreApplication::translate("Admin", "Reset Password", nullptr));
        ShowHideNPW->setText(QString());
        cnewPassword->setText(QString());
        cnewPassword->setPlaceholderText(QCoreApplication::translate("Admin", "Confirm Password", nullptr));
        resetPW->setText(QCoreApplication::translate("Admin", "Reset", nullptr));
        forgot2faBox->setTitle(QString());
        cancel2FA->setText(QCoreApplication::translate("Admin", "Cancel", nullptr));
        new2FA->setText(QString());
        new2FA->setPlaceholderText(QCoreApplication::translate("Admin", "New 4 Digit Code", nullptr));
        reset2FAtext->setText(QCoreApplication::translate("Admin", "Reset Two FA", nullptr));
        ShowHide2FA->setText(QString());
        cnew2FA->setText(QString());
        cnew2FA->setPlaceholderText(QCoreApplication::translate("Admin", "Confirm Code", nullptr));
        reset2FA->setText(QCoreApplication::translate("Admin", "Reset", nullptr));
        UN_Focus_Button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
