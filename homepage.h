#ifndef HOMEPAGE_H
#define HOMEPAGE_H
#include "user.h"
#include <QDialog>
#include<QSettings>
#include<QWidget>
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

private:

    Ui::HomePage *ui;
     QSqlDatabase userdatabase;
    QString username;
     QIcon search,house,whitesearch,whitehouse,gear,whitegear,sun,moon,right,left;
    QPixmap logo,blacklogo;
     int position_1 = 0;
    int position_2 = 0;
    int brightness = 0;
};

#endif // HOMEPAGE_H
