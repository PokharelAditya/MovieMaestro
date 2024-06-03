#ifndef USER_H
#define USER_H

#include <QDialog>

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
    void on_haveanaccountlabel_linkActivated(const QString &link);

private:
    Ui::User *ui;
};

#endif // USER_H
