#ifndef UPDATEMOVIES_H
#define UPDATEMOVIES_H

#include <QWidget>
#include <QEvent>
#include <QPixmap>
#include <QFileDialog>

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

    void on_Previous_clicked();

    void on_Next_clicked();

    void on_poster_1_clicked();

    void on_poster_2_clicked();

    void on_poster_3_clicked();

    void on_poster_4_clicked();

    void on_poster_5_clicked();

    void on_poster_6_clicked();

    void on_poster_7_clicked();

    void on_poster_8_clicked();

    void on_poster_9_clicked();

    void on_poster_10_clicked();

    void on_poster_11_clicked();

    void on_poster_12_clicked();

    void on_poster_13_clicked();

    void on_poster_14_clicked();

    void on_viewDoneButton_clicked();

    void on_deleteCancelButton_clicked();

    void on_deleteDeleteButton_clicked();

    void on_updateCancelButton_clicked();

    void on_poster_clicked();

    void on_updateUpdateButton_clicked();

protected:
    bool eventFilter(QObject *, QEvent *) override;

private:
    Ui::updatemovies *ui;

    void setTitle(int);
    void setPoster(int);
    void viewupdatedelete(int);
};

#endif // UPDATEMOVIES_H
