/********************************************************************************
** Form generated from reading UI file 'adminoptions.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINOPTIONS_H
#define UI_ADMINOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminoptions
{
public:
    QLabel *Background;
    QLabel *Logo;
    QPushButton *Settings;
    QWidget *SettingsPanel;
    QPushButton *LogOutButton;
    QPushButton *APasswordChangeButton;
    QPushButton *TwoFAChangeButton;
    QPushButton *AUsernameChangeButton;
    QPushButton *ASQChangeButton;
    QPushButton *ExitButton;
    QPushButton *AEmailChangeButton;
    QGroupBox *optionsBox;
    QPushButton *viewButton;
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QPushButton *BackToAdminOptions;
    QGroupBox *VerificationBox;
    QPushButton *NextButton;
    QLineEdit *VPassword;
    QLabel *textPassword;
    QLabel *PWicon;
    QPushButton *ShowHidePW;
    QGroupBox *TwoFABox;
    QPushButton *NextButton2FA;
    QLabel *textTwoFA;
    QLineEdit *TwoFA1;
    QLineEdit *TwoFA2;
    QLineEdit *TwoFA4;
    QLineEdit *TwoFA3;
    QPushButton *BackToPassword;
    QGroupBox *changeEmailBox;
    QPushButton *cancelEmail;
    QLineEdit *newEmail;
    QLabel *changeEmailtext;
    QPushButton *changeEmail;
    QGroupBox *changeUNbox;
    QPushButton *cancelUN;
    QLineEdit *newUN;
    QLabel *changeUNtext;
    QPushButton *changeUN;
    QGroupBox *changePWbox;
    QPushButton *cancelPW;
    QLineEdit *newPassword;
    QLabel *changePWtext;
    QPushButton *ShowHideNPW;
    QLineEdit *cnewPassword;
    QPushButton *changePW;
    QGroupBox *change2FAbox;
    QPushButton *cancel2FA;
    QLineEdit *new2FA;
    QLabel *change2FAtext;
    QPushButton *ShowHide2FA;
    QLineEdit *cnew2FA;
    QPushButton *change2FA;
    QGroupBox *changeSQbox;
    QLineEdit *SQ1ans;
    QLabel *textChangeSQ;
    QLabel *textSQ1;
    QLineEdit *SQ2ans;
    QLabel *textSQ2;
    QPushButton *changeSQ;
    QPushButton *cancelSQ;
    QLineEdit *SQ1;
    QLineEdit *SQ2;

    void setupUi(QWidget *adminoptions)
    {
        if (adminoptions->objectName().isEmpty())
            adminoptions->setObjectName("adminoptions");
        adminoptions->resize(1200, 750);
        adminoptions->setMinimumSize(QSize(1200, 750));
        adminoptions->setMaximumSize(QSize(1200, 750));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MM Transparent BG.png"), QSize(), QIcon::Normal, QIcon::Off);
        adminoptions->setWindowIcon(icon);
        Background = new QLabel(adminoptions);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 1200, 750));
        Background->setMinimumSize(QSize(1200, 750));
        Background->setMaximumSize(QSize(1200, 750));
        Background->setFocusPolicy(Qt::StrongFocus);
        Background->setStyleSheet(QString::fromUtf8(""));
        Background->setPixmap(QPixmap(QString::fromUtf8(":/background1.png")));
        Background->setScaledContents(true);
        Logo = new QLabel(adminoptions);
        Logo->setObjectName("Logo");
        Logo->setGeometry(QRect(1040, 30, 121, 111));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/MM Transparent BG.png")));
        Logo->setScaledContents(true);
        Settings = new QPushButton(adminoptions);
        Settings->setObjectName("Settings");
        Settings->setGeometry(QRect(30, 30, 50, 50));
        Settings->setCursor(QCursor(Qt::PointingHandCursor));
        Settings->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/SettingsGlow.png"), QSize(), QIcon::Normal, QIcon::Off);
        Settings->setIcon(icon1);
        Settings->setIconSize(QSize(40, 40));
        SettingsPanel = new QWidget(adminoptions);
        SettingsPanel->setObjectName("SettingsPanel");
        SettingsPanel->setGeometry(QRect(20, 10, 321, 441));
        SettingsPanel->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        LogOutButton = new QPushButton(SettingsPanel);
        LogOutButton->setObjectName("LogOutButton");
        LogOutButton->setGeometry(QRect(70, 20, 141, 51));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogOutButton->sizePolicy().hasHeightForWidth());
        LogOutButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        LogOutButton->setFont(font);
        LogOutButton->setCursor(QCursor(Qt::PointingHandCursor));
        LogOutButton->setMouseTracking(true);
        LogOutButton->setLayoutDirection(Qt::LeftToRight);
        LogOutButton->setStyleSheet(QString::fromUtf8("#LogOutButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#LogOutButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        LogOutButton->setAutoRepeatInterval(-1);
        APasswordChangeButton = new QPushButton(SettingsPanel);
        APasswordChangeButton->setObjectName("APasswordChangeButton");
        APasswordChangeButton->setGeometry(QRect(10, 230, 301, 51));
        sizePolicy.setHeightForWidth(APasswordChangeButton->sizePolicy().hasHeightForWidth());
        APasswordChangeButton->setSizePolicy(sizePolicy);
        APasswordChangeButton->setFont(font);
        APasswordChangeButton->setCursor(QCursor(Qt::PointingHandCursor));
        APasswordChangeButton->setMouseTracking(true);
        APasswordChangeButton->setLayoutDirection(Qt::LeftToRight);
        APasswordChangeButton->setStyleSheet(QString::fromUtf8("#APasswordChangeButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#APasswordChangeButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        APasswordChangeButton->setAutoRepeatInterval(-1);
        TwoFAChangeButton = new QPushButton(SettingsPanel);
        TwoFAChangeButton->setObjectName("TwoFAChangeButton");
        TwoFAChangeButton->setGeometry(QRect(10, 300, 301, 51));
        sizePolicy.setHeightForWidth(TwoFAChangeButton->sizePolicy().hasHeightForWidth());
        TwoFAChangeButton->setSizePolicy(sizePolicy);
        TwoFAChangeButton->setFont(font);
        TwoFAChangeButton->setCursor(QCursor(Qt::PointingHandCursor));
        TwoFAChangeButton->setMouseTracking(true);
        TwoFAChangeButton->setLayoutDirection(Qt::LeftToRight);
        TwoFAChangeButton->setStyleSheet(QString::fromUtf8("#TwoFAChangeButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#TwoFAChangeButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        TwoFAChangeButton->setAutoRepeatInterval(-1);
        AUsernameChangeButton = new QPushButton(SettingsPanel);
        AUsernameChangeButton->setObjectName("AUsernameChangeButton");
        AUsernameChangeButton->setGeometry(QRect(10, 160, 301, 51));
        sizePolicy.setHeightForWidth(AUsernameChangeButton->sizePolicy().hasHeightForWidth());
        AUsernameChangeButton->setSizePolicy(sizePolicy);
        AUsernameChangeButton->setFont(font);
        AUsernameChangeButton->setCursor(QCursor(Qt::PointingHandCursor));
        AUsernameChangeButton->setMouseTracking(true);
        AUsernameChangeButton->setLayoutDirection(Qt::LeftToRight);
        AUsernameChangeButton->setStyleSheet(QString::fromUtf8("#AUsernameChangeButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#AUsernameChangeButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        AUsernameChangeButton->setAutoRepeatInterval(-1);
        ASQChangeButton = new QPushButton(SettingsPanel);
        ASQChangeButton->setObjectName("ASQChangeButton");
        ASQChangeButton->setGeometry(QRect(10, 370, 301, 51));
        sizePolicy.setHeightForWidth(ASQChangeButton->sizePolicy().hasHeightForWidth());
        ASQChangeButton->setSizePolicy(sizePolicy);
        ASQChangeButton->setFont(font);
        ASQChangeButton->setCursor(QCursor(Qt::PointingHandCursor));
        ASQChangeButton->setMouseTracking(true);
        ASQChangeButton->setLayoutDirection(Qt::LeftToRight);
        ASQChangeButton->setStyleSheet(QString::fromUtf8("#ASQChangeButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#ASQChangeButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        ASQChangeButton->setAutoRepeatInterval(-1);
        ExitButton = new QPushButton(SettingsPanel);
        ExitButton->setObjectName("ExitButton");
        ExitButton->setGeometry(QRect(230, 20, 81, 51));
        sizePolicy.setHeightForWidth(ExitButton->sizePolicy().hasHeightForWidth());
        ExitButton->setSizePolicy(sizePolicy);
        ExitButton->setFont(font);
        ExitButton->setCursor(QCursor(Qt::PointingHandCursor));
        ExitButton->setMouseTracking(true);
        ExitButton->setLayoutDirection(Qt::LeftToRight);
        ExitButton->setStyleSheet(QString::fromUtf8("#ExitButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#ExitButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        ExitButton->setAutoRepeatInterval(-1);
        AEmailChangeButton = new QPushButton(SettingsPanel);
        AEmailChangeButton->setObjectName("AEmailChangeButton");
        AEmailChangeButton->setGeometry(QRect(10, 90, 301, 51));
        sizePolicy.setHeightForWidth(AEmailChangeButton->sizePolicy().hasHeightForWidth());
        AEmailChangeButton->setSizePolicy(sizePolicy);
        AEmailChangeButton->setFont(font);
        AEmailChangeButton->setCursor(QCursor(Qt::PointingHandCursor));
        AEmailChangeButton->setMouseTracking(true);
        AEmailChangeButton->setLayoutDirection(Qt::LeftToRight);
        AEmailChangeButton->setStyleSheet(QString::fromUtf8("#AEmailChangeButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#AEmailChangeButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        AEmailChangeButton->setAutoRepeatInterval(-1);
        optionsBox = new QGroupBox(adminoptions);
        optionsBox->setObjectName("optionsBox");
        optionsBox->setGeometry(QRect(410, 190, 380, 370));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(optionsBox->sizePolicy().hasHeightForWidth());
        optionsBox->setSizePolicy(sizePolicy1);
        optionsBox->setLayoutDirection(Qt::LeftToRight);
        optionsBox->setAutoFillBackground(false);
        optionsBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        optionsBox->setAlignment(Qt::AlignCenter);
        viewButton = new QPushButton(optionsBox);
        viewButton->setObjectName("viewButton");
        viewButton->setGeometry(QRect(85, 40, 210, 51));
        sizePolicy.setHeightForWidth(viewButton->sizePolicy().hasHeightForWidth());
        viewButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(false);
        viewButton->setFont(font1);
        viewButton->setCursor(QCursor(Qt::PointingHandCursor));
        viewButton->setMouseTracking(true);
        viewButton->setLayoutDirection(Qt::LeftToRight);
        viewButton->setStyleSheet(QString::fromUtf8("#viewButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#viewButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        viewButton->setAutoRepeatInterval(-1);
        addButton = new QPushButton(optionsBox);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(85, 120, 210, 51));
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setFont(font1);
        addButton->setCursor(QCursor(Qt::PointingHandCursor));
        addButton->setMouseTracking(true);
        addButton->setLayoutDirection(Qt::LeftToRight);
        addButton->setStyleSheet(QString::fromUtf8("#addButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#addButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        addButton->setAutoRepeatInterval(-1);
        updateButton = new QPushButton(optionsBox);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(85, 200, 210, 51));
        sizePolicy.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy);
        updateButton->setFont(font1);
        updateButton->setCursor(QCursor(Qt::PointingHandCursor));
        updateButton->setMouseTracking(true);
        updateButton->setLayoutDirection(Qt::LeftToRight);
        updateButton->setStyleSheet(QString::fromUtf8("#updateButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#updateButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        updateButton->setAutoRepeatInterval(-1);
        deleteButton = new QPushButton(optionsBox);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(85, 280, 210, 51));
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);
        deleteButton->setFont(font1);
        deleteButton->setCursor(QCursor(Qt::PointingHandCursor));
        deleteButton->setMouseTracking(true);
        deleteButton->setLayoutDirection(Qt::LeftToRight);
        deleteButton->setStyleSheet(QString::fromUtf8("#deleteButton\n"
"{\n"
"border:2px solid;\n"
"border-color:rgb(227, 135, 22);\n"
"border-radius:20px;\n"
"}\n"
"#deleteButton:hover\n"
"{\n"
"background-color:rgb(227, 135, 22);\n"
"}\n"
"\n"
""));
        deleteButton->setAutoRepeatInterval(-1);
        BackToAdminOptions = new QPushButton(adminoptions);
        BackToAdminOptions->setObjectName("BackToAdminOptions");
        BackToAdminOptions->setGeometry(QRect(30, 30, 51, 51));
        BackToAdminOptions->setCursor(QCursor(Qt::PointingHandCursor));
        BackToAdminOptions->setMouseTracking(true);
        BackToAdminOptions->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/back icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        BackToAdminOptions->setIcon(icon2);
        BackToAdminOptions->setIconSize(QSize(40, 40));
        VerificationBox = new QGroupBox(adminoptions);
        VerificationBox->setObjectName("VerificationBox");
        VerificationBox->setGeometry(QRect(390, 195, 420, 360));
        sizePolicy1.setHeightForWidth(VerificationBox->sizePolicy().hasHeightForWidth());
        VerificationBox->setSizePolicy(sizePolicy1);
        VerificationBox->setLayoutDirection(Qt::LeftToRight);
        VerificationBox->setAutoFillBackground(false);
        VerificationBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        VerificationBox->setAlignment(Qt::AlignCenter);
        NextButton = new QPushButton(VerificationBox);
        NextButton->setObjectName("NextButton");
        NextButton->setGeometry(QRect(110, 250, 200, 51));
        sizePolicy.setHeightForWidth(NextButton->sizePolicy().hasHeightForWidth());
        NextButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(false);
        NextButton->setFont(font2);
        NextButton->setCursor(QCursor(Qt::PointingHandCursor));
        NextButton->setMouseTracking(true);
        NextButton->setLayoutDirection(Qt::LeftToRight);
        NextButton->setStyleSheet(QString::fromUtf8("#NextButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#NextButton:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        NextButton->setAutoRepeatInterval(-1);
        VPassword = new QLineEdit(VerificationBox);
        VPassword->setObjectName("VPassword");
        VPassword->setGeometry(QRect(90, 140, 280, 35));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(VPassword->sizePolicy().hasHeightForWidth());
        VPassword->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(12);
        VPassword->setFont(font3);
        VPassword->setCursor(QCursor(Qt::IBeamCursor));
        VPassword->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;"));
        VPassword->setEchoMode(QLineEdit::Password);
        VPassword->setAlignment(Qt::AlignCenter);
        VPassword->setCursorMoveStyle(Qt::LogicalMoveStyle);
        VPassword->setClearButtonEnabled(true);
        textPassword = new QLabel(VerificationBox);
        textPassword->setObjectName("textPassword");
        textPassword->setGeometry(QRect(60, 30, 300, 81));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(22);
        font4.setBold(true);
        font4.setItalic(false);
        textPassword->setFont(font4);
        textPassword->setFocusPolicy(Qt::NoFocus);
        textPassword->setContextMenuPolicy(Qt::DefaultContextMenu);
        textPassword->setAutoFillBackground(false);
        textPassword->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        textPassword->setLineWidth(0);
        textPassword->setScaledContents(false);
        textPassword->setAlignment(Qt::AlignCenter);
        textPassword->setWordWrap(false);
        PWicon = new QLabel(VerificationBox);
        PWicon->setObjectName("PWicon");
        PWicon->setGeometry(QRect(40, 140, 31, 31));
        PWicon->setStyleSheet(QString::fromUtf8("background:none;"));
        PWicon->setPixmap(QPixmap(QString::fromUtf8(":/passwordicon.png")));
        PWicon->setScaledContents(true);
        ShowHidePW = new QPushButton(VerificationBox);
        ShowHidePW->setObjectName("ShowHidePW");
        ShowHidePW->setGeometry(QRect(330, 190, 41, 21));
        ShowHidePW->setCursor(QCursor(Qt::PointingHandCursor));
        ShowHidePW->setMouseTracking(true);
        ShowHidePW->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/OpenEye.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowHidePW->setIcon(icon3);
        ShowHidePW->setIconSize(QSize(25, 30));
        TwoFABox = new QGroupBox(adminoptions);
        TwoFABox->setObjectName("TwoFABox");
        TwoFABox->setGeometry(QRect(400, 225, 400, 300));
        sizePolicy1.setHeightForWidth(TwoFABox->sizePolicy().hasHeightForWidth());
        TwoFABox->setSizePolicy(sizePolicy1);
        TwoFABox->setLayoutDirection(Qt::LeftToRight);
        TwoFABox->setAutoFillBackground(false);
        TwoFABox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        TwoFABox->setAlignment(Qt::AlignCenter);
        NextButton2FA = new QPushButton(TwoFABox);
        NextButton2FA->setObjectName("NextButton2FA");
        NextButton2FA->setGeometry(QRect(100, 200, 200, 50));
        sizePolicy.setHeightForWidth(NextButton2FA->sizePolicy().hasHeightForWidth());
        NextButton2FA->setSizePolicy(sizePolicy);
        NextButton2FA->setFont(font2);
        NextButton2FA->setCursor(QCursor(Qt::PointingHandCursor));
        NextButton2FA->setMouseTracking(true);
        NextButton2FA->setLayoutDirection(Qt::LeftToRight);
        NextButton2FA->setStyleSheet(QString::fromUtf8("#NextButton2FA\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#NextButton2FA:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        NextButton2FA->setAutoRepeatInterval(-1);
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
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI")});
        font6.setPointSize(12);
        font6.setKerning(true);
        TwoFA1->setFont(font6);
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
        TwoFA2->setFont(font6);
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
        TwoFA4->setFont(font6);
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
        TwoFA3->setFont(font6);
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
        BackToPassword = new QPushButton(adminoptions);
        BackToPassword->setObjectName("BackToPassword");
        BackToPassword->setGeometry(QRect(30, 30, 51, 51));
        BackToPassword->setCursor(QCursor(Qt::PointingHandCursor));
        BackToPassword->setMouseTracking(true);
        BackToPassword->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        BackToPassword->setIcon(icon2);
        BackToPassword->setIconSize(QSize(40, 40));
        changeEmailBox = new QGroupBox(adminoptions);
        changeEmailBox->setObjectName("changeEmailBox");
        changeEmailBox->setGeometry(QRect(390, 205, 420, 340));
        sizePolicy1.setHeightForWidth(changeEmailBox->sizePolicy().hasHeightForWidth());
        changeEmailBox->setSizePolicy(sizePolicy1);
        changeEmailBox->setLayoutDirection(Qt::LeftToRight);
        changeEmailBox->setAutoFillBackground(false);
        changeEmailBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        changeEmailBox->setAlignment(Qt::AlignCenter);
        cancelEmail = new QPushButton(changeEmailBox);
        cancelEmail->setObjectName("cancelEmail");
        cancelEmail->setGeometry(QRect(50, 240, 140, 45));
        sizePolicy.setHeightForWidth(cancelEmail->sizePolicy().hasHeightForWidth());
        cancelEmail->setSizePolicy(sizePolicy);
        cancelEmail->setFont(font1);
        cancelEmail->setCursor(QCursor(Qt::PointingHandCursor));
        cancelEmail->setMouseTracking(true);
        cancelEmail->setLayoutDirection(Qt::LeftToRight);
        cancelEmail->setStyleSheet(QString::fromUtf8("#cancelEmail\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#cancelEmail:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        cancelEmail->setAutoRepeatInterval(-1);
        newEmail = new QLineEdit(changeEmailBox);
        newEmail->setObjectName("newEmail");
        newEmail->setGeometry(QRect(65, 150, 290, 35));
        sizePolicy2.setHeightForWidth(newEmail->sizePolicy().hasHeightForWidth());
        newEmail->setSizePolicy(sizePolicy2);
        newEmail->setFont(font3);
        newEmail->setCursor(QCursor(Qt::IBeamCursor));
        newEmail->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;"));
        newEmail->setEchoMode(QLineEdit::Normal);
        newEmail->setAlignment(Qt::AlignCenter);
        newEmail->setCursorMoveStyle(Qt::LogicalMoveStyle);
        newEmail->setClearButtonEnabled(true);
        changeEmailtext = new QLabel(changeEmailBox);
        changeEmailtext->setObjectName("changeEmailtext");
        changeEmailtext->setGeometry(QRect(20, 30, 380, 80));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Segoe UI")});
        font7.setPointSize(23);
        font7.setBold(true);
        font7.setItalic(false);
        changeEmailtext->setFont(font7);
        changeEmailtext->setFocusPolicy(Qt::NoFocus);
        changeEmailtext->setContextMenuPolicy(Qt::DefaultContextMenu);
        changeEmailtext->setAutoFillBackground(false);
        changeEmailtext->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        changeEmailtext->setLineWidth(0);
        changeEmailtext->setScaledContents(false);
        changeEmailtext->setAlignment(Qt::AlignCenter);
        changeEmailtext->setWordWrap(false);
        changeEmail = new QPushButton(changeEmailBox);
        changeEmail->setObjectName("changeEmail");
        changeEmail->setGeometry(QRect(230, 240, 140, 45));
        sizePolicy.setHeightForWidth(changeEmail->sizePolicy().hasHeightForWidth());
        changeEmail->setSizePolicy(sizePolicy);
        changeEmail->setFont(font1);
        changeEmail->setCursor(QCursor(Qt::PointingHandCursor));
        changeEmail->setMouseTracking(true);
        changeEmail->setLayoutDirection(Qt::LeftToRight);
        changeEmail->setStyleSheet(QString::fromUtf8("#changeEmail\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#changeEmail:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        changeEmail->setAutoRepeatInterval(-1);
        changeUNbox = new QGroupBox(adminoptions);
        changeUNbox->setObjectName("changeUNbox");
        changeUNbox->setGeometry(QRect(390, 205, 420, 340));
        sizePolicy1.setHeightForWidth(changeUNbox->sizePolicy().hasHeightForWidth());
        changeUNbox->setSizePolicy(sizePolicy1);
        changeUNbox->setLayoutDirection(Qt::LeftToRight);
        changeUNbox->setAutoFillBackground(false);
        changeUNbox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        changeUNbox->setAlignment(Qt::AlignCenter);
        cancelUN = new QPushButton(changeUNbox);
        cancelUN->setObjectName("cancelUN");
        cancelUN->setGeometry(QRect(50, 240, 140, 45));
        sizePolicy.setHeightForWidth(cancelUN->sizePolicy().hasHeightForWidth());
        cancelUN->setSizePolicy(sizePolicy);
        cancelUN->setFont(font1);
        cancelUN->setCursor(QCursor(Qt::PointingHandCursor));
        cancelUN->setMouseTracking(true);
        cancelUN->setLayoutDirection(Qt::LeftToRight);
        cancelUN->setStyleSheet(QString::fromUtf8("#cancelUN\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#cancelUN:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        cancelUN->setAutoRepeatInterval(-1);
        newUN = new QLineEdit(changeUNbox);
        newUN->setObjectName("newUN");
        newUN->setGeometry(QRect(65, 150, 290, 35));
        sizePolicy2.setHeightForWidth(newUN->sizePolicy().hasHeightForWidth());
        newUN->setSizePolicy(sizePolicy2);
        newUN->setFont(font3);
        newUN->setCursor(QCursor(Qt::IBeamCursor));
        newUN->setStyleSheet(QString::fromUtf8("background:rgb(194, 194, 194);\n"
"border:none;\n"
"color:black;\n"
"border-radius:none;\n"
"border-radius:5px;"));
        newUN->setEchoMode(QLineEdit::Normal);
        newUN->setAlignment(Qt::AlignCenter);
        newUN->setCursorMoveStyle(Qt::LogicalMoveStyle);
        newUN->setClearButtonEnabled(true);
        changeUNtext = new QLabel(changeUNbox);
        changeUNtext->setObjectName("changeUNtext");
        changeUNtext->setGeometry(QRect(20, 30, 380, 80));
        changeUNtext->setFont(font7);
        changeUNtext->setFocusPolicy(Qt::NoFocus);
        changeUNtext->setContextMenuPolicy(Qt::DefaultContextMenu);
        changeUNtext->setAutoFillBackground(false);
        changeUNtext->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        changeUNtext->setLineWidth(0);
        changeUNtext->setScaledContents(false);
        changeUNtext->setAlignment(Qt::AlignCenter);
        changeUNtext->setWordWrap(false);
        changeUN = new QPushButton(changeUNbox);
        changeUN->setObjectName("changeUN");
        changeUN->setGeometry(QRect(230, 240, 140, 45));
        sizePolicy.setHeightForWidth(changeUN->sizePolicy().hasHeightForWidth());
        changeUN->setSizePolicy(sizePolicy);
        changeUN->setFont(font1);
        changeUN->setCursor(QCursor(Qt::PointingHandCursor));
        changeUN->setMouseTracking(true);
        changeUN->setLayoutDirection(Qt::LeftToRight);
        changeUN->setStyleSheet(QString::fromUtf8("#changeUN\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#changeUN:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        changeUN->setAutoRepeatInterval(-1);
        changePWbox = new QGroupBox(adminoptions);
        changePWbox->setObjectName("changePWbox");
        changePWbox->setGeometry(QRect(390, 150, 420, 450));
        sizePolicy1.setHeightForWidth(changePWbox->sizePolicy().hasHeightForWidth());
        changePWbox->setSizePolicy(sizePolicy1);
        changePWbox->setLayoutDirection(Qt::LeftToRight);
        changePWbox->setAutoFillBackground(false);
        changePWbox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        changePWbox->setAlignment(Qt::AlignCenter);
        cancelPW = new QPushButton(changePWbox);
        cancelPW->setObjectName("cancelPW");
        cancelPW->setGeometry(QRect(50, 360, 140, 45));
        sizePolicy.setHeightForWidth(cancelPW->sizePolicy().hasHeightForWidth());
        cancelPW->setSizePolicy(sizePolicy);
        cancelPW->setFont(font1);
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
        newPassword = new QLineEdit(changePWbox);
        newPassword->setObjectName("newPassword");
        newPassword->setGeometry(QRect(65, 160, 290, 35));
        sizePolicy2.setHeightForWidth(newPassword->sizePolicy().hasHeightForWidth());
        newPassword->setSizePolicy(sizePolicy2);
        newPassword->setFont(font3);
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
        changePWtext = new QLabel(changePWbox);
        changePWtext->setObjectName("changePWtext");
        changePWtext->setGeometry(QRect(20, 40, 380, 80));
        changePWtext->setFont(font7);
        changePWtext->setFocusPolicy(Qt::NoFocus);
        changePWtext->setContextMenuPolicy(Qt::DefaultContextMenu);
        changePWtext->setAutoFillBackground(false);
        changePWtext->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        changePWtext->setLineWidth(0);
        changePWtext->setScaledContents(false);
        changePWtext->setAlignment(Qt::AlignCenter);
        changePWtext->setWordWrap(false);
        ShowHideNPW = new QPushButton(changePWbox);
        ShowHideNPW->setObjectName("ShowHideNPW");
        ShowHideNPW->setGeometry(QRect(310, 290, 41, 21));
        ShowHideNPW->setCursor(QCursor(Qt::PointingHandCursor));
        ShowHideNPW->setMouseTracking(true);
        ShowHideNPW->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        ShowHideNPW->setIcon(icon3);
        ShowHideNPW->setIconSize(QSize(25, 30));
        cnewPassword = new QLineEdit(changePWbox);
        cnewPassword->setObjectName("cnewPassword");
        cnewPassword->setGeometry(QRect(65, 240, 290, 35));
        sizePolicy2.setHeightForWidth(cnewPassword->sizePolicy().hasHeightForWidth());
        cnewPassword->setSizePolicy(sizePolicy2);
        cnewPassword->setFont(font3);
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
        changePW = new QPushButton(changePWbox);
        changePW->setObjectName("changePW");
        changePW->setGeometry(QRect(230, 360, 140, 45));
        sizePolicy.setHeightForWidth(changePW->sizePolicy().hasHeightForWidth());
        changePW->setSizePolicy(sizePolicy);
        changePW->setFont(font1);
        changePW->setCursor(QCursor(Qt::PointingHandCursor));
        changePW->setMouseTracking(true);
        changePW->setLayoutDirection(Qt::LeftToRight);
        changePW->setStyleSheet(QString::fromUtf8("#changePW\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#changePW:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        changePW->setAutoRepeatInterval(-1);
        change2FAbox = new QGroupBox(adminoptions);
        change2FAbox->setObjectName("change2FAbox");
        change2FAbox->setGeometry(QRect(390, 150, 420, 450));
        sizePolicy1.setHeightForWidth(change2FAbox->sizePolicy().hasHeightForWidth());
        change2FAbox->setSizePolicy(sizePolicy1);
        change2FAbox->setLayoutDirection(Qt::LeftToRight);
        change2FAbox->setAutoFillBackground(false);
        change2FAbox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        change2FAbox->setAlignment(Qt::AlignCenter);
        cancel2FA = new QPushButton(change2FAbox);
        cancel2FA->setObjectName("cancel2FA");
        cancel2FA->setGeometry(QRect(50, 360, 140, 45));
        sizePolicy.setHeightForWidth(cancel2FA->sizePolicy().hasHeightForWidth());
        cancel2FA->setSizePolicy(sizePolicy);
        cancel2FA->setFont(font1);
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
        new2FA = new QLineEdit(change2FAbox);
        new2FA->setObjectName("new2FA");
        new2FA->setGeometry(QRect(65, 160, 290, 35));
        sizePolicy2.setHeightForWidth(new2FA->sizePolicy().hasHeightForWidth());
        new2FA->setSizePolicy(sizePolicy2);
        new2FA->setFont(font3);
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
        change2FAtext = new QLabel(change2FAbox);
        change2FAtext->setObjectName("change2FAtext");
        change2FAtext->setGeometry(QRect(20, 40, 380, 80));
        change2FAtext->setFont(font7);
        change2FAtext->setFocusPolicy(Qt::NoFocus);
        change2FAtext->setContextMenuPolicy(Qt::DefaultContextMenu);
        change2FAtext->setAutoFillBackground(false);
        change2FAtext->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        change2FAtext->setLineWidth(0);
        change2FAtext->setScaledContents(false);
        change2FAtext->setAlignment(Qt::AlignCenter);
        change2FAtext->setWordWrap(false);
        ShowHide2FA = new QPushButton(change2FAbox);
        ShowHide2FA->setObjectName("ShowHide2FA");
        ShowHide2FA->setGeometry(QRect(310, 290, 41, 21));
        ShowHide2FA->setCursor(QCursor(Qt::PointingHandCursor));
        ShowHide2FA->setMouseTracking(true);
        ShowHide2FA->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        ShowHide2FA->setIcon(icon3);
        ShowHide2FA->setIconSize(QSize(25, 30));
        cnew2FA = new QLineEdit(change2FAbox);
        cnew2FA->setObjectName("cnew2FA");
        cnew2FA->setGeometry(QRect(65, 240, 290, 35));
        sizePolicy2.setHeightForWidth(cnew2FA->sizePolicy().hasHeightForWidth());
        cnew2FA->setSizePolicy(sizePolicy2);
        cnew2FA->setFont(font3);
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
        change2FA = new QPushButton(change2FAbox);
        change2FA->setObjectName("change2FA");
        change2FA->setGeometry(QRect(230, 360, 140, 45));
        sizePolicy.setHeightForWidth(change2FA->sizePolicy().hasHeightForWidth());
        change2FA->setSizePolicy(sizePolicy);
        change2FA->setFont(font1);
        change2FA->setCursor(QCursor(Qt::PointingHandCursor));
        change2FA->setMouseTracking(true);
        change2FA->setLayoutDirection(Qt::LeftToRight);
        change2FA->setStyleSheet(QString::fromUtf8("#change2FA\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#change2FA:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        change2FA->setAutoRepeatInterval(-1);
        changeSQbox = new QGroupBox(adminoptions);
        changeSQbox->setObjectName("changeSQbox");
        changeSQbox->setEnabled(true);
        changeSQbox->setGeometry(QRect(130, 150, 940, 450));
        sizePolicy1.setHeightForWidth(changeSQbox->sizePolicy().hasHeightForWidth());
        changeSQbox->setSizePolicy(sizePolicy1);
        changeSQbox->setLayoutDirection(Qt::LeftToRight);
        changeSQbox->setAutoFillBackground(false);
        changeSQbox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 100);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        changeSQbox->setAlignment(Qt::AlignCenter);
        SQ1ans = new QLineEdit(changeSQbox);
        SQ1ans->setObjectName("SQ1ans");
        SQ1ans->setGeometry(QRect(50, 170, 280, 35));
        sizePolicy2.setHeightForWidth(SQ1ans->sizePolicy().hasHeightForWidth());
        SQ1ans->setSizePolicy(sizePolicy2);
        SQ1ans->setFont(font3);
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
        textChangeSQ = new QLabel(changeSQbox);
        textChangeSQ->setObjectName("textChangeSQ");
        textChangeSQ->setGeometry(QRect(270, 20, 400, 81));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Segoe UI")});
        font8.setPointSize(20);
        font8.setBold(true);
        font8.setItalic(false);
        textChangeSQ->setFont(font8);
        textChangeSQ->setFocusPolicy(Qt::NoFocus);
        textChangeSQ->setContextMenuPolicy(Qt::DefaultContextMenu);
        textChangeSQ->setAutoFillBackground(false);
        textChangeSQ->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        textChangeSQ->setLineWidth(0);
        textChangeSQ->setScaledContents(false);
        textChangeSQ->setAlignment(Qt::AlignCenter);
        textChangeSQ->setWordWrap(false);
        textSQ1 = new QLabel(changeSQbox);
        textSQ1->setObjectName("textSQ1");
        textSQ1->setGeometry(QRect(30, 110, 870, 35));
        QFont font9;
        font9.setPointSize(12);
        font9.setWeight(QFont::Medium);
        font9.setItalic(true);
        textSQ1->setFont(font9);
        textSQ1->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        SQ2ans = new QLineEdit(changeSQbox);
        SQ2ans->setObjectName("SQ2ans");
        SQ2ans->setGeometry(QRect(50, 320, 280, 35));
        sizePolicy2.setHeightForWidth(SQ2ans->sizePolicy().hasHeightForWidth());
        SQ2ans->setSizePolicy(sizePolicy2);
        SQ2ans->setFont(font3);
        SQ2ans->setCursor(QCursor(Qt::IBeamCursor));
        SQ2ans->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;"));
        SQ2ans->setEchoMode(QLineEdit::Normal);
        SQ2ans->setAlignment(Qt::AlignCenter);
        SQ2ans->setCursorMoveStyle(Qt::LogicalMoveStyle);
        SQ2ans->setClearButtonEnabled(true);
        textSQ2 = new QLabel(changeSQbox);
        textSQ2->setObjectName("textSQ2");
        textSQ2->setGeometry(QRect(30, 260, 870, 35));
        textSQ2->setFont(font9);
        textSQ2->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        changeSQ = new QPushButton(changeSQbox);
        changeSQ->setObjectName("changeSQ");
        changeSQ->setGeometry(QRect(780, 380, 140, 45));
        sizePolicy.setHeightForWidth(changeSQ->sizePolicy().hasHeightForWidth());
        changeSQ->setSizePolicy(sizePolicy);
        changeSQ->setFont(font1);
        changeSQ->setCursor(QCursor(Qt::PointingHandCursor));
        changeSQ->setMouseTracking(true);
        changeSQ->setLayoutDirection(Qt::LeftToRight);
        changeSQ->setStyleSheet(QString::fromUtf8("#changeSQ\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#changeSQ:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        changeSQ->setAutoRepeatInterval(-1);
        cancelSQ = new QPushButton(changeSQbox);
        cancelSQ->setObjectName("cancelSQ");
        cancelSQ->setGeometry(QRect(620, 380, 140, 45));
        sizePolicy.setHeightForWidth(cancelSQ->sizePolicy().hasHeightForWidth());
        cancelSQ->setSizePolicy(sizePolicy);
        cancelSQ->setFont(font1);
        cancelSQ->setCursor(QCursor(Qt::PointingHandCursor));
        cancelSQ->setMouseTracking(true);
        cancelSQ->setLayoutDirection(Qt::LeftToRight);
        cancelSQ->setStyleSheet(QString::fromUtf8("#cancelSQ\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#cancelSQ:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        cancelSQ->setAutoRepeatInterval(-1);
        SQ1 = new QLineEdit(changeSQbox);
        SQ1->setObjectName("SQ1");
        SQ1->setGeometry(QRect(140, 110, 771, 35));
        sizePolicy2.setHeightForWidth(SQ1->sizePolicy().hasHeightForWidth());
        SQ1->setSizePolicy(sizePolicy2);
        SQ1->setFont(font3);
        SQ1->setCursor(QCursor(Qt::IBeamCursor));
        SQ1->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;\n"
""));
        SQ1->setEchoMode(QLineEdit::Normal);
        SQ1->setAlignment(Qt::AlignCenter);
        SQ1->setCursorMoveStyle(Qt::LogicalMoveStyle);
        SQ1->setClearButtonEnabled(true);
        SQ2 = new QLineEdit(changeSQbox);
        SQ2->setObjectName("SQ2");
        SQ2->setGeometry(QRect(140, 260, 771, 35));
        sizePolicy2.setHeightForWidth(SQ2->sizePolicy().hasHeightForWidth());
        SQ2->setSizePolicy(sizePolicy2);
        SQ2->setFont(font3);
        SQ2->setCursor(QCursor(Qt::IBeamCursor));
        SQ2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;\n"
""));
        SQ2->setEchoMode(QLineEdit::Normal);
        SQ2->setAlignment(Qt::AlignCenter);
        SQ2->setCursorMoveStyle(Qt::LogicalMoveStyle);
        SQ2->setClearButtonEnabled(true);
        SQ1ans->raise();
        textChangeSQ->raise();
        SQ2ans->raise();
        textSQ2->raise();
        changeSQ->raise();
        cancelSQ->raise();
        textSQ1->raise();
        SQ1->raise();
        SQ2->raise();
        Background->raise();
        Logo->raise();
        SettingsPanel->raise();
        Settings->raise();
        BackToAdminOptions->raise();
        BackToPassword->raise();
        optionsBox->raise();
        TwoFABox->raise();
        changeEmailBox->raise();
        changeUNbox->raise();
        changePWbox->raise();
        VerificationBox->raise();
        change2FAbox->raise();
        changeSQbox->raise();

        retranslateUi(adminoptions);

        QMetaObject::connectSlotsByName(adminoptions);
    } // setupUi

    void retranslateUi(QWidget *adminoptions)
    {
        adminoptions->setWindowTitle(QCoreApplication::translate("adminoptions", "MovieMaestro", nullptr));
        Background->setText(QString());
        Logo->setText(QString());
        Settings->setText(QString());
        LogOutButton->setText(QCoreApplication::translate("adminoptions", "Sign Out", nullptr));
        APasswordChangeButton->setText(QCoreApplication::translate("adminoptions", "Change Password", nullptr));
        TwoFAChangeButton->setText(QCoreApplication::translate("adminoptions", "Change Two-FA", nullptr));
        AUsernameChangeButton->setText(QCoreApplication::translate("adminoptions", "Change Username", nullptr));
        ASQChangeButton->setText(QCoreApplication::translate("adminoptions", "Update Security Questions", nullptr));
        ExitButton->setText(QCoreApplication::translate("adminoptions", "Exit", nullptr));
        AEmailChangeButton->setText(QCoreApplication::translate("adminoptions", "Change E-mail", nullptr));
        optionsBox->setTitle(QString());
        viewButton->setText(QCoreApplication::translate("adminoptions", "View Movies", nullptr));
        addButton->setText(QCoreApplication::translate("adminoptions", "Add Movies", nullptr));
        updateButton->setText(QCoreApplication::translate("adminoptions", "Update Movies", nullptr));
        deleteButton->setText(QCoreApplication::translate("adminoptions", "Delete Movies", nullptr));
        BackToAdminOptions->setText(QString());
        VerificationBox->setTitle(QString());
        NextButton->setText(QCoreApplication::translate("adminoptions", "Next", nullptr));
        VPassword->setText(QString());
        textPassword->setText(QCoreApplication::translate("adminoptions", "Password", nullptr));
        PWicon->setText(QString());
        ShowHidePW->setText(QString());
        TwoFABox->setTitle(QString());
        NextButton2FA->setText(QCoreApplication::translate("adminoptions", "Next", nullptr));
        textTwoFA->setText(QCoreApplication::translate("adminoptions", "Two Factor Authentication", nullptr));
        TwoFA1->setText(QString());
        TwoFA2->setText(QString());
        TwoFA4->setText(QString());
        TwoFA3->setText(QString());
        BackToPassword->setText(QString());
        changeEmailBox->setTitle(QString());
        cancelEmail->setText(QCoreApplication::translate("adminoptions", "Cancel", nullptr));
        newEmail->setText(QString());
        newEmail->setPlaceholderText(QCoreApplication::translate("adminoptions", "New Email", nullptr));
        changeEmailtext->setText(QCoreApplication::translate("adminoptions", "Change Email", nullptr));
        changeEmail->setText(QCoreApplication::translate("adminoptions", "Change", nullptr));
        changeUNbox->setTitle(QString());
        cancelUN->setText(QCoreApplication::translate("adminoptions", "Cancel", nullptr));
        newUN->setText(QString());
        newUN->setPlaceholderText(QCoreApplication::translate("adminoptions", "New Username", nullptr));
        changeUNtext->setText(QCoreApplication::translate("adminoptions", "Change Username", nullptr));
        changeUN->setText(QCoreApplication::translate("adminoptions", "Change", nullptr));
        changePWbox->setTitle(QString());
        cancelPW->setText(QCoreApplication::translate("adminoptions", "Cancel", nullptr));
        newPassword->setText(QString());
        newPassword->setPlaceholderText(QCoreApplication::translate("adminoptions", "New Password", nullptr));
        changePWtext->setText(QCoreApplication::translate("adminoptions", "Change Password", nullptr));
        ShowHideNPW->setText(QString());
        cnewPassword->setText(QString());
        cnewPassword->setPlaceholderText(QCoreApplication::translate("adminoptions", "Confirm Password", nullptr));
        changePW->setText(QCoreApplication::translate("adminoptions", "Change", nullptr));
        change2FAbox->setTitle(QString());
        cancel2FA->setText(QCoreApplication::translate("adminoptions", "Cancel", nullptr));
        new2FA->setText(QString());
        new2FA->setPlaceholderText(QCoreApplication::translate("adminoptions", "New 4 Digit Code", nullptr));
        change2FAtext->setText(QCoreApplication::translate("adminoptions", "Change Two FA", nullptr));
        ShowHide2FA->setText(QString());
        cnew2FA->setText(QString());
        cnew2FA->setPlaceholderText(QCoreApplication::translate("adminoptions", "Confirm Code", nullptr));
        change2FA->setText(QCoreApplication::translate("adminoptions", "Change", nullptr));
        changeSQbox->setTitle(QString());
        SQ1ans->setText(QString());
        SQ1ans->setPlaceholderText(QCoreApplication::translate("adminoptions", "Answer", nullptr));
        textChangeSQ->setText(QCoreApplication::translate("adminoptions", "Change Security Question", nullptr));
        textSQ1->setText(QCoreApplication::translate("adminoptions", "Question 1:", nullptr));
        SQ2ans->setText(QString());
        SQ2ans->setPlaceholderText(QCoreApplication::translate("adminoptions", "Answer", nullptr));
        textSQ2->setText(QCoreApplication::translate("adminoptions", "Question 2:", nullptr));
        changeSQ->setText(QCoreApplication::translate("adminoptions", "Change", nullptr));
        cancelSQ->setText(QCoreApplication::translate("adminoptions", "Cancel", nullptr));
        SQ1->setText(QString());
        SQ1->setPlaceholderText(QCoreApplication::translate("adminoptions", "Question", nullptr));
        SQ2->setText(QString());
        SQ2->setPlaceholderText(QCoreApplication::translate("adminoptions", "Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminoptions: public Ui_adminoptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINOPTIONS_H
