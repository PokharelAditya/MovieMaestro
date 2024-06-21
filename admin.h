#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>

namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_BackToUser_clicked();

    void on_ShowHidePW_clicked();

    void on_LogInButton_clicked();

    void on_TwoFA1_textChanged();

    void on_TwoFA2_textChanged();

    void on_TwoFA3_textChanged();

    void on_TwoFA4_textChanged();

    void on_ConfirmButton_clicked();

private:
    Ui::Admin *ui;
    bool pwvisible;
    QIcon OpenEye,CloseEye;
};
#endif // ADMIN_H
