#ifndef ADMINOPTIONS_H
#define ADMINOPTIONS_H

#include <QWidget>

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

private:
    Ui::adminoptions *ui;
    QIcon SettingsGlow,SettingsBack;
    bool SettingsClick;
    bool pwvisible;
    QIcon OpenEye,CloseEye;

    void verification();
};

#endif // ADMINOPTIONS_H
