#ifndef ADDMOVIES_H
#define ADDMOVIES_H

#include <QWidget>
#include <QTSql>
#include <QFileDialog>
#include <QPixmap>

namespace Ui {
class addmovies;
}

class addmovies : public QWidget
{
    Q_OBJECT

public:
    explicit addmovies(QWidget *parent = nullptr);
    ~addmovies();

private slots:
    void on_BackToAdminOptions_clicked();

    void on_nextButton_clicked();

    void on_BackToAddMovies_clicked();

    void on_nextButton2_clicked();

    void on_BackToAddMovies2_clicked();

    void on_addButton_clicked();

    void on_poster_clicked();

private:
    Ui::addmovies *ui;
    QSqlDatabase MoviesData;

    bool check_if_movie_already_exist(QString);
};

#endif // ADDMOVIES_H
