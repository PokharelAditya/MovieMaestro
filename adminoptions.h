#ifndef ADMINOPTIONS_H
#define ADMINOPTIONS_H

#include <QWidget>
#include <QMessageBox>

extern QString option;

namespace Ui {
class adminoptions;
}

class adminoptions : public QWidget
{
    Q_OBJECT

public:
    explicit adminoptions(QWidget *parent = nullptr);
    ~adminoptions();

private slots:
    void on_Settings_clicked();

    void on_ExitButton_clicked();

    void on_LogOutButton_clicked();

    void on_AEmailChangeButton_clicked();

    void on_AUsernameChangeButton_clicked();

    void on_APasswordChangeButton_clicked();

    void on_TwoFAChangeButton_clicked();

    void on_ASQChangeButton_clicked();

    void on_BackToAdminOptions_clicked();

    void on_NextButton_clicked();

    void on_VPassword_returnPressed();

    void on_ShowHidePW_clicked();

    void on_BackToPassword_clicked();

    void on_TwoFA1_textChanged();

    void on_TwoFA2_textChanged();

    void on_TwoFA3_textChanged();

    void on_TwoFA4_textChanged();

    void on_NextButton2FA_clicked();

    void on_cancelEmail_clicked();

    void on_changeEmail_clicked();

    void on_newEmail_returnPressed();

    void on_cancelUN_clicked();

    void on_changeUN_clicked();

    void on_newUN_returnPressed();

    void on_cancelPW_clicked();

    void on_changePW_clicked();

    void on_newPassword_returnPressed();

    void on_cnewPassword_returnPressed();

    void on_cancel2FA_clicked();

    void on_change2FA_clicked();

    void on_new2FA_returnPressed();

    void on_cnew2FA_returnPressed();

    void on_ShowHideNPW_clicked();

    void on_ShowHide2FA_clicked();

    void on_cancelSQ_clicked();

    void on_changeSQ_clicked();

    void on_viewButton_clicked();

    void on_addButton_clicked();

    void on_updateButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::adminoptions *ui;
    QIcon SettingsGlow,SettingsBack;
    bool SettingsClick;
    bool pwvisible;
    QIcon OpenEye,CloseEye;

    void verification();
};

#endif // ADMINOPTIONS_H
