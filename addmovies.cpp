#include "addmovies.h"
#include "ui_addmovies.h"
#include "adminoptions.h"
#include "database.h"

addmovies::addmovies(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::addmovies),
    MoviesData(database::instance().getMoviesData())
{
    ui->setupUi(this);
    ui->BackToAddMovies->hide();
    ui->BackToAddMovies2->hide();
    ui->addMoviesBox2->hide();
    ui->genresBox->hide();

    QIntValidator *intValidator = new QIntValidator(0,999,this);
    ui->duration->setValidator(intValidator);

    QDoubleValidator *doubleValidator = new QDoubleValidator(0,5,1,this);
    ui->rating->setValidator(doubleValidator);
}

addmovies::~addmovies()
{
    delete ui;
}

void addmovies::on_BackToAdminOptions_clicked()
{
    close();
    adminoptions *ao = new adminoptions();
    ao->show();
}

void addmovies::on_nextButton_clicked()
{
    ui->addMoviesBox->hide();
    ui->BackToAdminOptions->hide();
    ui->BackToAddMovies->show();
    ui->addMoviesBox2->show();
}

void addmovies::on_BackToAddMovies_clicked()
{
    ui->BackToAddMovies->hide();
    ui->addMoviesBox2->hide();
    ui->BackToAddMovies2->hide();
    ui->genresBox->hide();
    ui->addMoviesBox->show();
    ui->BackToAdminOptions->show();
}

void addmovies::on_nextButton2_clicked()
{
    ui->BackToAddMovies->hide();
    ui->addMoviesBox2->hide();
    ui->BackToAddMovies2->show();
    ui->genresBox->show();
}


void addmovies::on_BackToAddMovies2_clicked()
{
    ui->BackToAddMovies2->hide();
    ui->genresBox->hide();
    ui->BackToAddMovies->show();
    ui->addMoviesBox2->show();
}

void addmovies::on_poster_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Select Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
    if(!imagePath.isEmpty())
    {
        QPixmap pixmap(imagePath);
        if(!pixmap.isNull())
        {
            ui->posterLabel->setPixmap(pixmap);
            ui->poster->setText(imagePath);
        }
        else
        {
            QMessageBox::critical(this,"Error","Could not load image.");
        }
    }
}

bool addmovies::check_if_movie_already_exist(QString title)
{
    QSqlQuery query(MoviesData);
    query.prepare("SELECT title from movies");
    query.exec();
    while(query.next())
    {
        if(query.value(0).toString().toUpper() == title.toUpper())
        {
            return 1;
        }
    }
    return 0;
}

void addmovies::on_addButton_clicked()
{
    QDate d = ui->date->date();

    QString title = ui->title->text(),
            date = d.toString("yyyy-MM-dd"),
            description = ui->description->toPlainText(),
            directors = ui->directors->toPlainText(),
            casts = ui->casts->toPlainText();

    double duration = ui->duration->text().toDouble(),
           rating = ui->rating->text().toDouble();

    bool action = ui->action->isChecked(),
         comedy = ui->comedy->isChecked(),
         crime = ui->crime->isChecked(),
         drama = ui->drama->isChecked(),
         history = ui->history->isChecked(),
         horror = ui->horror->isChecked(),
         romance = ui->romance->isChecked(),
         scifi = ui->scifi->isChecked(),
         suspense = ui->suspense->isChecked(),
         thriller = ui->thriller->isChecked();

    if(title.isEmpty())
    {
        QMessageBox::warning(this,"Error","Title of the movie cannot be empty.");
        on_BackToAddMovies_clicked();
        ui->title->setFocus();
    }
    else if(ui->duration->text().isEmpty())
    {
        QMessageBox::warning(this,"Error","Duration of the movie cannot be empty.");
        on_BackToAddMovies_clicked();
        ui->duration->setFocus();
    }
    else if(ui->rating->text().isEmpty())
    {
        QMessageBox::warning(this,"Error","Rating of the movie cannot be empty.");
        on_BackToAddMovies_clicked();
        ui->rating->setFocus();
    }
    else if(rating>5)
    {
        QMessageBox::warning(this,"Error","Rating of the movie cannot be greater than 5.");
        on_BackToAddMovies_clicked();
        ui->rating->clear();
        ui->rating->setFocus();
    }
    else if(description.isEmpty())
    {
        QMessageBox::warning(this,"Error","Description of the movie cannot be empty.");
        on_BackToAddMovies_clicked();
        ui->description->setFocus();
    }
    else if(directors.isEmpty())
    {
        QMessageBox::warning(this,"Error","Directors of the movie cannot be empty.");
        on_BackToAddMovies2_clicked();
        ui->directors->setFocus();
    }
    else if(casts.isEmpty())
    {
        QMessageBox::warning(this,"Error","Casts of the movie cannot be empty.");
        on_BackToAddMovies2_clicked();
        ui->casts->setFocus();
    }
    else if(action==0 && comedy==0 && crime==0 && drama==0 && history==0 && horror==0 && romance==0 && scifi==0 && suspense==0 && thriller==0)
    {
        QMessageBox::warning(this,"Error","At lease one genre has to be selected.");
    }
    else if(ui->poster->text() == "Upload Poster")
    {
        QMessageBox::warning(this,"Error","Please upload a poster.");
        on_BackToAddMovies_clicked();
    }
    else
    {
        if(check_if_movie_already_exist(ui->title->text()))
        {
            if(QMessageBox::critical(this,"Error","Movie with same title already exists. Do you still want to add this movie?",QMessageBox::Yes,QMessageBox::No) != QMessageBox::Yes)
            {
                return;
            }
        }

    }
}
