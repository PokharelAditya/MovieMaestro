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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QPushButton *ProfilePicture;
    QPushButton *house;
    QLabel *logo;
    QPushButton *searchbtn;
    QPushButton *gearbtn;
    QPushButton *brightnessmodebtn;
    QLineEdit *searchbar;
    QLabel *foryoulabel;
    QGroupBox *foryoubox;
    QPushButton *moviebtn;
    QPushButton *moviebtn_2;
    QPushButton *moviebtn_3;
    QPushButton *moviebtn_4;
    QPushButton *leftbtn;
    QPushButton *rightbtn;
    QGroupBox *foryoubox_2;
    QPushButton *moviebtn_5;
    QPushButton *moviebtn_6;
    QPushButton *moviebtn_7;
    QPushButton *moviebtn_8;
    QGroupBox *recentgroupbox;
    QPushButton *moviebtn_9;
    QPushButton *moviebtn_10;
    QPushButton *moviebtn_11;
    QPushButton *moviebtn_12;
    QLabel *foryoulabel_2;
    QPushButton *rightbtn_2;
    QPushButton *leftbtn_2;
    QGroupBox *recentgroupbox_2;
    QPushButton *moviebtn_17;
    QPushButton *moviebtn_18;
    QPushButton *moviebtn_19;
    QPushButton *moviebtn_20;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(1231, 811);
        HomePage->setStyleSheet(QString::fromUtf8("background:black;\n"
"background-image:url(:/andhadhund.jpg);"));
        ProfilePicture = new QPushButton(HomePage);
        ProfilePicture->setObjectName("ProfilePicture");
        ProfilePicture->setGeometry(QRect(1120, 10, 50, 50));
        ProfilePicture->setCursor(QCursor(Qt::PointingHandCursor));
        ProfilePicture->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:black;}"));
        ProfilePicture->setIconSize(QSize(50, 50));
        house = new QPushButton(HomePage);
        house->setObjectName("house");
        house->setGeometry(QRect(80, 10, 50, 50));
        QFont font;
        font.setPointSize(15);
        house->setFont(font);
        house->setCursor(QCursor(Qt::PointingHandCursor));
        house->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:black;}"));
        house->setIconSize(QSize(50, 50));
        logo = new QLabel(HomePage);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(10, 10, 50, 50));
        logo->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"}"));
        logo->setScaledContents(true);
        searchbtn = new QPushButton(HomePage);
        searchbtn->setObjectName("searchbtn");
        searchbtn->setGeometry(QRect(1050, 10, 50, 50));
        searchbtn->setCursor(QCursor(Qt::PointingHandCursor));
        searchbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:black;}"));
        searchbtn->setIconSize(QSize(50, 50));
        gearbtn = new QPushButton(HomePage);
        gearbtn->setObjectName("gearbtn");
        gearbtn->setGeometry(QRect(980, 10, 50, 50));
        gearbtn->setCursor(QCursor(Qt::PointingHandCursor));
        gearbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:black;}"));
        gearbtn->setIconSize(QSize(50, 50));
        brightnessmodebtn = new QPushButton(HomePage);
        brightnessmodebtn->setObjectName("brightnessmodebtn");
        brightnessmodebtn->setGeometry(QRect(910, 10, 50, 50));
        brightnessmodebtn->setCursor(QCursor(Qt::PointingHandCursor));
        brightnessmodebtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:black;}"));
        brightnessmodebtn->setIconSize(QSize(50, 50));
        searchbar = new QLineEdit(HomePage);
        searchbar->setObjectName("searchbar");
        searchbar->setGeometry(QRect(270, 20, 561, 41));
        searchbar->setStyleSheet(QString::fromUtf8("QObject\n"
"{\n"
"background-color:grey;\n"
"color:black;\n"
"}"));
        foryoulabel = new QLabel(HomePage);
        foryoulabel->setObjectName("foryoulabel");
        foryoulabel->setGeometry(QRect(30, 130, 131, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        foryoulabel->setFont(font1);
        foryoubox = new QGroupBox(HomePage);
        foryoubox->setObjectName("foryoubox");
        foryoubox->setGeometry(QRect(100, 170, 1041, 281));
        foryoubox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background:none;\n"
"border:none;\n"
"}"));
        moviebtn = new QPushButton(foryoubox);
        moviebtn->setObjectName("moviebtn");
        moviebtn->setGeometry(QRect(30, 60, 171, 171));
        moviebtn->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn->setIconSize(QSize(30, 60));
        moviebtn_2 = new QPushButton(foryoubox);
        moviebtn_2->setObjectName("moviebtn_2");
        moviebtn_2->setGeometry(QRect(280, 60, 171, 171));
        moviebtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_2->setIconSize(QSize(30, 60));
        moviebtn_3 = new QPushButton(foryoubox);
        moviebtn_3->setObjectName("moviebtn_3");
        moviebtn_3->setGeometry(QRect(560, 60, 171, 171));
        moviebtn_3->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_3->setIconSize(QSize(30, 60));
        moviebtn_4 = new QPushButton(foryoubox);
        moviebtn_4->setObjectName("moviebtn_4");
        moviebtn_4->setGeometry(QRect(800, 60, 171, 171));
        moviebtn_4->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_4->setIconSize(QSize(30, 60));
        leftbtn = new QPushButton(HomePage);
        leftbtn->setObjectName("leftbtn");
        leftbtn->setGeometry(QRect(20, 250, 80, 80));
        leftbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:black;\n"
"border:none;\n"
"}"));
        leftbtn->setIconSize(QSize(80, 80));
        rightbtn = new QPushButton(HomePage);
        rightbtn->setObjectName("rightbtn");
        rightbtn->setGeometry(QRect(1140, 250, 80, 80));
        rightbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:black;\n"
"border:none;\n"
"}"));
        rightbtn->setIconSize(QSize(80, 80));
        foryoubox_2 = new QGroupBox(HomePage);
        foryoubox_2->setObjectName("foryoubox_2");
        foryoubox_2->setGeometry(QRect(100, 170, 1041, 281));
        foryoubox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background:none;\n"
"border:none;\n"
"}"));
        moviebtn_5 = new QPushButton(foryoubox_2);
        moviebtn_5->setObjectName("moviebtn_5");
        moviebtn_5->setGeometry(QRect(30, 60, 171, 171));
        moviebtn_5->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_5->setIconSize(QSize(30, 60));
        moviebtn_6 = new QPushButton(foryoubox_2);
        moviebtn_6->setObjectName("moviebtn_6");
        moviebtn_6->setGeometry(QRect(280, 60, 171, 171));
        moviebtn_6->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_6->setIconSize(QSize(30, 60));
        moviebtn_7 = new QPushButton(foryoubox_2);
        moviebtn_7->setObjectName("moviebtn_7");
        moviebtn_7->setGeometry(QRect(560, 60, 171, 171));
        moviebtn_7->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_7->setIconSize(QSize(30, 60));
        moviebtn_8 = new QPushButton(foryoubox_2);
        moviebtn_8->setObjectName("moviebtn_8");
        moviebtn_8->setGeometry(QRect(800, 60, 171, 171));
        moviebtn_8->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_8->setIconSize(QSize(30, 60));
        recentgroupbox = new QGroupBox(HomePage);
        recentgroupbox->setObjectName("recentgroupbox");
        recentgroupbox->setGeometry(QRect(100, 490, 1041, 281));
        recentgroupbox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background:none;\n"
"border:none;\n"
"}"));
        moviebtn_9 = new QPushButton(recentgroupbox);
        moviebtn_9->setObjectName("moviebtn_9");
        moviebtn_9->setGeometry(QRect(30, 60, 171, 171));
        moviebtn_9->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_9->setIconSize(QSize(30, 60));
        moviebtn_10 = new QPushButton(recentgroupbox);
        moviebtn_10->setObjectName("moviebtn_10");
        moviebtn_10->setGeometry(QRect(280, 60, 171, 171));
        moviebtn_10->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_10->setIconSize(QSize(30, 60));
        moviebtn_11 = new QPushButton(recentgroupbox);
        moviebtn_11->setObjectName("moviebtn_11");
        moviebtn_11->setGeometry(QRect(560, 60, 171, 171));
        moviebtn_11->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_11->setIconSize(QSize(30, 60));
        moviebtn_12 = new QPushButton(recentgroupbox);
        moviebtn_12->setObjectName("moviebtn_12");
        moviebtn_12->setGeometry(QRect(800, 60, 171, 171));
        moviebtn_12->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_12->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_12->setIconSize(QSize(30, 60));
        foryoulabel_2 = new QLabel(HomePage);
        foryoulabel_2->setObjectName("foryoulabel_2");
        foryoulabel_2->setGeometry(QRect(20, 440, 131, 31));
        foryoulabel_2->setFont(font1);
        rightbtn_2 = new QPushButton(HomePage);
        rightbtn_2->setObjectName("rightbtn_2");
        rightbtn_2->setGeometry(QRect(1140, 590, 80, 80));
        rightbtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:black;\n"
"border:none;\n"
"}"));
        rightbtn_2->setIconSize(QSize(80, 80));
        leftbtn_2 = new QPushButton(HomePage);
        leftbtn_2->setObjectName("leftbtn_2");
        leftbtn_2->setGeometry(QRect(20, 590, 80, 80));
        leftbtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:black;\n"
"border:none;\n"
"}"));
        leftbtn_2->setIconSize(QSize(80, 80));
        recentgroupbox_2 = new QGroupBox(HomePage);
        recentgroupbox_2->setObjectName("recentgroupbox_2");
        recentgroupbox_2->setGeometry(QRect(100, 490, 1041, 281));
        recentgroupbox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background:none;\n"
"border:none;\n"
"}"));
        moviebtn_17 = new QPushButton(recentgroupbox_2);
        moviebtn_17->setObjectName("moviebtn_17");
        moviebtn_17->setGeometry(QRect(30, 60, 171, 171));
        moviebtn_17->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_17->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_17->setIconSize(QSize(30, 60));
        moviebtn_18 = new QPushButton(recentgroupbox_2);
        moviebtn_18->setObjectName("moviebtn_18");
        moviebtn_18->setGeometry(QRect(280, 60, 171, 171));
        moviebtn_18->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_18->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_18->setIconSize(QSize(30, 60));
        moviebtn_19 = new QPushButton(recentgroupbox_2);
        moviebtn_19->setObjectName("moviebtn_19");
        moviebtn_19->setGeometry(QRect(560, 60, 171, 171));
        moviebtn_19->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_19->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_19->setIconSize(QSize(30, 60));
        moviebtn_20 = new QPushButton(recentgroupbox_2);
        moviebtn_20->setObjectName("moviebtn_20");
        moviebtn_20->setGeometry(QRect(800, 60, 171, 171));
        moviebtn_20->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_20->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:none;\n"
"height:80px;\n"
"width:50px;\n"
"\n"
"}"));
        moviebtn_20->setIconSize(QSize(30, 60));

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        ProfilePicture->setText(QString());
        house->setText(QString());
        logo->setText(QString());
        searchbtn->setText(QString());
        gearbtn->setText(QString());
        brightnessmodebtn->setText(QString());
        foryoulabel->setText(QCoreApplication::translate("HomePage", "For You", nullptr));
        moviebtn->setText(QCoreApplication::translate("HomePage", "movie here", nullptr));
        moviebtn_2->setText(QCoreApplication::translate("HomePage", "movie here", nullptr));
        moviebtn_3->setText(QCoreApplication::translate("HomePage", "movie here", nullptr));
        moviebtn_4->setText(QCoreApplication::translate("HomePage", "movie here", nullptr));
        leftbtn->setText(QString());
        rightbtn->setText(QString());
        moviebtn_5->setText(QCoreApplication::translate("HomePage", "movie here 2", nullptr));
        moviebtn_6->setText(QCoreApplication::translate("HomePage", "movie here 2", nullptr));
        moviebtn_7->setText(QCoreApplication::translate("HomePage", "movie here 2", nullptr));
        moviebtn_8->setText(QCoreApplication::translate("HomePage", "movie here 2", nullptr));
        moviebtn_9->setText(QCoreApplication::translate("HomePage", "movie here 1", nullptr));
        moviebtn_10->setText(QCoreApplication::translate("HomePage", "movie here 1", nullptr));
        moviebtn_11->setText(QCoreApplication::translate("HomePage", "movie here 1", nullptr));
        moviebtn_12->setText(QCoreApplication::translate("HomePage", "movie here 1", nullptr));
        foryoulabel_2->setText(QCoreApplication::translate("HomePage", "Recent", nullptr));
        rightbtn_2->setText(QString());
        leftbtn_2->setText(QString());
        moviebtn_17->setText(QCoreApplication::translate("HomePage", "movie here 2", nullptr));
        moviebtn_18->setText(QCoreApplication::translate("HomePage", "movie here 2", nullptr));
        moviebtn_19->setText(QCoreApplication::translate("HomePage", "movie here 2", nullptr));
        moviebtn_20->setText(QCoreApplication::translate("HomePage", "movie here 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
