#ifndef USER_H
#define USER_H
#include<QLineEdit>
#include <QDialog>
#include<QPushButton>
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

private:
    int count =0;
    Ui::User *ui;
    bool checklength(const QString &text, bool ispassword);// changed
     bool containsSpecialCharAndNumber(const QString &text);
    QLineEdit *usernameslot;//changed
    QLineEdit *passwordslot;// changed
    QLineEdit *passwordslot_2; // changed

};

#endif // USER_H
