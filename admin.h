#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QTSql>
#include <QDebug>

namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

    void accessDB(int &,QString &,QString &,QString &,int &);
    bool un_check(QString);
    bool pw_check(QString);
    bool twoFA_check(int);

private slots:
    void on_BackToUser_clicked();

    void on_ShowHidePW_clicked();

    void on_LogInButton_clicked();

    void on_TwoFA1_textChanged();

    void on_TwoFA2_textChanged();

    void on_TwoFA3_textChanged();

    void on_TwoFA4_textChanged();

    void on_ConfirmButton_clicked();

    void on_BackToAdmin_clicked();

    void on_forgotPassword_clicked();

    void on_forgotTwoFA_clicked();

private:
    Ui::Admin *ui;
    bool pwvisible;
    QIcon OpenEye,CloseEye;
};

extern Admin *ad;

#endif // ADMIN_H
