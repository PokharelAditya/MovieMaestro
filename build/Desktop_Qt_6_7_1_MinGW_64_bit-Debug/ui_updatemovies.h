/********************************************************************************
** Form generated from reading UI file 'updatemovies.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEMOVIES_H
#define UI_UPDATEMOVIES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updatemovies
{
public:
    QPushButton *BackToAdminOptions;
    QLabel *Logo;
    QLabel *Background;
    QGroupBox *moviesBox;
    QFrame *Line;
    QLabel *moviesText;
    QPushButton *Previous;
    QPushButton *Next;
    QLabel *titleText;
    QLabel *textID_1;
    QLabel *textID_8;
    QLabel *textID_9;
    QLabel *textID_10;
    QLabel *textID_11;
    QLabel *textID_12;
    QLabel *textID_13;
    QLabel *textID_14;
    QLabel *textID_7;
    QLabel *textID_5;
    QLabel *textID_4;
    QLabel *textID_3;
    QLabel *textID_2;
    QLabel *textID_6;
    QPushButton *poster_1;
    QPushButton *poster_2;
    QPushButton *poster_3;
    QPushButton *poster_4;
    QPushButton *poster_5;
    QPushButton *poster_6;
    QPushButton *poster_7;
    QPushButton *poster_8;
    QPushButton *poster_9;
    QPushButton *poster_10;
    QPushButton *poster_11;
    QPushButton *poster_12;
    QPushButton *poster_13;
    QPushButton *poster_14;
    QGroupBox *searchGroupBox;
    QLineEdit *searchBoxBG;
    QPushButton *searchButton;
    QLineEdit *searchBox;
    QGroupBox *viewMoviesBox;
    QPushButton *viewDoneButton;
    QLabel *viewDetails;
    QLabel *viewTitle;
    QLabel *viewPoster;
    QGroupBox *deleteMoviesBox;
    QPushButton *deleteDeleteButton;
    QLabel *deleteDetails;
    QLabel *deleteTitle;
    QLabel *deletePoster;
    QPushButton *deleteCancelButton;
    QLabel *deleteID;

    void setupUi(QWidget *updatemovies)
    {
        if (updatemovies->objectName().isEmpty())
            updatemovies->setObjectName("updatemovies");
        updatemovies->resize(1200, 750);
        updatemovies->setMinimumSize(QSize(1200, 750));
        updatemovies->setMaximumSize(QSize(1200, 750));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MM Transparent BG.png"), QSize(), QIcon::Normal, QIcon::Off);
        updatemovies->setWindowIcon(icon);
        BackToAdminOptions = new QPushButton(updatemovies);
        BackToAdminOptions->setObjectName("BackToAdminOptions");
        BackToAdminOptions->setGeometry(QRect(50, 50, 51, 51));
        BackToAdminOptions->setCursor(QCursor(Qt::PointingHandCursor));
        BackToAdminOptions->setMouseTracking(true);
        BackToAdminOptions->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/back icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        BackToAdminOptions->setIcon(icon1);
        BackToAdminOptions->setIconSize(QSize(50, 50));
        Logo = new QLabel(updatemovies);
        Logo->setObjectName("Logo");
        Logo->setGeometry(QRect(1040, 30, 121, 111));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/MM Transparent BG.png")));
        Logo->setScaledContents(true);
        Logo->setWordWrap(false);
        Background = new QLabel(updatemovies);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 1200, 750));
        Background->setMinimumSize(QSize(1200, 750));
        Background->setMaximumSize(QSize(1200, 750));
        Background->setFocusPolicy(Qt::StrongFocus);
        Background->setStyleSheet(QString::fromUtf8(""));
        Background->setTextFormat(Qt::MarkdownText);
        Background->setPixmap(QPixmap(QString::fromUtf8(":/background1.png")));
        Background->setScaledContents(true);
        moviesBox = new QGroupBox(updatemovies);
        moviesBox->setObjectName("moviesBox");
        moviesBox->setGeometry(QRect(30, 110, 1121, 621));
        moviesBox->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        Line = new QFrame(moviesBox);
        Line->setObjectName("Line");
        Line->setGeometry(QRect(30, 40, 10, 60));
        Line->setStyleSheet(QString::fromUtf8("background-color:rgba(230, 149, 40, 200);\n"
"border:none;"));
        Line->setFrameShape(QFrame::Shape::VLine);
        Line->setFrameShadow(QFrame::Shadow::Sunken);
        moviesText = new QLabel(moviesBox);
        moviesText->setObjectName("moviesText");
        moviesText->setGeometry(QRect(60, 40, 210, 70));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font.setPointSize(40);
        font.setBold(true);
        moviesText->setFont(font);
        moviesText->setStyleSheet(QString::fromUtf8("color:rgb(200, 200 200);"));
        Previous = new QPushButton(moviesBox);
        Previous->setObjectName("Previous");
        Previous->setGeometry(QRect(520, 570, 35, 35));
        Previous->setCursor(QCursor(Qt::PointingHandCursor));
        Previous->setMouseTracking(true);
        Previous->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Previous_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Previous->setIcon(icon2);
        Previous->setIconSize(QSize(35, 35));
        Next = new QPushButton(moviesBox);
        Next->setObjectName("Next");
        Next->setGeometry(QRect(570, 570, 35, 35));
        Next->setCursor(QCursor(Qt::PointingHandCursor));
        Next->setMouseTracking(true);
        Next->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Next_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Next->setIcon(icon3);
        Next->setIconSize(QSize(35, 35));
        titleText = new QLabel(moviesBox);
        titleText->setObjectName("titleText");
        titleText->setGeometry(QRect(580, 40, 500, 70));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font1.setPointSize(20);
        font1.setBold(true);
        titleText->setFont(font1);
        titleText->setStyleSheet(QString::fromUtf8("color:rgb(200, 200 200);"));
        titleText->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        titleText->setWordWrap(true);
        textID_1 = new QLabel(moviesBox);
        textID_1->setObjectName("textID_1");
        textID_1->setGeometry(QRect(60, 220, 101, 20));
        textID_8 = new QLabel(moviesBox);
        textID_8->setObjectName("textID_8");
        textID_8->setGeometry(QRect(60, 430, 101, 20));
        textID_9 = new QLabel(moviesBox);
        textID_9->setObjectName("textID_9");
        textID_9->setGeometry(QRect(210, 430, 101, 20));
        textID_10 = new QLabel(moviesBox);
        textID_10->setObjectName("textID_10");
        textID_10->setGeometry(QRect(360, 430, 101, 20));
        textID_11 = new QLabel(moviesBox);
        textID_11->setObjectName("textID_11");
        textID_11->setGeometry(QRect(510, 430, 101, 20));
        textID_12 = new QLabel(moviesBox);
        textID_12->setObjectName("textID_12");
        textID_12->setGeometry(QRect(660, 430, 101, 20));
        textID_13 = new QLabel(moviesBox);
        textID_13->setObjectName("textID_13");
        textID_13->setGeometry(QRect(810, 430, 101, 20));
        textID_14 = new QLabel(moviesBox);
        textID_14->setObjectName("textID_14");
        textID_14->setGeometry(QRect(960, 430, 101, 20));
        textID_7 = new QLabel(moviesBox);
        textID_7->setObjectName("textID_7");
        textID_7->setGeometry(QRect(960, 220, 101, 20));
        textID_5 = new QLabel(moviesBox);
        textID_5->setObjectName("textID_5");
        textID_5->setGeometry(QRect(660, 220, 101, 20));
        textID_4 = new QLabel(moviesBox);
        textID_4->setObjectName("textID_4");
        textID_4->setGeometry(QRect(510, 220, 101, 20));
        textID_3 = new QLabel(moviesBox);
        textID_3->setObjectName("textID_3");
        textID_3->setGeometry(QRect(360, 220, 101, 20));
        textID_2 = new QLabel(moviesBox);
        textID_2->setObjectName("textID_2");
        textID_2->setGeometry(QRect(210, 220, 101, 20));
        textID_6 = new QLabel(moviesBox);
        textID_6->setObjectName("textID_6");
        textID_6->setGeometry(QRect(810, 220, 101, 20));
        poster_1 = new QPushButton(moviesBox);
        poster_1->setObjectName("poster_1");
        poster_1->setGeometry(QRect(50, 140, 124, 184));
        poster_1->setCursor(QCursor(Qt::PointingHandCursor));
        poster_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_2 = new QPushButton(moviesBox);
        poster_2->setObjectName("poster_2");
        poster_2->setGeometry(QRect(200, 140, 124, 184));
        poster_2->setCursor(QCursor(Qt::PointingHandCursor));
        poster_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_3 = new QPushButton(moviesBox);
        poster_3->setObjectName("poster_3");
        poster_3->setGeometry(QRect(350, 140, 124, 184));
        poster_3->setCursor(QCursor(Qt::PointingHandCursor));
        poster_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_4 = new QPushButton(moviesBox);
        poster_4->setObjectName("poster_4");
        poster_4->setGeometry(QRect(500, 140, 124, 184));
        poster_4->setCursor(QCursor(Qt::PointingHandCursor));
        poster_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_5 = new QPushButton(moviesBox);
        poster_5->setObjectName("poster_5");
        poster_5->setGeometry(QRect(650, 140, 124, 184));
        poster_5->setCursor(QCursor(Qt::PointingHandCursor));
        poster_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_6 = new QPushButton(moviesBox);
        poster_6->setObjectName("poster_6");
        poster_6->setGeometry(QRect(800, 140, 124, 184));
        poster_6->setCursor(QCursor(Qt::PointingHandCursor));
        poster_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_7 = new QPushButton(moviesBox);
        poster_7->setObjectName("poster_7");
        poster_7->setGeometry(QRect(950, 140, 124, 184));
        poster_7->setCursor(QCursor(Qt::PointingHandCursor));
        poster_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_8 = new QPushButton(moviesBox);
        poster_8->setObjectName("poster_8");
        poster_8->setGeometry(QRect(50, 350, 124, 184));
        poster_8->setCursor(QCursor(Qt::PointingHandCursor));
        poster_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_9 = new QPushButton(moviesBox);
        poster_9->setObjectName("poster_9");
        poster_9->setGeometry(QRect(200, 350, 124, 184));
        poster_9->setCursor(QCursor(Qt::PointingHandCursor));
        poster_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_10 = new QPushButton(moviesBox);
        poster_10->setObjectName("poster_10");
        poster_10->setGeometry(QRect(350, 350, 124, 184));
        poster_10->setCursor(QCursor(Qt::PointingHandCursor));
        poster_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_11 = new QPushButton(moviesBox);
        poster_11->setObjectName("poster_11");
        poster_11->setGeometry(QRect(500, 350, 124, 184));
        poster_11->setCursor(QCursor(Qt::PointingHandCursor));
        poster_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_12 = new QPushButton(moviesBox);
        poster_12->setObjectName("poster_12");
        poster_12->setGeometry(QRect(650, 350, 124, 184));
        poster_12->setCursor(QCursor(Qt::PointingHandCursor));
        poster_12->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_13 = new QPushButton(moviesBox);
        poster_13->setObjectName("poster_13");
        poster_13->setGeometry(QRect(800, 350, 124, 184));
        poster_13->setCursor(QCursor(Qt::PointingHandCursor));
        poster_13->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        poster_14 = new QPushButton(moviesBox);
        poster_14->setObjectName("poster_14");
        poster_14->setGeometry(QRect(950, 350, 124, 184));
        poster_14->setCursor(QCursor(Qt::PointingHandCursor));
        poster_14->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        Line->raise();
        moviesText->raise();
        Next->raise();
        Previous->raise();
        titleText->raise();
        textID_1->raise();
        textID_8->raise();
        textID_9->raise();
        textID_10->raise();
        textID_11->raise();
        textID_12->raise();
        textID_13->raise();
        textID_14->raise();
        textID_7->raise();
        textID_5->raise();
        textID_4->raise();
        textID_3->raise();
        textID_2->raise();
        textID_6->raise();
        poster_1->raise();
        poster_2->raise();
        poster_3->raise();
        poster_4->raise();
        poster_5->raise();
        poster_6->raise();
        poster_7->raise();
        poster_8->raise();
        poster_9->raise();
        poster_10->raise();
        poster_11->raise();
        poster_12->raise();
        poster_13->raise();
        poster_14->raise();
        searchGroupBox = new QGroupBox(updatemovies);
        searchGroupBox->setObjectName("searchGroupBox");
        searchGroupBox->setGeometry(QRect(340, 45, 510, 61));
        searchGroupBox->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        searchBoxBG = new QLineEdit(searchGroupBox);
        searchBoxBG->setObjectName("searchBoxBG");
        searchBoxBG->setGeometry(QRect(40, 10, 440, 40));
        searchBoxBG->setCursor(QCursor(Qt::ArrowCursor));
        searchBoxBG->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color:rgb(225,225,225);\n"
"border:none;\n"
"border-radius:20px;\n"
"}"));
        searchBoxBG->setCursorPosition(0);
        searchBoxBG->setReadOnly(true);
        searchButton = new QPushButton(searchGroupBox);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(435, 15, 30, 30));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon4);
        searchButton->setIconSize(QSize(30, 30));
        searchBox = new QLineEdit(searchGroupBox);
        searchBox->setObjectName("searchBox");
        searchBox->setGeometry(QRect(54, 10, 380, 40));
        QFont font2;
        font2.setPointSize(12);
        searchBox->setFont(font2);
        searchBox->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color:rgb(225,225,225);\n"
"border:none;\n"
"border-radius:20px;\n"
"color:black;\n"
"}"));
        searchBox->setFrame(true);
        searchBox->setCursorPosition(0);
        searchBox->setClearButtonEnabled(true);
        viewMoviesBox = new QGroupBox(updatemovies);
        viewMoviesBox->setObjectName("viewMoviesBox");
        viewMoviesBox->setEnabled(true);
        viewMoviesBox->setGeometry(QRect(50, 160, 1100, 500));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewMoviesBox->sizePolicy().hasHeightForWidth());
        viewMoviesBox->setSizePolicy(sizePolicy);
        viewMoviesBox->setLayoutDirection(Qt::LeftToRight);
        viewMoviesBox->setAutoFillBackground(false);
        viewMoviesBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 125);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        viewMoviesBox->setAlignment(Qt::AlignCenter);
        viewDoneButton = new QPushButton(viewMoviesBox);
        viewDoneButton->setObjectName("viewDoneButton");
        viewDoneButton->setGeometry(QRect(960, 440, 121, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(viewDoneButton->sizePolicy().hasHeightForWidth());
        viewDoneButton->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setItalic(false);
        viewDoneButton->setFont(font3);
        viewDoneButton->setCursor(QCursor(Qt::PointingHandCursor));
        viewDoneButton->setMouseTracking(true);
        viewDoneButton->setLayoutDirection(Qt::LeftToRight);
        viewDoneButton->setStyleSheet(QString::fromUtf8("#viewDoneButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#viewDoneButton:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        viewDoneButton->setCheckable(false);
        viewDoneButton->setAutoRepeatInterval(-1);
        viewDetails = new QLabel(viewMoviesBox);
        viewDetails->setObjectName("viewDetails");
        viewDetails->setGeometry(QRect(290, 100, 761, 321));
        QFont font4;
        font4.setPointSize(12);
        font4.setWeight(QFont::Medium);
        font4.setItalic(true);
        viewDetails->setFont(font4);
        viewDetails->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        viewDetails->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        viewDetails->setWordWrap(true);
        viewTitle = new QLabel(viewMoviesBox);
        viewTitle->setObjectName("viewTitle");
        viewTitle->setGeometry(QRect(250, 20, 600, 70));
        viewTitle->setFont(font1);
        viewTitle->setStyleSheet(QString::fromUtf8("color:rgb(200, 200 200);\n"
"background:none;"));
        viewTitle->setAlignment(Qt::AlignCenter);
        viewTitle->setWordWrap(true);
        viewPoster = new QLabel(viewMoviesBox);
        viewPoster->setObjectName("viewPoster");
        viewPoster->setGeometry(QRect(40, 90, 224, 334));
        viewPoster->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"border-radius:0px;\n"
"}"));
        viewPoster->setScaledContents(true);
        deleteMoviesBox = new QGroupBox(updatemovies);
        deleteMoviesBox->setObjectName("deleteMoviesBox");
        deleteMoviesBox->setEnabled(true);
        deleteMoviesBox->setGeometry(QRect(50, 160, 1100, 500));
        sizePolicy.setHeightForWidth(deleteMoviesBox->sizePolicy().hasHeightForWidth());
        deleteMoviesBox->setSizePolicy(sizePolicy);
        deleteMoviesBox->setLayoutDirection(Qt::LeftToRight);
        deleteMoviesBox->setAutoFillBackground(false);
        deleteMoviesBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 125);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        deleteMoviesBox->setAlignment(Qt::AlignCenter);
        deleteDeleteButton = new QPushButton(deleteMoviesBox);
        deleteDeleteButton->setObjectName("deleteDeleteButton");
        deleteDeleteButton->setGeometry(QRect(960, 440, 121, 41));
        sizePolicy1.setHeightForWidth(deleteDeleteButton->sizePolicy().hasHeightForWidth());
        deleteDeleteButton->setSizePolicy(sizePolicy1);
        deleteDeleteButton->setFont(font3);
        deleteDeleteButton->setCursor(QCursor(Qt::PointingHandCursor));
        deleteDeleteButton->setMouseTracking(true);
        deleteDeleteButton->setLayoutDirection(Qt::LeftToRight);
        deleteDeleteButton->setStyleSheet(QString::fromUtf8("#deleteDeleteButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#deleteDeleteButton:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        deleteDeleteButton->setCheckable(false);
        deleteDeleteButton->setAutoRepeatInterval(-1);
        deleteDetails = new QLabel(deleteMoviesBox);
        deleteDetails->setObjectName("deleteDetails");
        deleteDetails->setGeometry(QRect(290, 100, 761, 321));
        deleteDetails->setFont(font4);
        deleteDetails->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        deleteDetails->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        deleteDetails->setWordWrap(true);
        deleteTitle = new QLabel(deleteMoviesBox);
        deleteTitle->setObjectName("deleteTitle");
        deleteTitle->setGeometry(QRect(250, 20, 600, 70));
        deleteTitle->setFont(font1);
        deleteTitle->setStyleSheet(QString::fromUtf8("color:rgb(200, 200 200);\n"
"background:none;"));
        deleteTitle->setAlignment(Qt::AlignCenter);
        deleteTitle->setWordWrap(true);
        deletePoster = new QLabel(deleteMoviesBox);
        deletePoster->setObjectName("deletePoster");
        deletePoster->setGeometry(QRect(40, 90, 224, 334));
        deletePoster->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194, 194, 194);\n"
"border-radius:0px;\n"
"}"));
        deletePoster->setScaledContents(true);
        deleteCancelButton = new QPushButton(deleteMoviesBox);
        deleteCancelButton->setObjectName("deleteCancelButton");
        deleteCancelButton->setGeometry(QRect(820, 440, 121, 41));
        sizePolicy1.setHeightForWidth(deleteCancelButton->sizePolicy().hasHeightForWidth());
        deleteCancelButton->setSizePolicy(sizePolicy1);
        deleteCancelButton->setFont(font3);
        deleteCancelButton->setCursor(QCursor(Qt::PointingHandCursor));
        deleteCancelButton->setMouseTracking(true);
        deleteCancelButton->setLayoutDirection(Qt::LeftToRight);
        deleteCancelButton->setStyleSheet(QString::fromUtf8("#deleteCancelButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#deleteCancelButton:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        deleteCancelButton->setCheckable(false);
        deleteCancelButton->setAutoRepeatInterval(-1);
        deleteID = new QLabel(deleteMoviesBox);
        deleteID->setObjectName("deleteID");
        deleteID->setGeometry(QRect(120, 240, 63, 20));
        deleteID->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        deleteDeleteButton->raise();
        deleteDetails->raise();
        deleteTitle->raise();
        deleteCancelButton->raise();
        deleteID->raise();
        deletePoster->raise();
        Background->raise();
        moviesBox->raise();
        BackToAdminOptions->raise();
        searchGroupBox->raise();
        Logo->raise();
        viewMoviesBox->raise();
        deleteMoviesBox->raise();

        retranslateUi(updatemovies);

        QMetaObject::connectSlotsByName(updatemovies);
    } // setupUi

    void retranslateUi(QWidget *updatemovies)
    {
        updatemovies->setWindowTitle(QCoreApplication::translate("updatemovies", "MovieMaestro", nullptr));
        BackToAdminOptions->setText(QString());
        Logo->setText(QString());
        Background->setText(QString());
        moviesBox->setTitle(QString());
        moviesText->setText(QCoreApplication::translate("updatemovies", "Movies", nullptr));
        Previous->setText(QString());
        Next->setText(QString());
        titleText->setText(QString());
        textID_1->setText(QString());
        textID_8->setText(QString());
        textID_9->setText(QString());
        textID_10->setText(QString());
        textID_11->setText(QString());
        textID_12->setText(QString());
        textID_13->setText(QString());
        textID_14->setText(QString());
        textID_7->setText(QString());
        textID_5->setText(QString());
        textID_4->setText(QString());
        textID_3->setText(QString());
        textID_2->setText(QString());
        textID_6->setText(QString());
        poster_1->setText(QString());
        poster_2->setText(QString());
        poster_3->setText(QString());
        poster_4->setText(QString());
        poster_5->setText(QString());
        poster_6->setText(QString());
        poster_7->setText(QString());
        poster_8->setText(QString());
        poster_9->setText(QString());
        poster_10->setText(QString());
        poster_11->setText(QString());
        poster_12->setText(QString());
        poster_13->setText(QString());
        poster_14->setText(QString());
        searchGroupBox->setTitle(QString());
        searchBoxBG->setPlaceholderText(QString());
        searchButton->setText(QString());
        searchBox->setText(QString());
        searchBox->setPlaceholderText(QCoreApplication::translate("updatemovies", "Search Movies..", nullptr));
        viewMoviesBox->setTitle(QString());
        viewDoneButton->setText(QCoreApplication::translate("updatemovies", "Back", nullptr));
        viewDetails->setText(QCoreApplication::translate("updatemovies", "Details", nullptr));
        viewTitle->setText(QCoreApplication::translate("updatemovies", "Title", nullptr));
        viewPoster->setText(QString());
        deleteMoviesBox->setTitle(QString());
        deleteDeleteButton->setText(QCoreApplication::translate("updatemovies", "Delete", nullptr));
        deleteDetails->setText(QCoreApplication::translate("updatemovies", "Details", nullptr));
        deleteTitle->setText(QCoreApplication::translate("updatemovies", "Title", nullptr));
        deletePoster->setText(QString());
        deleteCancelButton->setText(QCoreApplication::translate("updatemovies", "Cancel", nullptr));
        deleteID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class updatemovies: public Ui_updatemovies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEMOVIES_H
