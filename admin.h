#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QTSql>
#include <QMessageBox>
#include "homepage.h"
namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

    bool un_check(QString);
    bool pw_check(QString);
    bool twoFA_check(int);
    void accessDB(int &,QString &,QString &,QString &,int &,QString &,QString &,QString &,QString &);
    bool storeDB(int &,QString &,QString &,QString &,int &,QString &,QString &,QString &,QString &);

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

    void on_BackTo2FA_clicked();

    void on_nextButton_clicked();

    void on_SQ1ans_returnPressed();

    void on_SQ2ans_returnPressed();

    void on_cancelPW_clicked();

    void on_ShowHideNPW_clicked();

    void on_resetPW_clicked();

    void on_newPassword_returnPressed();

    void on_cnewPassword_returnPressed();

    void on_cancel2FA_clicked();

    void on_ShowHide2FA_clicked();

    void on_reset2FA_clicked();

    void on_new2FA_returnPressed();

    void on_cnew2FA_returnPressed();

private:
    Ui::Admin *ui;

    QSqlDatabase AdminLoginData;

    bool pwvisible;
    QIcon OpenEye,CloseEye;

    QString encrypt(QString);
    QString decrypt(QString);
    void securityQuestions();
};

extern Admin *ad;

#endif // ADMIN_H
