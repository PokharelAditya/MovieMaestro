#ifndef UPDATEMOVIES_H
#define UPDATEMOVIES_H

#include <QWidget>

namespace Ui {
class updatemovies;
}

class updatemovies : public QWidget
{
    Q_OBJECT

public:
    explicit updatemovies(QWidget *parent = nullptr);
    ~updatemovies();

private slots:
    void on_BackToAdminOptions_clicked();

private:
    Ui::updatemovies *ui;
};

#endif // UPDATEMOVIES_H
