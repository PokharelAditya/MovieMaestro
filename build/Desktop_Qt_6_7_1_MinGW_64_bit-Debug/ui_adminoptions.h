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
    QPushButton *ExitButton;
    QGroupBox *optionsBox;
    QPushButton *viewButton;
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;

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
        SettingsPanel->setGeometry(QRect(20, 20, 311, 291));
        SettingsPanel->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        LogOutButton = new QPushButton(SettingsPanel);
        LogOutButton->setObjectName("LogOutButton");
        LogOutButton->setGeometry(QRect(10, 80, 281, 51));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogOutButton->sizePolicy().hasHeightForWidth());
        LogOutButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(13);
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
        APasswordChangeButton->setGeometry(QRect(10, 150, 281, 51));
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
        TwoFAChangeButton->setGeometry(QRect(10, 220, 281, 51));
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
        ExitButton = new QPushButton(SettingsPanel);
        ExitButton->setObjectName("ExitButton");
        ExitButton->setGeometry(QRect(80, 10, 211, 51));
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
        viewButton->setFont(font);
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
        addButton->setFont(font);
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
        updateButton->setFont(font);
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
        deleteButton->setFont(font);
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
        Background->raise();
        Logo->raise();
        SettingsPanel->raise();
        Settings->raise();
        optionsBox->raise();

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
        ExitButton->setText(QCoreApplication::translate("adminoptions", "Exit", nullptr));
        optionsBox->setTitle(QString());
        viewButton->setText(QCoreApplication::translate("adminoptions", "View Movies", nullptr));
        addButton->setText(QCoreApplication::translate("adminoptions", "Add Movies", nullptr));
        updateButton->setText(QCoreApplication::translate("adminoptions", "Update Movies", nullptr));
        deleteButton->setText(QCoreApplication::translate("adminoptions", "Delete Movies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminoptions: public Ui_adminoptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINOPTIONS_H
