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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
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
    QGroupBox *foryoubox;
    QPushButton *moviebtn_1;
    QPushButton *rightbtn;
    QPushButton *leftbtn;
    QPushButton *moviebtn_2;
    QPushButton *moviebtn_3;
    QPushButton *moviebtn_4;
    QGroupBox *recentgroupbox;
    QPushButton *moviebtn_9;
    QPushButton *moviebtn_11;
    QPushButton *moviebtn_12;
    QPushButton *moviebtn_10;
    QPushButton *rightbtn_2;
    QPushButton *leftbtn_2;
    QGroupBox *descriptionbox;
    QPushButton *moviedescbtn;
    QLabel *movienamelabel;
    QPushButton *star;
    QPushButton *star2;
    QPushButton *star3;
    QPushButton *star4;
    QPushButton *star5;
    QPushButton *ratebtn;
    QTextEdit *description;
    QPushButton *pushButton_7;
    QLabel *ratinglabel;
    QPushButton *moviedescbtn_2;
    QFrame *Line;
    QLabel *moviesText;
    QPushButton *onepage;
    QPushButton *twopage;
    QPushButton *threepage;
    QGroupBox *toprategroupbox;
    QPushButton *topleft;
    QPushButton *topright;
    QPushButton *topratemovie_3;
    QPushButton *topratemovie_2;
    QPushButton *topratemovie_1;
    QPushButton *topratemovie_4;
    QGroupBox *searchbox;
    QPushButton *searchleftbtn;
    QPushButton *searchrightbtn;
    QPushButton *searchmoviebtn_1;
    QPushButton *searchmoviebtn_2;
    QPushButton *searchmoviebtn_3;
    QPushButton *searchmoviebtn_4;
    QPushButton *searchmoviebtn_5;
    QPushButton *searchmoviebtn_6;
    QPushButton *searchmoviebtn_7;
    QPushButton *searchmoviebtn_8;
    QLabel *bg;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(1200, 750);
        HomePage->setMinimumSize(QSize(1200, 750));
        HomePage->setMaximumSize(QSize(1200, 750));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        HomePage->setFont(font);
        HomePage->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        ProfilePicture = new QPushButton(HomePage);
        ProfilePicture->setObjectName("ProfilePicture");
        ProfilePicture->setGeometry(QRect(1120, 55, 50, 50));
        ProfilePicture->setCursor(QCursor(Qt::PointingHandCursor));
        ProfilePicture->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/userrr.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProfilePicture->setIcon(icon);
        ProfilePicture->setIconSize(QSize(50, 50));
        house = new QPushButton(HomePage);
        house->setObjectName("house");
        house->setGeometry(QRect(1050, 55, 50, 50));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        house->setFont(font1);
        house->setCursor(QCursor(Qt::PointingHandCursor));
        house->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/signout.png"), QSize(), QIcon::Normal, QIcon::Off);
        house->setIcon(icon1);
        house->setIconSize(QSize(50, 50));
        logo = new QLabel(HomePage);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(30, 30, 120, 110));
        logo->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"}"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/MM Transparent BG.png")));
        logo->setScaledContents(true);
        searchbtn = new QPushButton(HomePage);
        searchbtn->setObjectName("searchbtn");
        searchbtn->setGeometry(QRect(890, 55, 50, 50));
        searchbtn->setCursor(QCursor(Qt::PointingHandCursor));
        searchbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchbtn->setIcon(icon2);
        searchbtn->setIconSize(QSize(50, 50));
        gearbtn = new QPushButton(HomePage);
        gearbtn->setObjectName("gearbtn");
        gearbtn->setGeometry(QRect(970, 55, 50, 50));
        gearbtn->setCursor(QCursor(Qt::PointingHandCursor));
        gearbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/SettingsGlow.png"), QSize(), QIcon::Normal, QIcon::Off);
        gearbtn->setIcon(icon3);
        gearbtn->setIconSize(QSize(50, 50));
        searchbar = new QLineEdit(HomePage);
        searchbar->setObjectName("searchbar");
        searchbar->setGeometry(QRect(250, 60, 600, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(true);
        searchbar->setFont(font2);
        searchbar->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color:rgb(225,225,225);\n"
"border:none;\n"
"border-radius:20px;\n"
"color:black;\n"
"}"));
        foryoubox = new QGroupBox(HomePage);
        foryoubox->setObjectName("foryoubox");
        foryoubox->setGeometry(QRect(30, 249, 1141, 491));
        foryoubox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background:none;\n"
"border:none;\n"
"}"));
        moviebtn_1 = new QPushButton(foryoubox);
        moviebtn_1->setObjectName("moviebtn_1");
        moviebtn_1->setGeometry(QRect(90, 80, 204, 304));
        moviebtn_1->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        moviebtn_1->setIconSize(QSize(30, 60));
        rightbtn = new QPushButton(foryoubox);
        rightbtn->setObjectName("rightbtn");
        rightbtn->setGeometry(QRect(1070, 200, 60, 60));
        rightbtn->setCursor(QCursor(Qt::PointingHandCursor));
        rightbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:none;;\n"
"border:none;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Next_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightbtn->setIcon(icon4);
        rightbtn->setIconSize(QSize(50, 50));
        leftbtn = new QPushButton(foryoubox);
        leftbtn->setObjectName("leftbtn");
        leftbtn->setGeometry(QRect(10, 200, 60, 60));
        leftbtn->setCursor(QCursor(Qt::PointingHandCursor));
        leftbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:none;\n"
"border:none;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Previous_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftbtn->setIcon(icon5);
        leftbtn->setIconSize(QSize(50, 50));
        moviebtn_2 = new QPushButton(foryoubox);
        moviebtn_2->setObjectName("moviebtn_2");
        moviebtn_2->setGeometry(QRect(340, 80, 204, 304));
        moviebtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        moviebtn_2->setIconSize(QSize(30, 60));
        moviebtn_3 = new QPushButton(foryoubox);
        moviebtn_3->setObjectName("moviebtn_3");
        moviebtn_3->setGeometry(QRect(590, 80, 204, 304));
        moviebtn_3->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        moviebtn_3->setIconSize(QSize(30, 60));
        moviebtn_4 = new QPushButton(foryoubox);
        moviebtn_4->setObjectName("moviebtn_4");
        moviebtn_4->setGeometry(QRect(840, 80, 204, 304));
        moviebtn_4->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        moviebtn_4->setIconSize(QSize(30, 60));
        recentgroupbox = new QGroupBox(HomePage);
        recentgroupbox->setObjectName("recentgroupbox");
        recentgroupbox->setGeometry(QRect(20, 260, 1141, 500));
        recentgroupbox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background:none;\n"
"border:none;\n"
"}"));
        moviebtn_9 = new QPushButton(recentgroupbox);
        moviebtn_9->setObjectName("moviebtn_9");
        moviebtn_9->setGeometry(QRect(100, 70, 204, 304));
        moviebtn_9->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        moviebtn_9->setIconSize(QSize(30, 60));
        moviebtn_11 = new QPushButton(recentgroupbox);
        moviebtn_11->setObjectName("moviebtn_11");
        moviebtn_11->setGeometry(QRect(600, 70, 204, 304));
        moviebtn_11->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        moviebtn_11->setIconSize(QSize(30, 60));
        moviebtn_12 = new QPushButton(recentgroupbox);
        moviebtn_12->setObjectName("moviebtn_12");
        moviebtn_12->setGeometry(QRect(850, 70, 204, 304));
        moviebtn_12->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_12->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        moviebtn_12->setIconSize(QSize(30, 60));
        moviebtn_10 = new QPushButton(recentgroupbox);
        moviebtn_10->setObjectName("moviebtn_10");
        moviebtn_10->setGeometry(QRect(350, 70, 204, 304));
        moviebtn_10->setCursor(QCursor(Qt::PointingHandCursor));
        moviebtn_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        moviebtn_10->setIconSize(QSize(30, 60));
        rightbtn_2 = new QPushButton(recentgroupbox);
        rightbtn_2->setObjectName("rightbtn_2");
        rightbtn_2->setGeometry(QRect(1080, 190, 60, 60));
        rightbtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        rightbtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:none;\n"
"border:none;\n"
"}"));
        rightbtn_2->setIcon(icon4);
        rightbtn_2->setIconSize(QSize(50, 50));
        leftbtn_2 = new QPushButton(recentgroupbox);
        leftbtn_2->setObjectName("leftbtn_2");
        leftbtn_2->setGeometry(QRect(20, 190, 60, 60));
        leftbtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        leftbtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:none;\n"
"border:none;\n"
"}"));
        leftbtn_2->setIcon(icon5);
        leftbtn_2->setIconSize(QSize(50, 50));
        descriptionbox = new QGroupBox(HomePage);
        descriptionbox->setObjectName("descriptionbox");
        descriptionbox->setGeometry(QRect(40, 150, 1120, 571));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        descriptionbox->setFont(font3);
        descriptionbox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 220);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        moviedescbtn = new QPushButton(descriptionbox);
        moviedescbtn->setObjectName("moviedescbtn");
        moviedescbtn->setGeometry(QRect(30, 30, 244, 364));
        moviedescbtn->setCursor(QCursor(Qt::PointingHandCursor));
        moviedescbtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"height:60px;\n"
"width:30px;\n"
"border:2px solid rgb(194, 194, 194);\n"
"border-radius:0px;\n"
"}\n"
""));
        moviedescbtn->setIconSize(QSize(200, 300));
        movienamelabel = new QLabel(descriptionbox);
        movienamelabel->setObjectName("movienamelabel");
        movienamelabel->setGeometry(QRect(290, 20, 801, 61));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setItalic(false);
        movienamelabel->setFont(font4);
        movienamelabel->setStyleSheet(QString::fromUtf8("border:none;"));
        movienamelabel->setAlignment(Qt::AlignCenter);
        star = new QPushButton(descriptionbox);
        star->setObjectName("star");
        star->setGeometry(QRect(60, 450, 30, 30));
        star->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        star2 = new QPushButton(descriptionbox);
        star2->setObjectName("star2");
        star2->setGeometry(QRect(100, 450, 30, 30));
        star2->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        star3 = new QPushButton(descriptionbox);
        star3->setObjectName("star3");
        star3->setGeometry(QRect(140, 450, 30, 30));
        star3->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        star4 = new QPushButton(descriptionbox);
        star4->setObjectName("star4");
        star4->setGeometry(QRect(180, 450, 30, 30));
        star4->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        star5 = new QPushButton(descriptionbox);
        star5->setObjectName("star5");
        star5->setGeometry(QRect(220, 450, 30, 30));
        QFont font5;
        font5.setPointSize(13);
        star5->setFont(font5);
        star5->setStyleSheet(QString::fromUtf8("\n"
"border:none;"));
        ratebtn = new QPushButton(descriptionbox);
        ratebtn->setObjectName("ratebtn");
        ratebtn->setGeometry(QRect(100, 490, 111, 41));
        ratebtn->setFont(font5);
        ratebtn->setCursor(QCursor(Qt::PointingHandCursor));
        ratebtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:none;\n"
"border:2px solid rgb(230, 149, 40);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:rgb(230, 149, 40);\n"
"}"));
        description = new QTextEdit(descriptionbox);
        description->setObjectName("description");
        description->setGeometry(QRect(290, 90, 811, 371));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(false);
        description->setFont(font6);
        description->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        description->setReadOnly(true);
        pushButton_7 = new QPushButton(descriptionbox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(950, 500, 131, 41));
        QFont font7;
        font7.setPointSize(13);
        font7.setBold(true);
        pushButton_7->setFont(font7);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:none;\n"
"border:2px solid rgb(230, 149, 40);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:rgb(230, 149, 40);\n"
"}"));
        ratinglabel = new QLabel(descriptionbox);
        ratinglabel->setObjectName("ratinglabel");
        ratinglabel->setGeometry(QRect(30, 400, 241, 41));
        QFont font8;
        font8.setPointSize(10);
        ratinglabel->setFont(font8);
        ratinglabel->setStyleSheet(QString::fromUtf8(""));
        ratinglabel->setAlignment(Qt::AlignCenter);
        moviedescbtn_2 = new QPushButton(descriptionbox);
        moviedescbtn_2->setObjectName("moviedescbtn_2");
        moviedescbtn_2->setGeometry(QRect(30, 30, 244, 364));
        moviedescbtn_2->setCursor(QCursor(Qt::ArrowCursor));
        moviedescbtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"height:60px;\n"
"width:30px;\n"
"border:2px solid rgb(194, 194, 194);\n"
"border-radius:0px;\n"
"}\n"
""));
        moviedescbtn_2->setIconSize(QSize(200, 300));
        Line = new QFrame(HomePage);
        Line->setObjectName("Line");
        Line->setGeometry(QRect(40, 160, 10, 60));
        Line->setStyleSheet(QString::fromUtf8("background-color:rgba(230, 149, 40, 200);\n"
"border:none;"));
        Line->setFrameShape(QFrame::Shape::VLine);
        Line->setFrameShadow(QFrame::Shadow::Sunken);
        moviesText = new QLabel(HomePage);
        moviesText->setObjectName("moviesText");
        moviesText->setGeometry(QRect(70, 160, 210, 70));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font9.setPointSize(40);
        font9.setBold(true);
        moviesText->setFont(font9);
        moviesText->setStyleSheet(QString::fromUtf8("color:rgb(200, 200 200);"));
        onepage = new QPushButton(HomePage);
        onepage->setObjectName("onepage");
        onepage->setGeometry(QRect(330, 170, 180, 50));
        QFont font10;
        font10.setPointSize(15);
        font10.setBold(true);
        onepage->setFont(font10);
        onepage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-top-left-radius:25px;    \n"
"border-bottom-left-radius:25px;    \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"\n"
"}"));
        twopage = new QPushButton(HomePage);
        twopage->setObjectName("twopage");
        twopage->setGeometry(QRect(510, 170, 180, 50));
        twopage->setFont(font10);
        twopage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"\n"
"      \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"\n"
"}"));
        threepage = new QPushButton(HomePage);
        threepage->setObjectName("threepage");
        threepage->setGeometry(QRect(690, 170, 180, 50));
        threepage->setFont(font10);
        threepage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-top-right-radius:25px;\n"
"border-bottom-right-radius:25px;    \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:orange;\n"
"\n"
"}"));
        toprategroupbox = new QGroupBox(HomePage);
        toprategroupbox->setObjectName("toprategroupbox");
        toprategroupbox->setGeometry(QRect(30, 259, 1150, 511));
        toprategroupbox->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;\n"
""));
        topleft = new QPushButton(toprategroupbox);
        topleft->setObjectName("topleft");
        topleft->setGeometry(QRect(10, 190, 60, 60));
        topleft->setCursor(QCursor(Qt::PointingHandCursor));
        topleft->setStyleSheet(QString::fromUtf8("background:none;"));
        topleft->setIcon(icon5);
        topleft->setIconSize(QSize(50, 50));
        topright = new QPushButton(toprategroupbox);
        topright->setObjectName("topright");
        topright->setGeometry(QRect(1070, 190, 60, 60));
        topright->setCursor(QCursor(Qt::PointingHandCursor));
        topright->setStyleSheet(QString::fromUtf8("background:none;"));
        topright->setIcon(icon4);
        topright->setIconSize(QSize(50, 50));
        topratemovie_3 = new QPushButton(toprategroupbox);
        topratemovie_3->setObjectName("topratemovie_3");
        topratemovie_3->setGeometry(QRect(590, 70, 204, 304));
        topratemovie_3->setCursor(QCursor(Qt::PointingHandCursor));
        topratemovie_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        topratemovie_3->setIconSize(QSize(30, 60));
        topratemovie_2 = new QPushButton(toprategroupbox);
        topratemovie_2->setObjectName("topratemovie_2");
        topratemovie_2->setGeometry(QRect(340, 70, 204, 304));
        topratemovie_2->setCursor(QCursor(Qt::PointingHandCursor));
        topratemovie_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        topratemovie_2->setIconSize(QSize(30, 60));
        topratemovie_1 = new QPushButton(toprategroupbox);
        topratemovie_1->setObjectName("topratemovie_1");
        topratemovie_1->setGeometry(QRect(90, 70, 204, 304));
        topratemovie_1->setCursor(QCursor(Qt::PointingHandCursor));
        topratemovie_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        topratemovie_1->setIconSize(QSize(30, 60));
        topratemovie_4 = new QPushButton(toprategroupbox);
        topratemovie_4->setObjectName("topratemovie_4");
        topratemovie_4->setGeometry(QRect(840, 70, 204, 304));
        topratemovie_4->setCursor(QCursor(Qt::PointingHandCursor));
        topratemovie_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        topratemovie_4->setIconSize(QSize(30, 60));
        searchbox = new QGroupBox(HomePage);
        searchbox->setObjectName("searchbox");
        searchbox->setGeometry(QRect(20, 180, 1140, 541));
        searchbox->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        searchleftbtn = new QPushButton(searchbox);
        searchleftbtn->setObjectName("searchleftbtn");
        searchleftbtn->setGeometry(QRect(180, 230, 60, 60));
        searchleftbtn->setCursor(QCursor(Qt::PointingHandCursor));
        searchleftbtn->setStyleSheet(QString::fromUtf8("background:none;"));
        searchleftbtn->setIcon(icon5);
        searchleftbtn->setIconSize(QSize(50, 50));
        searchrightbtn = new QPushButton(searchbox);
        searchrightbtn->setObjectName("searchrightbtn");
        searchrightbtn->setGeometry(QRect(970, 230, 60, 60));
        searchrightbtn->setCursor(QCursor(Qt::PointingHandCursor));
        searchrightbtn->setStyleSheet(QString::fromUtf8("background:none;"));
        searchrightbtn->setIcon(icon4);
        searchrightbtn->setIconSize(QSize(50, 50));
        searchmoviebtn_1 = new QPushButton(searchbox);
        searchmoviebtn_1->setObjectName("searchmoviebtn_1");
        searchmoviebtn_1->setGeometry(QRect(270, 40, 137, 204));
        searchmoviebtn_1->setCursor(QCursor(Qt::PointingHandCursor));
        searchmoviebtn_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        searchmoviebtn_1->setIconSize(QSize(30, 60));
        searchmoviebtn_2 = new QPushButton(searchbox);
        searchmoviebtn_2->setObjectName("searchmoviebtn_2");
        searchmoviebtn_2->setGeometry(QRect(450, 40, 137, 204));
        searchmoviebtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        searchmoviebtn_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        searchmoviebtn_2->setIconSize(QSize(30, 60));
        searchmoviebtn_3 = new QPushButton(searchbox);
        searchmoviebtn_3->setObjectName("searchmoviebtn_3");
        searchmoviebtn_3->setGeometry(QRect(630, 40, 137, 204));
        searchmoviebtn_3->setCursor(QCursor(Qt::PointingHandCursor));
        searchmoviebtn_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        searchmoviebtn_3->setIconSize(QSize(30, 60));
        searchmoviebtn_4 = new QPushButton(searchbox);
        searchmoviebtn_4->setObjectName("searchmoviebtn_4");
        searchmoviebtn_4->setGeometry(QRect(810, 40, 137, 204));
        searchmoviebtn_4->setCursor(QCursor(Qt::PointingHandCursor));
        searchmoviebtn_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        searchmoviebtn_4->setIconSize(QSize(30, 60));
        searchmoviebtn_5 = new QPushButton(searchbox);
        searchmoviebtn_5->setObjectName("searchmoviebtn_5");
        searchmoviebtn_5->setGeometry(QRect(270, 280, 137, 204));
        searchmoviebtn_5->setCursor(QCursor(Qt::PointingHandCursor));
        searchmoviebtn_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        searchmoviebtn_5->setIconSize(QSize(30, 60));
        searchmoviebtn_6 = new QPushButton(searchbox);
        searchmoviebtn_6->setObjectName("searchmoviebtn_6");
        searchmoviebtn_6->setGeometry(QRect(450, 280, 137, 204));
        searchmoviebtn_6->setCursor(QCursor(Qt::PointingHandCursor));
        searchmoviebtn_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        searchmoviebtn_6->setIconSize(QSize(30, 60));
        searchmoviebtn_7 = new QPushButton(searchbox);
        searchmoviebtn_7->setObjectName("searchmoviebtn_7");
        searchmoviebtn_7->setGeometry(QRect(630, 280, 137, 204));
        searchmoviebtn_7->setCursor(QCursor(Qt::PointingHandCursor));
        searchmoviebtn_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        searchmoviebtn_7->setIconSize(QSize(30, 60));
        searchmoviebtn_8 = new QPushButton(searchbox);
        searchmoviebtn_8->setObjectName("searchmoviebtn_8");
        searchmoviebtn_8->setGeometry(QRect(810, 280, 137, 204));
        searchmoviebtn_8->setCursor(QCursor(Qt::PointingHandCursor));
        searchmoviebtn_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"}\n"
"\n"
"QPushButton:Hover\n"
"{\n"
"border:2px solid orange;\n"
"}\n"
""));
        searchmoviebtn_8->setIconSize(QSize(30, 60));
        bg = new QLabel(HomePage);
        bg->setObjectName("bg");
        bg->setGeometry(QRect(0, 0, 1200, 750));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/backgrounduser.png")));
        bg->setScaledContents(true);
        bg->raise();
        ProfilePicture->raise();
        house->raise();
        logo->raise();
        searchbtn->raise();
        gearbtn->raise();
        searchbar->raise();
        Line->raise();
        moviesText->raise();
        onepage->raise();
        twopage->raise();
        threepage->raise();
        recentgroupbox->raise();
        toprategroupbox->raise();
        foryoubox->raise();
        searchbox->raise();
        descriptionbox->raise();

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
        searchbar->setPlaceholderText(QCoreApplication::translate("HomePage", "Search..", nullptr));
        moviebtn_1->setText(QString());
        rightbtn->setText(QString());
        leftbtn->setText(QString());
        moviebtn_2->setText(QString());
        moviebtn_3->setText(QString());
        moviebtn_4->setText(QString());
        moviebtn_9->setText(QString());
        moviebtn_11->setText(QString());
        moviebtn_12->setText(QString());
        moviebtn_10->setText(QString());
        rightbtn_2->setText(QString());
        leftbtn_2->setText(QString());
        descriptionbox->setTitle(QString());
        moviedescbtn->setText(QString());
        movienamelabel->setText(QCoreApplication::translate("HomePage", "Title", nullptr));
        star->setText(QString());
        star2->setText(QString());
        star3->setText(QString());
        star4->setText(QString());
        star5->setText(QString());
        ratebtn->setText(QCoreApplication::translate("HomePage", "Rate", nullptr));
        description->setHtml(QCoreApplication::translate("HomePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Details</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("HomePage", "Close", nullptr));
        ratinglabel->setText(QString());
        moviedescbtn_2->setText(QString());
        moviesText->setText(QCoreApplication::translate("HomePage", "Movies", nullptr));
        onepage->setText(QCoreApplication::translate("HomePage", "For You", nullptr));
        twopage->setText(QCoreApplication::translate("HomePage", "Top Rated", nullptr));
        threepage->setText(QCoreApplication::translate("HomePage", "Latest", nullptr));
        toprategroupbox->setTitle(QString());
        topleft->setText(QString());
        topright->setText(QString());
        topratemovie_3->setText(QString());
        topratemovie_2->setText(QString());
        topratemovie_1->setText(QString());
        topratemovie_4->setText(QString());
        searchbox->setTitle(QString());
        searchleftbtn->setText(QString());
        searchrightbtn->setText(QString());
        searchmoviebtn_1->setText(QString());
        searchmoviebtn_2->setText(QString());
        searchmoviebtn_3->setText(QString());
        searchmoviebtn_4->setText(QString());
        searchmoviebtn_5->setText(QString());
        searchmoviebtn_6->setText(QString());
        searchmoviebtn_7->setText(QString());
        searchmoviebtn_8->setText(QString());
        bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
