#ifndef HOMEPAGE_H
#define HOMEPAGE_H
#include "user.h"
#include <QDialog>
#include<QSettings>
#include<QWidget>
#include<QList>
#include<QVector>
#include<QDate>
namespace Ui {
class HomePage;
}

class HomePage : public QDialog
{
    Q_OBJECT

public:
    explicit HomePage(User *myuser,QWidget *parent = nullptr);
    ~HomePage();
    QSettings *mysetting;

private slots:
    void on_userpagebtn_clicked();

    void on_house_clicked();

    void on_leftbtn_clicked();

    void on_rightbtn_clicked();

    void on_leftbtn_2_clicked();

    void on_rightbtn_2_clicked();

    void on_moviebtn_2_clicked();

    void on_moviebtn_3_clicked();

    void on_moviebtn_5_clicked();

    void on_moviebtn_6_clicked();

    void on_moviebtn_7_clicked();

    void on_moviebtn_8_clicked();

    void on_moviebtn_9_clicked();

    void on_moviebtn_10_clicked();

    void on_moviebtn_11_clicked();

    void on_moviebtn_12_clicked();

    void on_moviebtn_13_clicked();

    void on_moviebtn_14_clicked();

    void on_moviebtn_15_clicked();

    void on_moviebtn_16_clicked();

    void on_moviebtn_1_clicked();

    void on_moviebtn_4_clicked();

    void on_pushButton_7_clicked();

    void on_star_clicked();

    void on_star2_clicked();

    void on_star3_clicked();

    void on_star4_clicked();

    void on_star5_clicked();

    void on_ratebtn_clicked();

    void on_gearbtn_clicked();

    void on_onepage_clicked();

    void on_twopage_clicked();

    void on_topleft_clicked();

    void on_topright_clicked();

    void on_topratemovie_1_clicked();

    void on_topratemovie_2_clicked();

    void on_topratemovie_3_clicked();

    void on_topratemovie_4_clicked();


    void on_searchbtn_clicked();

    void on_searchbar_textChanged(const QString &arg1);

    void on_searchleftbtn_clicked();

    void on_searchrightbtn_clicked();

    void on_searchmoviebtn_1_clicked();

    void on_searchmoviebtn_2_clicked();

    void on_searchmoviebtn_3_clicked();

    void on_searchmoviebtn_4_clicked();

    void on_searchmoviebtn_5_clicked();

    void on_searchmoviebtn_6_clicked();

    void on_searchmoviebtn_7_clicked();

    void on_searchmoviebtn_8_clicked();


    void on_threepage_clicked();

private:
    void showdescriptionbox(int btn_number);
    Ui::HomePage *ui;
    QSqlDatabase userdatabase;
    QSqlQuery Wquery;
    QString username,lusername , intusername;
    QIcon search,house,whitesearch,whitehouse,gear,whitegear,sun,moon,right,left,whitestar,star;
    QPixmap logo,blacklogo;
    int position_1 = 0;
    int position_2 = 0;
    int position_3 =0;
    int brightness = 0;
    int lockbtn_2,lockbtn_1,lockbtn_3;
    bool lock1;
     QList<QDate> ordereddate;
    int rating=0;
    /// here the moviename field was preerxisting before i took it out to on ratebtn clicked func
    int btn_number;
    void showdescriptionbox2(int btn_number);
    QList<int> PrefferedMovieID;
    int foryouorlatest;
    QList<int> PrefferedMovieforlatestID;
    void showforyoupage(int position);
    void showlatestmovies(int position);
    void hidepage();
        void showpage();
    int pageno=1;
        void showtoprated(int position);
    QList<int> _movielist;
        void showdescriptionbox3(int btn_number);
    int discoverornot = 0;
        int _position =0;
    int lockbtn_4;
        bool alreadyvisited=false;
    QList<int> intmovieidlists;
        int checkbox =0;
    void showdescriptionbox4(int btn_number);
        QString name;
    void on_no_starclicked();
        QString aname;
    void showcontent();
            void hidecontent();
};

#endif // HOMEPAGE_H
