#ifndef USER_H
#define USER_H
#include<QLineEdit>
#include <QDialog>
#include<QPushButton>
#include<QTSql>
#include<QDebug>
#include<QFileInfo>
namespace Ui {
class User;
}

class User : public QDialog
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private slots:


    void on_signupbutton_clicked();




    void on_eye_clicked();

    void on_clearusernamebtn_clicked();
    void on_clearpasswordbtn_clicked();

    void on_clearconfirmpasswordbtn_2_clicked();

private:
    int count =0;
    Ui::User *ui;
    bool checklength(const QString &text, bool ispassword);// changed
     bool containsSpecialCharAndNumber(const QString &text);
    QLineEdit *usernameslot;//changed you have to declar all the user defined datatypes you are going to make in .header file and then only provdie implementation in the .cpp file
    QLineEdit *passwordslot;// changed
    QLineEdit *passwordslot_2; // changed here the data type is QLineEdit
    bool checkifalreadyexists(QString &user_id);
    bool adduserdata(QString &user_id , QString &password);
    bool isquerypass;
     QIcon OpenEye,CloseEye;
};

#endif // USER_H
