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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QPushButton *ProfilePicture;
    QPushButton *house;
    QLabel *logo;
    QPushButton *searchbtn;
    QPushButton *gearbtn;
    QLineEdit *searchbar;
    QLabel *foryoulabel;
    QGroupBox *foryoubox;
    QPushButton *moviebtn_1;
    QPushButton *moviebtn_2;
    QPushButton *moviebtn_3;
    QPushButton *moviebtn_4;
    QPushButton *leftbtn;
    QPushButton *rightbtn;
    QGroupBox *recentgroupbox;
    QPushButton *moviebtn_9;
    QPushButton *moviebtn_10;
    QPushButton *moviebtn_11;
    QPushButton *moviebtn_12;
    QLabel *recentlabel;
    QPushButton *rightbtn_2;
    QPushButton *leftbtn_2;
    QGroupBox *recentgroupbox_2;
    QPushButton *moviebtn_13;
    QPushButton *moviebtn_14;
    QPushButton *moviebtn_15;
    QPushButton *moviebtn_16;
    QLabel *castlabel;
    QLabel *movienameforhome;
    QPushButton *onepage;
    QPushButton *twopage;
    QGroupBox *toprategroupbox;
    QLabel *highrated;
    QPushButton *pushButton;
    QPushButton *topratemovie_1;
    QPushButton *topratemovie_2;
    QPushButton *topratemovie_3;
    QPushButton *topratemovie_4;
    QPushButton *topleft;
    QPushButton *topright;
    QGroupBox *descriptionbox;
    QPushButton *moviedescbtn;
    QLabel *movienamelabel;
    QLabel *directorlabel;
    QPushButton *star;
    QPushButton *star2;
    QPushButton *star3;
    QPushButton *star4;
    QPushButton *star5;
    QPushButton *ratebtn;
    QTextEdit *description;
    QPushButton *pushButton_7;
    QTextEdit *directornames;
    QTextEdit *castnames;
    QLabel *label;
    QLabel *label_2;
    QLabel *directorlabel_2;
    QLabel *directorlabel_3;
    QTextEdit *genrelabel;
    QLabel *ratinglabel;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(1231, 867);
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        HomePage->setFont(font);
        HomePage->setStyleSheet(QString::fromUtf8("background:black;\n"
"border:none;"));
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
        QFont font1;
        font1.setPointSize(15);
        house->setFont(font1);
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
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(true);
        foryoulabel->setFont(font2);
        foryoubox = new QGroupBox(HomePage);
        foryoubox->setObjectName("foryoubox");
        foryoubox->setGeometry(QRect(100, 170, 1041, 281));
        foryoubox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background:none;\n"
"border:none;\n"
"}"));
        moviebtn_1 = new QPushButton(foryoubox);
        moviebtn_1->setObjectName("moviebtn_1");
        moviebtn_1->setGeometry(QRect(30, 60, 171, 171));
        moviebtn_1->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        moviebtn_1->setIconSize(QSize(30, 60));
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
        leftbtn->setCursor(QCursor(Qt::PointingHandCursor));
        leftbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:black;\n"
"border:none;\n"
"}"));
        leftbtn->setIconSize(QSize(80, 80));
        rightbtn = new QPushButton(HomePage);
        rightbtn->setObjectName("rightbtn");
        rightbtn->setGeometry(QRect(1140, 250, 80, 80));
        rightbtn->setCursor(QCursor(Qt::PointingHandCursor));
        rightbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:black;\n"
"border:none;\n"
"}"));
        rightbtn->setIconSize(QSize(80, 80));
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
        recentlabel = new QLabel(HomePage);
        recentlabel->setObjectName("recentlabel");
        recentlabel->setGeometry(QRect(20, 440, 131, 31));
        recentlabel->setFont(font2);
        rightbtn_2 = new QPushButton(HomePage);
        rightbtn_2->setObjectName("rightbtn_2");
        rightbtn_2->setGeometry(QRect(1140, 590, 80, 80));
        rightbtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        rightbtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:black;\n"
"border:none;\n"
"}"));
        rightbtn_2->setIconSize(QSize(80, 80));
        leftbtn_2 = new QPushButton(HomePage);
        leftbtn_2->setObjectName("leftbtn_2");
        leftbtn_2->setGeometry(QRect(20, 590, 80, 80));
        leftbtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        leftbtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:black;\n"
"border:none;\n"
"}"));
        leftbtn_2->setIconSize(QSize(80, 80));
        recentgroupbox_2 = new QGroupBox(HomePage);
        recentgroupbox_2->setObjectName("recentgroupbox_2");
        recentgroupbox_2->setGeometry(QRect(100, 480, 1041, 281));
        recentgroupbox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background:none;\n"
"border:none;\n"
"}"));
        moviebtn_13 = new QPushButton(recentgroupbox_2);
        moviebtn_13->setObjectName("moviebtn_13");
        moviebtn_13->setGeometry(QRect(30, 60, 171, 171));
        moviebtn_13->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_13->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        moviebtn_13->setIconSize(QSize(30, 60));
        moviebtn_14 = new QPushButton(recentgroupbox_2);
        moviebtn_14->setObjectName("moviebtn_14");
        moviebtn_14->setGeometry(QRect(280, 60, 171, 171));
        moviebtn_14->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_14->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        moviebtn_14->setIconSize(QSize(30, 60));
        moviebtn_15 = new QPushButton(recentgroupbox_2);
        moviebtn_15->setObjectName("moviebtn_15");
        moviebtn_15->setGeometry(QRect(560, 60, 171, 171));
        moviebtn_15->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_15->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        moviebtn_15->setIconSize(QSize(30, 60));
        moviebtn_16 = new QPushButton(recentgroupbox_2);
        moviebtn_16->setObjectName("moviebtn_16");
        moviebtn_16->setGeometry(QRect(800, 60, 171, 171));
        moviebtn_16->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_16->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        moviebtn_16->setIconSize(QSize(30, 60));
        castlabel = new QLabel(HomePage);
        castlabel->setObjectName("castlabel");
        castlabel->setGeometry(QRect(780, 740, 111, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Black")});
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setItalic(true);
        castlabel->setFont(font3);
        castlabel->setAlignment(Qt::AlignCenter);
        movienameforhome = new QLabel(HomePage);
        movienameforhome->setObjectName("movienameforhome");
        movienameforhome->setGeometry(QRect(900, 70, 271, 61));
        movienameforhome->setFont(font3);
        movienameforhome->setStyleSheet(QString::fromUtf8("border:none;"));
        movienameforhome->setAlignment(Qt::AlignCenter);
        onepage = new QPushButton(HomePage);
        onepage->setObjectName("onepage");
        onepage->setGeometry(QRect(510, 790, 54, 54));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        onepage->setFont(font4);
        onepage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid orange;\n"
"  border-radius: 25px; \n"
"        min-width: 50px;    \n"
"        min-height: 50px;    \n"
"        max-width: 50px;   \n"
"        max-height: 50px;   \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"\n"
"}"));
        twopage = new QPushButton(HomePage);
        twopage->setObjectName("twopage");
        twopage->setGeometry(QRect(580, 790, 54, 54));
        twopage->setFont(font4);
        twopage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid orange;\n"
"  border-radius: 25px; \n"
"        min-width: 50px;    \n"
"        min-height: 50px;    \n"
"        max-width: 50px;   \n"
"        max-height: 50px;   \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"\n"
"}"));
        toprategroupbox = new QGroupBox(HomePage);
        toprategroupbox->setObjectName("toprategroupbox");
        toprategroupbox->setGeometry(QRect(0, 70, 1231, 651));
        toprategroupbox->setStyleSheet(QString::fromUtf8("border:none;"));
        highrated = new QLabel(toprategroupbox);
        highrated->setObjectName("highrated");
        highrated->setGeometry(QRect(40, 20, 171, 51));
        QFont font5;
        font5.setPointSize(25);
        font5.setBold(true);
        font5.setItalic(true);
        highrated->setFont(font5);
        pushButton = new QPushButton(toprategroupbox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 140, 171, 181));
        topratemovie_1 = new QPushButton(toprategroupbox);
        topratemovie_1->setObjectName("topratemovie_1");
        topratemovie_1->setGeometry(QRect(170, 250, 151, 191));
        topratemovie_1->setStyleSheet(QString::fromUtf8(""));
        topratemovie_2 = new QPushButton(toprategroupbox);
        topratemovie_2->setObjectName("topratemovie_2");
        topratemovie_2->setGeometry(QRect(400, 250, 151, 191));
        topratemovie_2->setStyleSheet(QString::fromUtf8(""));
        topratemovie_3 = new QPushButton(toprategroupbox);
        topratemovie_3->setObjectName("topratemovie_3");
        topratemovie_3->setGeometry(QRect(640, 250, 151, 191));
        topratemovie_3->setStyleSheet(QString::fromUtf8(""));
        topratemovie_4 = new QPushButton(toprategroupbox);
        topratemovie_4->setObjectName("topratemovie_4");
        topratemovie_4->setGeometry(QRect(870, 250, 151, 191));
        topratemovie_4->setStyleSheet(QString::fromUtf8(""));
        topleft = new QPushButton(toprategroupbox);
        topleft->setObjectName("topleft");
        topleft->setGeometry(QRect(50, 293, 71, 71));
        topleft->setStyleSheet(QString::fromUtf8(""));
        topright = new QPushButton(toprategroupbox);
        topright->setObjectName("topright");
        topright->setGeometry(QRect(1070, 300, 71, 71));
        topright->setStyleSheet(QString::fromUtf8(""));
        descriptionbox = new QGroupBox(HomePage);
        descriptionbox->setObjectName("descriptionbox");
        descriptionbox->setGeometry(QRect(35, 104, 1201, 581));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        descriptionbox->setFont(font6);
        descriptionbox->setStyleSheet(QString::fromUtf8("\n"
"border-radius:orange;"));
        moviedescbtn = new QPushButton(descriptionbox);
        moviedescbtn->setObjectName("moviedescbtn");
        moviedescbtn->setGeometry(QRect(20, 110, 241, 361));
        moviedescbtn->setCursor(QCursor(Qt::PointingHandCursor));
        moviedescbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"height:60px;\n"
"width:30px;\n"
"border:2px solid orange;\n"
"}\n"
""));
        moviedescbtn->setIconSize(QSize(281, 271));
        movienamelabel = new QLabel(descriptionbox);
        movienamelabel->setObjectName("movienamelabel");
        movienamelabel->setGeometry(QRect(840, 30, 271, 61));
        movienamelabel->setFont(font3);
        movienamelabel->setStyleSheet(QString::fromUtf8("border:none;"));
        movienamelabel->setAlignment(Qt::AlignCenter);
        directorlabel = new QLabel(descriptionbox);
        directorlabel->setObjectName("directorlabel");
        directorlabel->setGeometry(QRect(350, 360, 91, 41));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial Black")});
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setItalic(true);
        directorlabel->setFont(font7);
        directorlabel->setAlignment(Qt::AlignCenter);
        star = new QPushButton(descriptionbox);
        star->setObjectName("star");
        star->setGeometry(QRect(190, 500, 61, 51));
        star->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        star2 = new QPushButton(descriptionbox);
        star2->setObjectName("star2");
        star2->setGeometry(QRect(270, 500, 61, 51));
        star2->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        star3 = new QPushButton(descriptionbox);
        star3->setObjectName("star3");
        star3->setGeometry(QRect(350, 500, 61, 51));
        star3->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        star4 = new QPushButton(descriptionbox);
        star4->setObjectName("star4");
        star4->setGeometry(QRect(430, 500, 61, 51));
        star4->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        star5 = new QPushButton(descriptionbox);
        star5->setObjectName("star5");
        star5->setGeometry(QRect(510, 500, 61, 51));
        QFont font8;
        font8.setPointSize(13);
        star5->setFont(font8);
        star5->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        ratebtn = new QPushButton(descriptionbox);
        ratebtn->setObjectName("ratebtn");
        ratebtn->setGeometry(QRect(620, 490, 131, 61));
        ratebtn->setFont(font8);
        ratebtn->setCursor(QCursor(Qt::PointingHandCursor));
        ratebtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:none;\n"
"border:2px solid orange;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"}"));
        description = new QTextEdit(descriptionbox);
        description->setObjectName("description");
        description->setGeometry(QRect(360, 130, 621, 151));
        description->setFont(font6);
        description->setStyleSheet(QString::fromUtf8("\n"
"border-radius:10px;"));
        description->setReadOnly(true);
        pushButton_7 = new QPushButton(descriptionbox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 10, 131, 41));
        QFont font9;
        font9.setPointSize(13);
        font9.setBold(true);
        pushButton_7->setFont(font9);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:none;\n"
"border:2px solid orange;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"}"));
        directornames = new QTextEdit(descriptionbox);
        directornames->setObjectName("directornames");
        directornames->setGeometry(QRect(450, 370, 541, 31));
        directornames->setFont(font6);
        directornames->setStyleSheet(QString::fromUtf8("\n"
"border-radius:10px;"));
        directornames->setReadOnly(true);
        castnames = new QTextEdit(descriptionbox);
        castnames->setObjectName("castnames");
        castnames->setGeometry(QRect(450, 430, 541, 31));
        castnames->setFont(font6);
        castnames->setStyleSheet(QString::fromUtf8("\n"
"border-radius:10px;"));
        castnames->setReadOnly(true);
        label = new QLabel(descriptionbox);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 90, 101, 31));
        QFont font10;
        font10.setPointSize(10);
        font10.setBold(true);
        font10.setItalic(true);
        label->setFont(font10);
        label_2 = new QLabel(descriptionbox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(800, 20, 16, 81));
        label_2->setStyleSheet(QString::fromUtf8("background:orange;"));
        directorlabel_2 = new QLabel(descriptionbox);
        directorlabel_2->setObjectName("directorlabel_2");
        directorlabel_2->setGeometry(QRect(350, 420, 91, 41));
        directorlabel_2->setFont(font7);
        directorlabel_2->setAlignment(Qt::AlignCenter);
        directorlabel_3 = new QLabel(descriptionbox);
        directorlabel_3->setObjectName("directorlabel_3");
        directorlabel_3->setGeometry(QRect(350, 300, 91, 41));
        directorlabel_3->setFont(font7);
        directorlabel_3->setAlignment(Qt::AlignCenter);
        genrelabel = new QTextEdit(descriptionbox);
        genrelabel->setObjectName("genrelabel");
        genrelabel->setGeometry(QRect(450, 310, 541, 31));
        genrelabel->setFont(font6);
        genrelabel->setStyleSheet(QString::fromUtf8("\n"
"border-radius:10px;"));
        genrelabel->setReadOnly(true);
        ratinglabel = new QLabel(descriptionbox);
        ratinglabel->setObjectName("ratinglabel");
        ratinglabel->setGeometry(QRect(870, 500, 261, 41));
        QFont font11;
        font11.setPointSize(10);
        ratinglabel->setFont(font11);
        ratinglabel->setStyleSheet(QString::fromUtf8(""));

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
        foryoulabel->setText(QCoreApplication::translate("HomePage", "For You", nullptr));
        moviebtn_1->setText(QString());
        moviebtn_2->setText(QString());
        moviebtn_3->setText(QString());
        moviebtn_4->setText(QString());
        leftbtn->setText(QString());
        rightbtn->setText(QString());
        moviebtn_9->setText(QString());
        moviebtn_10->setText(QString());
        moviebtn_11->setText(QString());
        moviebtn_12->setText(QString());
        recentlabel->setText(QCoreApplication::translate("HomePage", "Recent", nullptr));
        rightbtn_2->setText(QString());
        leftbtn_2->setText(QString());
        moviebtn_13->setText(QString());
        moviebtn_14->setText(QString());
        moviebtn_15->setText(QString());
        moviebtn_16->setText(QString());
        castlabel->setText(QString());
        movienameforhome->setText(QString());
        onepage->setText(QCoreApplication::translate("HomePage", "1", nullptr));
        twopage->setText(QCoreApplication::translate("HomePage", "2", nullptr));
        toprategroupbox->setTitle(QString());
        highrated->setText(QCoreApplication::translate("HomePage", "Top Rated", nullptr));
        pushButton->setText(QString());
        topratemovie_1->setText(QString());
        topratemovie_2->setText(QString());
        topratemovie_3->setText(QString());
        topratemovie_4->setText(QString());
        topleft->setText(QString());
        topright->setText(QString());
        descriptionbox->setTitle(QString());
        moviedescbtn->setText(QString());
        movienamelabel->setText(QString());
        directorlabel->setText(QCoreApplication::translate("HomePage", "Director:", nullptr));
        star->setText(QString());
        star2->setText(QString());
        star3->setText(QString());
        star4->setText(QString());
        star5->setText(QString());
        ratebtn->setText(QCoreApplication::translate("HomePage", "Rate", nullptr));
        pushButton_7->setText(QCoreApplication::translate("HomePage", "Close", nullptr));
        label->setText(QCoreApplication::translate("HomePage", "overview:", nullptr));
        label_2->setText(QString());
        directorlabel_2->setText(QCoreApplication::translate("HomePage", "Casts:", nullptr));
        directorlabel_3->setText(QCoreApplication::translate("HomePage", "Genre:", nullptr));
        ratinglabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
