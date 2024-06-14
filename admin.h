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

private:
    Ui::Admin *ui;
    bool pwvisible;
    QIcon OpenEye,CloseEye;
};
#endif // ADMIN_H
