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
    QLabel *textVerification;
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
        textVerification = new QLabel(VerificationBox);
        textVerification->setObjectName("textVerification");
        textVerification->setGeometry(QRect(60, 30, 300, 81));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(22);
        font4.setBold(true);
        font4.setItalic(false);
        textVerification->setFont(font4);
        textVerification->setFocusPolicy(Qt::NoFocus);
        textVerification->setContextMenuPolicy(Qt::DefaultContextMenu);
        textVerification->setAutoFillBackground(false);
        textVerification->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        textVerification->setLineWidth(0);
        textVerification->setScaledContents(false);
        textVerification->setAlignment(Qt::AlignCenter);
        textVerification->setWordWrap(false);
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
        Background->raise();
        Logo->raise();
        SettingsPanel->raise();
        Settings->raise();
        BackToAdminOptions->raise();
        BackToPassword->raise();
        optionsBox->raise();
        VerificationBox->raise();
        TwoFABox->raise();

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
        textVerification->setText(QCoreApplication::translate("adminoptions", "Verification", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class adminoptions: public Ui_adminoptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINOPTIONS_H
