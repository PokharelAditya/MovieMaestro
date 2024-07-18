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
    QLineEdit *searchBox;
    QLineEdit *searchBoxBG;
    QPushButton *searchButton;
    QGroupBox *moviesBox;
    QFrame *Line;
    QLabel *poster_13;
    QLabel *poster_9;
    QLabel *poster_4;
    QLabel *poster_5;
    QLabel *poster_7;
    QLabel *poster_8;
    QLabel *poster_11;
    QLabel *poster_1;
    QLabel *moviesText;
    QLabel *poster_14;
    QLabel *poster_10;
    QLabel *poster_3;
    QLabel *poster_2;
    QLabel *poster_12;
    QLabel *poster_6;

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
        searchBox = new QLineEdit(updatemovies);
        searchBox->setObjectName("searchBox");
        searchBox->setGeometry(QRect(394, 55, 380, 40));
        QFont font;
        font.setPointSize(12);
        searchBox->setFont(font);
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
        searchBoxBG = new QLineEdit(updatemovies);
        searchBoxBG->setObjectName("searchBoxBG");
        searchBoxBG->setGeometry(QRect(380, 55, 440, 40));
        searchBoxBG->setCursor(QCursor(Qt::ArrowCursor));
        searchBoxBG->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color:rgb(225,225,225);\n"
"border:none;\n"
"border-radius:20px;\n"
"}"));
        searchBoxBG->setCursorPosition(0);
        searchBoxBG->setReadOnly(true);
        searchButton = new QPushButton(updatemovies);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(775, 60, 30, 30));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon2);
        searchButton->setIconSize(QSize(30, 30));
        moviesBox = new QGroupBox(updatemovies);
        moviesBox->setObjectName("moviesBox");
        moviesBox->setGeometry(QRect(39, 120, 1121, 601));
        moviesBox->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        Line = new QFrame(moviesBox);
        Line->setObjectName("Line");
        Line->setGeometry(QRect(30, 40, 10, 60));
        Line->setStyleSheet(QString::fromUtf8("background-color:rgba(230, 149, 40, 200);\n"
"border:none;"));
        Line->setFrameShape(QFrame::Shape::VLine);
        Line->setFrameShadow(QFrame::Shadow::Sunken);
        poster_13 = new QLabel(moviesBox);
        poster_13->setObjectName("poster_13");
        poster_13->setGeometry(QRect(810, 350, 120, 180));
        poster_13->setCursor(QCursor(Qt::PointingHandCursor));
        poster_13->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_13->setFrameShape(QFrame::NoFrame);
        poster_13->setTextFormat(Qt::AutoText);
        poster_13->setScaledContents(true);
        poster_13->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_13->setWordWrap(true);
        poster_13->setMargin(0);
        poster_9 = new QLabel(moviesBox);
        poster_9->setObjectName("poster_9");
        poster_9->setGeometry(QRect(210, 350, 120, 180));
        poster_9->setCursor(QCursor(Qt::PointingHandCursor));
        poster_9->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_9->setFrameShape(QFrame::NoFrame);
        poster_9->setTextFormat(Qt::AutoText);
        poster_9->setScaledContents(true);
        poster_9->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_9->setWordWrap(true);
        poster_9->setMargin(0);
        poster_9->setIndent(-1);
        poster_4 = new QLabel(moviesBox);
        poster_4->setObjectName("poster_4");
        poster_4->setGeometry(QRect(510, 140, 120, 180));
        poster_4->setCursor(QCursor(Qt::PointingHandCursor));
        poster_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_4->setFrameShape(QFrame::NoFrame);
        poster_4->setTextFormat(Qt::AutoText);
        poster_4->setScaledContents(true);
        poster_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_4->setWordWrap(true);
        poster_4->setMargin(0);
        poster_5 = new QLabel(moviesBox);
        poster_5->setObjectName("poster_5");
        poster_5->setGeometry(QRect(660, 140, 120, 180));
        poster_5->setCursor(QCursor(Qt::PointingHandCursor));
        poster_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_5->setFrameShape(QFrame::NoFrame);
        poster_5->setTextFormat(Qt::AutoText);
        poster_5->setScaledContents(true);
        poster_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_5->setWordWrap(true);
        poster_5->setMargin(0);
        poster_7 = new QLabel(moviesBox);
        poster_7->setObjectName("poster_7");
        poster_7->setGeometry(QRect(960, 140, 120, 180));
        poster_7->setCursor(QCursor(Qt::PointingHandCursor));
        poster_7->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_7->setFrameShape(QFrame::NoFrame);
        poster_7->setTextFormat(Qt::AutoText);
        poster_7->setScaledContents(true);
        poster_7->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_7->setWordWrap(true);
        poster_7->setMargin(0);
        poster_8 = new QLabel(moviesBox);
        poster_8->setObjectName("poster_8");
        poster_8->setGeometry(QRect(60, 350, 120, 180));
        poster_8->setCursor(QCursor(Qt::PointingHandCursor));
        poster_8->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_8->setFrameShape(QFrame::NoFrame);
        poster_8->setTextFormat(Qt::AutoText);
        poster_8->setScaledContents(true);
        poster_8->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_8->setWordWrap(true);
        poster_8->setMargin(0);
        poster_11 = new QLabel(moviesBox);
        poster_11->setObjectName("poster_11");
        poster_11->setGeometry(QRect(510, 350, 120, 180));
        poster_11->setCursor(QCursor(Qt::PointingHandCursor));
        poster_11->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_11->setFrameShape(QFrame::NoFrame);
        poster_11->setTextFormat(Qt::AutoText);
        poster_11->setScaledContents(true);
        poster_11->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_11->setWordWrap(true);
        poster_11->setMargin(0);
        poster_1 = new QLabel(moviesBox);
        poster_1->setObjectName("poster_1");
        poster_1->setGeometry(QRect(60, 140, 120, 180));
        poster_1->setCursor(QCursor(Qt::PointingHandCursor));
        poster_1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
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
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift SemiBold")});
        font1.setPointSize(40);
        font1.setBold(true);
        moviesText->setFont(font1);
        moviesText->setStyleSheet(QString::fromUtf8("color:rgb(200, 200 200);"));
        poster_14 = new QLabel(moviesBox);
        poster_14->setObjectName("poster_14");
        poster_14->setGeometry(QRect(960, 350, 120, 180));
        poster_14->setCursor(QCursor(Qt::PointingHandCursor));
        poster_14->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_14->setFrameShape(QFrame::NoFrame);
        poster_14->setTextFormat(Qt::AutoText);
        poster_14->setScaledContents(true);
        poster_14->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_14->setWordWrap(true);
        poster_14->setMargin(0);
        poster_10 = new QLabel(moviesBox);
        poster_10->setObjectName("poster_10");
        poster_10->setGeometry(QRect(360, 350, 120, 180));
        poster_10->setCursor(QCursor(Qt::PointingHandCursor));
        poster_10->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_10->setFrameShape(QFrame::NoFrame);
        poster_10->setTextFormat(Qt::AutoText);
        poster_10->setScaledContents(true);
        poster_10->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_10->setWordWrap(true);
        poster_10->setMargin(0);
        poster_3 = new QLabel(moviesBox);
        poster_3->setObjectName("poster_3");
        poster_3->setGeometry(QRect(360, 140, 120, 180));
        poster_3->setCursor(QCursor(Qt::PointingHandCursor));
        poster_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"\n"
"}"));
        poster_3->setFrameShape(QFrame::NoFrame);
        poster_3->setTextFormat(Qt::AutoText);
        poster_3->setScaledContents(true);
        poster_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_3->setWordWrap(true);
        poster_3->setMargin(0);
        poster_2 = new QLabel(moviesBox);
        poster_2->setObjectName("poster_2");
        poster_2->setGeometry(QRect(210, 140, 120, 180));
        poster_2->setCursor(QCursor(Qt::PointingHandCursor));
        poster_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"\n"
"}"));
        poster_2->setFrameShape(QFrame::NoFrame);
        poster_2->setTextFormat(Qt::AutoText);
        poster_2->setScaledContents(true);
        poster_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_2->setWordWrap(true);
        poster_2->setMargin(0);
        poster_12 = new QLabel(moviesBox);
        poster_12->setObjectName("poster_12");
        poster_12->setGeometry(QRect(660, 350, 120, 180));
        poster_12->setCursor(QCursor(Qt::PointingHandCursor));
        poster_12->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_12->setFrameShape(QFrame::NoFrame);
        poster_12->setTextFormat(Qt::AutoText);
        poster_12->setScaledContents(true);
        poster_12->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_12->setWordWrap(true);
        poster_12->setMargin(0);
        poster_6 = new QLabel(moviesBox);
        poster_6->setObjectName("poster_6");
        poster_6->setGeometry(QRect(810, 140, 120, 180));
        poster_6->setCursor(QCursor(Qt::PointingHandCursor));
        poster_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background:none;\n"
"border:2px solid rgba(230, 149, 40, 200);\n"
"}"));
        poster_6->setFrameShape(QFrame::NoFrame);
        poster_6->setTextFormat(Qt::AutoText);
        poster_6->setScaledContents(true);
        poster_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        poster_6->setWordWrap(true);
        poster_6->setMargin(0);
        Background->raise();
        moviesBox->raise();
        Logo->raise();
        BackToAdminOptions->raise();
        searchBoxBG->raise();
        searchBox->raise();
        searchButton->raise();

        retranslateUi(updatemovies);

        QMetaObject::connectSlotsByName(updatemovies);
    } // setupUi

    void retranslateUi(QWidget *updatemovies)
    {
        updatemovies->setWindowTitle(QCoreApplication::translate("updatemovies", "MovieMaestro", nullptr));
        BackToAdminOptions->setText(QString());
        Logo->setText(QString());
        Background->setText(QString());
        searchBox->setText(QString());
        searchBox->setPlaceholderText(QCoreApplication::translate("updatemovies", "Search Movies..", nullptr));
        searchBoxBG->setPlaceholderText(QString());
        searchButton->setText(QString());
        moviesBox->setTitle(QString());
        poster_13->setText(QString());
        poster_9->setText(QString());
        poster_4->setText(QString());
        poster_5->setText(QString());
        poster_7->setText(QString());
        poster_8->setText(QString());
        poster_11->setText(QString());
        poster_1->setText(QString());
        moviesText->setText(QCoreApplication::translate("updatemovies", "Movies", nullptr));
        poster_14->setText(QString());
        poster_10->setText(QString());
        poster_3->setText(QString());
        poster_2->setText(QString());
        poster_12->setText(QString());
        poster_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class updatemovies: public Ui_updatemovies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEMOVIES_H
