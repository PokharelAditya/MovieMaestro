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
    QLabel *poster_1;
    QLabel *moviesText;
    QPushButton *Previous;
    QPushButton *Next;
    QLabel *poster_2;
    QLabel *poster_3;
    QLabel *poster_4;
    QLabel *poster_5;
    QGroupBox *searchGroupBox;
    QLineEdit *searchBoxBG;
    QPushButton *searchButton;
    QLineEdit *searchBox;

    void setupUi(QWidget *updatemovies)
    {
        if (updatemovies->objectName().isEmpty())
            updatemovies->setObjectName("updatemovies");
        updatemovies->resize(1200, 750);
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
        poster_1 = new QLabel(moviesBox);
        poster_1->setObjectName("poster_1");
        poster_1->setGeometry(QRect(40, 140, 180, 270));
        poster_1->setCursor(QCursor(Qt::PointingHandCursor));
        poster_1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgb(194,194,194);\n"
"\n"
"}"));
        poster_1->setFrameShape(QFrame::NoFrame);
        poster_1->setTextFormat(Qt::AutoText);
        poster_1->setScaledContents(true);
        poster_1->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_1->setWordWrap(true);
        poster_1->setMargin(0);
        moviesText = new QLabel(moviesBox);
        moviesText->setObjectName("moviesText");
        moviesText->setGeometry(QRect(60, 40, 211, 70));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font.setPointSize(40);
        font.setBold(true);
        moviesText->setFont(font);
        moviesText->setStyleSheet(QString::fromUtf8("color:rgb(200, 200 200);"));
        Previous = new QPushButton(moviesBox);
        Previous->setObjectName("Previous");
        Previous->setGeometry(QRect(525, 560, 35, 35));
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
        Next->setGeometry(QRect(580, 560, 35, 35));
        Next->setCursor(QCursor(Qt::PointingHandCursor));
        Next->setMouseTracking(true);
        Next->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Next_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Next->setIcon(icon3);
        Next->setIconSize(QSize(35, 35));
        poster_2 = new QLabel(moviesBox);
        poster_2->setObjectName("poster_2");
        poster_2->setGeometry(QRect(260, 140, 180, 270));
        poster_2->setCursor(QCursor(Qt::PointingHandCursor));
        poster_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid white;\n"
"\n"
"}"));
        poster_2->setFrameShape(QFrame::NoFrame);
        poster_2->setTextFormat(Qt::AutoText);
        poster_2->setScaledContents(true);
        poster_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_2->setWordWrap(true);
        poster_2->setMargin(0);
        poster_3 = new QLabel(moviesBox);
        poster_3->setObjectName("poster_3");
        poster_3->setGeometry(QRect(480, 140, 180, 270));
        poster_3->setCursor(QCursor(Qt::PointingHandCursor));
        poster_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid white;\n"
"\n"
"}"));
        poster_3->setFrameShape(QFrame::NoFrame);
        poster_3->setTextFormat(Qt::AutoText);
        poster_3->setScaledContents(true);
        poster_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_3->setWordWrap(true);
        poster_3->setMargin(0);
        poster_4 = new QLabel(moviesBox);
        poster_4->setObjectName("poster_4");
        poster_4->setGeometry(QRect(700, 140, 180, 270));
        poster_4->setCursor(QCursor(Qt::PointingHandCursor));
        poster_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid white;\n"
"\n"
"}"));
        poster_4->setFrameShape(QFrame::NoFrame);
        poster_4->setTextFormat(Qt::AutoText);
        poster_4->setScaledContents(true);
        poster_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_4->setWordWrap(true);
        poster_4->setMargin(0);
        poster_5 = new QLabel(moviesBox);
        poster_5->setObjectName("poster_5");
        poster_5->setGeometry(QRect(920, 140, 180, 270));
        poster_5->setCursor(QCursor(Qt::PointingHandCursor));
        poster_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid white;\n"
"\n"
"}"));
        poster_5->setFrameShape(QFrame::NoFrame);
        poster_5->setTextFormat(Qt::AutoText);
        poster_5->setScaledContents(true);
        poster_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_5->setWordWrap(true);
        poster_5->setMargin(0);
        Line->raise();
        poster_1->raise();
        moviesText->raise();
        Next->raise();
        Previous->raise();
        poster_2->raise();
        poster_3->raise();
        poster_4->raise();
        poster_5->raise();
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
        QFont font1;
        font1.setPointSize(12);
        searchBox->setFont(font1);
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
        Background->raise();
        moviesBox->raise();
        BackToAdminOptions->raise();
        searchGroupBox->raise();
        Logo->raise();

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
        poster_1->setText(QString());
        moviesText->setText(QCoreApplication::translate("updatemovies", "Movies", nullptr));
        Previous->setText(QString());
        Next->setText(QString());
        poster_2->setText(QString());
        poster_3->setText(QString());
        poster_4->setText(QString());
        poster_5->setText(QString());
        searchGroupBox->setTitle(QString());
        searchBoxBG->setPlaceholderText(QString());
        searchButton->setText(QString());
        searchBox->setText(QString());
        searchBox->setPlaceholderText(QCoreApplication::translate("updatemovies", "Search Movies..", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updatemovies: public Ui_updatemovies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEMOVIES_H
