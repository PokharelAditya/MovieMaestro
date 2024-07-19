/********************************************************************************
** Form generated from reading UI file 'addmovies.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMOVIES_H
#define UI_ADDMOVIES_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addmovies
{
public:
    QLabel *Background;
    QLabel *Logo;
    QPushButton *BackToAdminOptions;
    QGroupBox *addMoviesBox;
    QPushButton *nextButton;
    QLineEdit *title;
    QLabel *textAddMovie;
    QLabel *textTitle;
    QLabel *textDescription;
    QLabel *textDuration;
    QLineEdit *duration;
    QLabel *textDate;
    QDateEdit *date;
    QPushButton *poster;
    QTextEdit *description;
    QLabel *posterLabel;
    QPushButton *BackToAddMovies;
    QGroupBox *addMoviesBox2;
    QLabel *textAddMovie2;
    QLabel *textDirectors;
    QLabel *textCasts;
    QPushButton *nextButton2;
    QTextEdit *directors;
    QTextEdit *casts;
    QGroupBox *genresBox;
    QLabel *textGenres;
    QPushButton *addButton;
    QCheckBox *horror;
    QCheckBox *action;
    QCheckBox *romance;
    QCheckBox *thriller;
    QCheckBox *comedy;
    QCheckBox *history;
    QCheckBox *crime;
    QCheckBox *drama;
    QCheckBox *suspense;
    QCheckBox *scifi;
    QPushButton *BackToAddMovies2;

    void setupUi(QWidget *addmovies)
    {
        if (addmovies->objectName().isEmpty())
            addmovies->setObjectName("addmovies");
        addmovies->resize(1200, 750);
        addmovies->setMinimumSize(QSize(1200, 750));
        addmovies->setMaximumSize(QSize(1200, 750));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MM Transparent BG.png"), QSize(), QIcon::Normal, QIcon::Off);
        addmovies->setWindowIcon(icon);
        Background = new QLabel(addmovies);
        Background->setObjectName("Background");
        Background->setGeometry(QRect(0, 0, 1200, 750));
        Background->setMinimumSize(QSize(1200, 750));
        Background->setMaximumSize(QSize(1200, 750));
        Background->setFocusPolicy(Qt::StrongFocus);
        Background->setStyleSheet(QString::fromUtf8(""));
        Background->setPixmap(QPixmap(QString::fromUtf8(":/background1.png")));
        Background->setScaledContents(true);
        Logo = new QLabel(addmovies);
        Logo->setObjectName("Logo");
        Logo->setGeometry(QRect(1040, 30, 121, 111));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/MM Transparent BG.png")));
        Logo->setScaledContents(true);
        BackToAdminOptions = new QPushButton(addmovies);
        BackToAdminOptions->setObjectName("BackToAdminOptions");
        BackToAdminOptions->setGeometry(QRect(40, 40, 51, 51));
        BackToAdminOptions->setCursor(QCursor(Qt::PointingHandCursor));
        BackToAdminOptions->setMouseTracking(true);
        BackToAdminOptions->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/back icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        BackToAdminOptions->setIcon(icon1);
        BackToAdminOptions->setIconSize(QSize(50, 50));
        addMoviesBox = new QGroupBox(addmovies);
        addMoviesBox->setObjectName("addMoviesBox");
        addMoviesBox->setEnabled(true);
        addMoviesBox->setGeometry(QRect(130, 170, 940, 480));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addMoviesBox->sizePolicy().hasHeightForWidth());
        addMoviesBox->setSizePolicy(sizePolicy);
        addMoviesBox->setLayoutDirection(Qt::LeftToRight);
        addMoviesBox->setAutoFillBackground(false);
        addMoviesBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 125);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        addMoviesBox->setAlignment(Qt::AlignCenter);
        nextButton = new QPushButton(addMoviesBox);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(750, 400, 161, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
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
        nextButton->setCheckable(false);
        nextButton->setAutoRepeatInterval(-1);
        title = new QLineEdit(addMoviesBox);
        title->setObjectName("title");
        title->setGeometry(QRect(99, 130, 281, 30));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        font1.setItalic(false);
        title->setFont(font1);
        title->setCursor(QCursor(Qt::IBeamCursor));
        title->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;\n"
""));
        title->setEchoMode(QLineEdit::Normal);
        title->setAlignment(Qt::AlignCenter);
        title->setCursorMoveStyle(Qt::LogicalMoveStyle);
        title->setClearButtonEnabled(true);
        textAddMovie = new QLabel(addMoviesBox);
        textAddMovie->setObjectName("textAddMovie");
        textAddMovie->setGeometry(QRect(270, 10, 400, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(false);
        textAddMovie->setFont(font2);
        textAddMovie->setFocusPolicy(Qt::NoFocus);
        textAddMovie->setContextMenuPolicy(Qt::DefaultContextMenu);
        textAddMovie->setAutoFillBackground(false);
        textAddMovie->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        textAddMovie->setLineWidth(0);
        textAddMovie->setScaledContents(false);
        textAddMovie->setAlignment(Qt::AlignCenter);
        textAddMovie->setWordWrap(false);
        textTitle = new QLabel(addMoviesBox);
        textTitle->setObjectName("textTitle");
        textTitle->setGeometry(QRect(35, 130, 80, 30));
        QFont font3;
        font3.setPointSize(12);
        font3.setWeight(QFont::Medium);
        font3.setItalic(true);
        textTitle->setFont(font3);
        textTitle->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        textDescription = new QLabel(addMoviesBox);
        textDescription->setObjectName("textDescription");
        textDescription->setGeometry(QRect(40, 280, 111, 35));
        textDescription->setFont(font3);
        textDescription->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        textDuration = new QLabel(addMoviesBox);
        textDuration->setObjectName("textDuration");
        textDuration->setGeometry(QRect(40, 180, 80, 30));
        textDuration->setFont(font3);
        textDuration->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        duration = new QLineEdit(addMoviesBox);
        duration->setObjectName("duration");
        duration->setGeometry(QRect(140, 180, 241, 30));
        sizePolicy2.setHeightForWidth(duration->sizePolicy().hasHeightForWidth());
        duration->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(11);
        font4.setItalic(true);
        duration->setFont(font4);
        duration->setCursor(QCursor(Qt::IBeamCursor));
        duration->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;\n"
""));
        duration->setEchoMode(QLineEdit::Normal);
        duration->setAlignment(Qt::AlignCenter);
        duration->setCursorMoveStyle(Qt::LogicalMoveStyle);
        duration->setClearButtonEnabled(true);
        textDate = new QLabel(addMoviesBox);
        textDate->setObjectName("textDate");
        textDate->setGeometry(QRect(40, 230, 131, 30));
        textDate->setFont(font3);
        textDate->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        date = new QDateEdit(addMoviesBox);
        date->setObjectName("date");
        date->setGeometry(QRect(190, 230, 141, 30));
        QFont font5;
        font5.setPointSize(11);
        font5.setItalic(true);
        date->setFont(font5);
        date->setCursor(QCursor(Qt::IBeamCursor));
        date->setStyleSheet(QString::fromUtf8("background-color:rgb(194, 194, 194);\n"
"color:black;"));
        date->setFrame(true);
        date->setAlignment(Qt::AlignCenter);
        date->setButtonSymbols(QAbstractSpinBox::NoButtons);
        date->setDate(QDate(2000, 1, 1));
        poster = new QPushButton(addMoviesBox);
        poster->setObjectName("poster");
        poster->setGeometry(QRect(710, 310, 200, 50));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(false);
        poster->setFont(font6);
        poster->setCursor(QCursor(Qt::PointingHandCursor));
        poster->setStyleSheet(QString::fromUtf8("#poster\n"
"{\n"
"background:rgba(20,20,20,200);\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:0px;\n"
"}\n"
"#poster:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        description = new QTextEdit(addMoviesBox);
        description->setObjectName("description");
        description->setGeometry(QRect(40, 330, 611, 91));
        QFont font7;
        font7.setPointSize(12);
        description->setFont(font7);
        description->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        description->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;\n"
""));
        posterLabel = new QLabel(addMoviesBox);
        posterLabel->setObjectName("posterLabel");
        posterLabel->setGeometry(QRect(710, 60, 200, 300));
        posterLabel->setStyleSheet(QString::fromUtf8("#posterLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:0px;\n"
"}"));
        posterLabel->setScaledContents(true);
        nextButton->raise();
        title->raise();
        textAddMovie->raise();
        textTitle->raise();
        textDescription->raise();
        textDuration->raise();
        duration->raise();
        textDate->raise();
        date->raise();
        description->raise();
        posterLabel->raise();
        poster->raise();
        BackToAddMovies = new QPushButton(addmovies);
        BackToAddMovies->setObjectName("BackToAddMovies");
        BackToAddMovies->setGeometry(QRect(40, 40, 51, 51));
        BackToAddMovies->setCursor(QCursor(Qt::PointingHandCursor));
        BackToAddMovies->setMouseTracking(true);
        BackToAddMovies->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        BackToAddMovies->setIcon(icon1);
        BackToAddMovies->setIconSize(QSize(50, 50));
        addMoviesBox2 = new QGroupBox(addmovies);
        addMoviesBox2->setObjectName("addMoviesBox2");
        addMoviesBox2->setEnabled(true);
        addMoviesBox2->setGeometry(QRect(130, 170, 940, 401));
        sizePolicy.setHeightForWidth(addMoviesBox2->sizePolicy().hasHeightForWidth());
        addMoviesBox2->setSizePolicy(sizePolicy);
        addMoviesBox2->setLayoutDirection(Qt::LeftToRight);
        addMoviesBox2->setAutoFillBackground(false);
        addMoviesBox2->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 125);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        addMoviesBox2->setAlignment(Qt::AlignCenter);
        textAddMovie2 = new QLabel(addMoviesBox2);
        textAddMovie2->setObjectName("textAddMovie2");
        textAddMovie2->setGeometry(QRect(270, 10, 400, 81));
        textAddMovie2->setFont(font2);
        textAddMovie2->setFocusPolicy(Qt::NoFocus);
        textAddMovie2->setContextMenuPolicy(Qt::DefaultContextMenu);
        textAddMovie2->setAutoFillBackground(false);
        textAddMovie2->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        textAddMovie2->setLineWidth(0);
        textAddMovie2->setScaledContents(false);
        textAddMovie2->setAlignment(Qt::AlignCenter);
        textAddMovie2->setWordWrap(false);
        textDirectors = new QLabel(addMoviesBox2);
        textDirectors->setObjectName("textDirectors");
        textDirectors->setGeometry(QRect(50, 120, 80, 30));
        textDirectors->setFont(font3);
        textDirectors->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        textCasts = new QLabel(addMoviesBox2);
        textCasts->setObjectName("textCasts");
        textCasts->setGeometry(QRect(50, 220, 80, 30));
        textCasts->setFont(font3);
        textCasts->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        nextButton2 = new QPushButton(addMoviesBox2);
        nextButton2->setObjectName("nextButton2");
        nextButton2->setGeometry(QRect(750, 320, 161, 51));
        sizePolicy1.setHeightForWidth(nextButton2->sizePolicy().hasHeightForWidth());
        nextButton2->setSizePolicy(sizePolicy1);
        nextButton2->setFont(font);
        nextButton2->setCursor(QCursor(Qt::PointingHandCursor));
        nextButton2->setMouseTracking(true);
        nextButton2->setLayoutDirection(Qt::LeftToRight);
        nextButton2->setStyleSheet(QString::fromUtf8("#nextButton2\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#nextButton2:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        nextButton2->setAutoRepeatInterval(-1);
        directors = new QTextEdit(addMoviesBox2);
        directors->setObjectName("directors");
        directors->setGeometry(QRect(140, 120, 760, 70));
        directors->setFont(font7);
        directors->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        directors->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;\n"
""));
        casts = new QTextEdit(addMoviesBox2);
        casts->setObjectName("casts");
        casts->setGeometry(QRect(140, 220, 760, 70));
        casts->setFont(font7);
        casts->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        casts->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgb(194, 194, 194);\n"
"color:black;\n"
"border-radius:5px;\n"
""));
        genresBox = new QGroupBox(addmovies);
        genresBox->setObjectName("genresBox");
        genresBox->setEnabled(true);
        genresBox->setGeometry(QRect(130, 170, 940, 400));
        sizePolicy.setHeightForWidth(genresBox->sizePolicy().hasHeightForWidth());
        genresBox->setSizePolicy(sizePolicy);
        genresBox->setLayoutDirection(Qt::LeftToRight);
        genresBox->setAutoFillBackground(false);
        genresBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 125);\n"
"background-position:left;\n"
"border: none;\n"
"border-radius: 15px;"));
        genresBox->setAlignment(Qt::AlignCenter);
        textGenres = new QLabel(genresBox);
        textGenres->setObjectName("textGenres");
        textGenres->setGeometry(QRect(270, 10, 400, 81));
        textGenres->setFont(font2);
        textGenres->setFocusPolicy(Qt::NoFocus);
        textGenres->setContextMenuPolicy(Qt::DefaultContextMenu);
        textGenres->setAutoFillBackground(false);
        textGenres->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;\n"
"color:rgb(230, 149, 40);"));
        textGenres->setLineWidth(0);
        textGenres->setScaledContents(false);
        textGenres->setAlignment(Qt::AlignCenter);
        textGenres->setWordWrap(false);
        addButton = new QPushButton(genresBox);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(750, 320, 161, 51));
        sizePolicy1.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy1);
        addButton->setFont(font);
        addButton->setCursor(QCursor(Qt::PointingHandCursor));
        addButton->setMouseTracking(true);
        addButton->setLayoutDirection(Qt::LeftToRight);
        addButton->setStyleSheet(QString::fromUtf8("#addButton\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:20px;\n"
"}\n"
"#addButton:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        addButton->setAutoRepeatInterval(-1);
        horror = new QCheckBox(genresBox);
        horror->setObjectName("horror");
        horror->setGeometry(QRect(60, 240, 140, 50));
        QFont font8;
        font8.setPointSize(12);
        font8.setBold(true);
        horror->setFont(font8);
        horror->setCursor(QCursor(Qt::PointingHandCursor));
        horror->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        action = new QCheckBox(genresBox);
        action->setObjectName("action");
        action->setGeometry(QRect(60, 140, 140, 50));
        action->setFont(font8);
        action->setCursor(QCursor(Qt::PointingHandCursor));
        action->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        romance = new QCheckBox(genresBox);
        romance->setObjectName("romance");
        romance->setGeometry(QRect(230, 240, 140, 50));
        romance->setFont(font8);
        romance->setCursor(QCursor(Qt::PointingHandCursor));
        romance->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        thriller = new QCheckBox(genresBox);
        thriller->setObjectName("thriller");
        thriller->setGeometry(QRect(740, 240, 140, 50));
        thriller->setFont(font8);
        thriller->setCursor(QCursor(Qt::PointingHandCursor));
        thriller->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        comedy = new QCheckBox(genresBox);
        comedy->setObjectName("comedy");
        comedy->setGeometry(QRect(230, 140, 140, 50));
        comedy->setFont(font8);
        comedy->setCursor(QCursor(Qt::PointingHandCursor));
        comedy->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        history = new QCheckBox(genresBox);
        history->setObjectName("history");
        history->setGeometry(QRect(740, 140, 140, 50));
        history->setFont(font8);
        history->setCursor(QCursor(Qt::PointingHandCursor));
        history->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        crime = new QCheckBox(genresBox);
        crime->setObjectName("crime");
        crime->setGeometry(QRect(400, 140, 140, 50));
        crime->setFont(font8);
        crime->setCursor(QCursor(Qt::PointingHandCursor));
        crime->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        drama = new QCheckBox(genresBox);
        drama->setObjectName("drama");
        drama->setGeometry(QRect(570, 140, 140, 50));
        drama->setFont(font8);
        drama->setCursor(QCursor(Qt::PointingHandCursor));
        drama->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        suspense = new QCheckBox(genresBox);
        suspense->setObjectName("suspense");
        suspense->setGeometry(QRect(570, 240, 140, 50));
        suspense->setFont(font8);
        suspense->setCursor(QCursor(Qt::PointingHandCursor));
        suspense->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        scifi = new QCheckBox(genresBox);
        scifi->setObjectName("scifi");
        scifi->setGeometry(QRect(400, 240, 140, 50));
        scifi->setFont(font8);
        scifi->setCursor(QCursor(Qt::PointingHandCursor));
        scifi->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"border-radius:10px;\n"
"padding-left: 20px; \n"
"padding-right: 20px;\n"
"}\n"
"QCheckBox:hover\n"
"{\n"
"background:rgba(230, 149, 40, 200);\n"
"}"));
        BackToAddMovies2 = new QPushButton(addmovies);
        BackToAddMovies2->setObjectName("BackToAddMovies2");
        BackToAddMovies2->setGeometry(QRect(40, 40, 51, 51));
        BackToAddMovies2->setCursor(QCursor(Qt::PointingHandCursor));
        BackToAddMovies2->setMouseTracking(true);
        BackToAddMovies2->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        BackToAddMovies2->setIcon(icon1);
        BackToAddMovies2->setIconSize(QSize(50, 50));
        Background->raise();
        Logo->raise();
        BackToAdminOptions->raise();
        BackToAddMovies->raise();
        BackToAddMovies2->raise();
        genresBox->raise();
        addMoviesBox->raise();
        addMoviesBox2->raise();

        retranslateUi(addmovies);

        QMetaObject::connectSlotsByName(addmovies);
    } // setupUi

    void retranslateUi(QWidget *addmovies)
    {
        addmovies->setWindowTitle(QCoreApplication::translate("addmovies", "MovieMaestro", nullptr));
        Background->setText(QString());
        Logo->setText(QString());
        BackToAdminOptions->setText(QString());
        addMoviesBox->setTitle(QString());
        nextButton->setText(QCoreApplication::translate("addmovies", "Next", nullptr));
        title->setText(QString());
        title->setPlaceholderText(QString());
        textAddMovie->setText(QCoreApplication::translate("addmovies", "Add a Movie", nullptr));
        textTitle->setText(QCoreApplication::translate("addmovies", " Title:", nullptr));
        textDescription->setText(QCoreApplication::translate("addmovies", "Description:", nullptr));
        textDuration->setText(QCoreApplication::translate("addmovies", "Duration:", nullptr));
        duration->setText(QString());
        duration->setPlaceholderText(QCoreApplication::translate("addmovies", "(mins)", nullptr));
        textDate->setText(QCoreApplication::translate("addmovies", "Released Date:", nullptr));
        date->setDisplayFormat(QCoreApplication::translate("addmovies", "yyyy/MM/dd", nullptr));
        poster->setText(QCoreApplication::translate("addmovies", "Upload Poster", nullptr));
        posterLabel->setText(QString());
        BackToAddMovies->setText(QString());
        addMoviesBox2->setTitle(QString());
        textAddMovie2->setText(QCoreApplication::translate("addmovies", "Add a Movie", nullptr));
        textDirectors->setText(QCoreApplication::translate("addmovies", "Directors:", nullptr));
        textCasts->setText(QCoreApplication::translate("addmovies", "Casts:", nullptr));
        nextButton2->setText(QCoreApplication::translate("addmovies", "Next", nullptr));
        directors->setDocumentTitle(QString());
        directors->setPlaceholderText(QCoreApplication::translate("addmovies", "For multiple directors, use comma to separate the directors", nullptr));
        casts->setPlaceholderText(QCoreApplication::translate("addmovies", "For multiple casts, use comma to separate the directors", nullptr));
        genresBox->setTitle(QString());
        textGenres->setText(QCoreApplication::translate("addmovies", "Genres", nullptr));
        addButton->setText(QCoreApplication::translate("addmovies", "Add", nullptr));
        horror->setText(QCoreApplication::translate("addmovies", "Horror", nullptr));
        action->setText(QCoreApplication::translate("addmovies", "Action", nullptr));
        romance->setText(QCoreApplication::translate("addmovies", "Romance", nullptr));
        thriller->setText(QCoreApplication::translate("addmovies", "Thriller", nullptr));
        comedy->setText(QCoreApplication::translate("addmovies", "Comedy", nullptr));
        history->setText(QCoreApplication::translate("addmovies", "History", nullptr));
        crime->setText(QCoreApplication::translate("addmovies", "Crime", nullptr));
        drama->setText(QCoreApplication::translate("addmovies", "Drama", nullptr));
        suspense->setText(QCoreApplication::translate("addmovies", "Suspense", nullptr));
        scifi->setText(QCoreApplication::translate("addmovies", "Sci-Fi", nullptr));
        BackToAddMovies2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addmovies: public Ui_addmovies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMOVIES_H
