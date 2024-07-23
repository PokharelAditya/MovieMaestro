#ifndef USERSETTING_H
#define USERSETTING_H
#include"homepage.h"
#include"user.h"
#include <QDialog>
#include<QString>
#include<QList>
#include<QGroupBox>
namespace Ui {
class UserSetting;
}

class UserSetting : public QDialog
{
    Q_OBJECT

public:
    explicit UserSetting(User *myuser,QWidget *parent = nullptr);
    ~UserSetting();

private slots:
    void on_changepwbtn_clicked();

    void on_updategenrebtn_clicked();

    void on_updateppbtn_clicked();

    void on_changegenrebtn_clicked();

    void on_updategenrebtn_2_clicked();

    void on_updatebtn_clicked();

    void on_updateprofilepicbtn_clicked();

    void on_profilepicbtn_clicked();

    void on_updateprofilepicbtn_2_clicked();

    void on_backpw_clicked();

    void on_backgenre_clicked();

    void on_gobackbtn_clicked();

    void on_backpp_clicked();

private:
    Ui::UserSetting *ui;
    int horror =0 , action =0 , thriller =0, romance =0, comedy =0, rom_com=0, drama=0, sci_fi=0,history=0, suspense=0;
    QString tusername;
       QList<int> thirdlist;
    QByteArray imageData;
         QByteArray imageData2;
     QPixmap pixmap;
         void backpressed(QGroupBox *mybox);
};

#endif // USERSETTING_H
