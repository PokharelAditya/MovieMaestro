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

    void on_leye_clicked();

    void on_lclearusernamebtn_clicked();

    void on_lclearpasswordbtn_clicked();

    void on_goback_clicked();

    void on_alreadyregistered_clicked();

    void on_loginbutton_clicked();

    void on_lusernameslot_returnPressed();

    void on_lpasswordslot_returnPressed();

    void on_usernameslot_returnPressed();

    void on_passwordslot_returnPressed();

    void on_passwordslot_2_returnPressed();

    void on_adminloginbtn_clicked();

    void on_submit_clicked();

    void on_left_clicked();

    void on_usernameslot_textChanged(const QString &arg1);

private:
    int lcount=0;
    int count =0;
    int horror =0 , action =0 , thriller =0, romance =0, comedy =0, rom_com=0, drama=0, sci_fi=0,history=0, suspense=0;
    Ui::User *ui;
    bool checklength(const QString &text, bool ispassword);// changed
     bool containsSpecialCharAndNumber(const QString &text);
    QLineEdit *usernameslot;//changed you have to declar all the user defined datatypes you are going to make in .header file and then only provdie implementation in the .cpp file
    QLineEdit *passwordslot;// changed
    QLineEdit *passwordslot_2; // changed here the data type is QLineEdit
    bool checkifalreadyexists(QString &user_id);
    bool adduserdata(QString &user_id , QString &password);
    bool isquerypass;
     QIcon OpenEye,CloseEye,Cross,left;
    void setredusernamelineedit();
    void setredpasswordlineedit();
    int charToInt(QChar ch);
    QChar intToChar(int num);
    int mod(int a, int b);
    QString encrypt(const QString &plaintext);
    int determinant(const QVector<QVector<int>> &matrix);
    int modularInverse(int a, int m);
    QVector<QVector<int>> inverseMatrix(const QVector<QVector<int>> &matrix);
    QString decrypt(const QString &ciphertext);
};

#endif // USER_H
