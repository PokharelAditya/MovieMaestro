#ifndef HOMEPAGE_H
#define HOMEPAGE_H
#include "user.h"
#include <QDialog>

namespace Ui {
class HomePage;
}

class HomePage : public QDialog
{
    Q_OBJECT

public:
    explicit HomePage(User *myuser,QWidget *parent = nullptr);
    ~HomePage();

private slots:
    void on_userpagebtn_clicked();

private:
    Ui::HomePage *ui;
};

#endif // HOMEPAGE_H
