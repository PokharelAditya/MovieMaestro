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

    void on_brightnessmodebtn_clicked();



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

private:
    void showdescriptionbox(int btn_number);
    Ui::HomePage *ui;
    QSqlDatabase userdatabase;
    QString username,lusername;
    QIcon search,house,whitesearch,whitehouse,gear,whitegear,sun,moon,right,left,whitestar,star;
    QPixmap logo,blacklogo;
    int position_1 = 0;
    int position_2 = 0;
    int brightness = 0;
    int lockbtn_2,lockbtn_1;
     QList<QDate> ordereddate;
    int rating=0;
    /// here the moviename field was preerxisting before i took it out to on ratebtn clicked func
    int btn_number;
    void showdescriptionbox2(int btn_number);
    QList<int> PrefferedMovieID;
    int foryouorlatest;
    QList<int> PrefferedMovieforlatestID;
};

#endif // HOMEPAGE_H
