#ifndef DATABASE_H
#define DATABASE_H

#include <QTSql>
#include <QCoreApplication>
#include <QMessageBox>

class database
{
    private:
    database() = default;
    ~database() = default;

    database(const database&) = delete;
    database& operator=(const database&) = delete;

    public:
    static QSqlDatabase getAdminLoginData()
    {
        static QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","AdminLoginDataConnection");
        db.setDatabaseName(QCoreApplication::applicationDirPath() + "/AdminAuthentication.db");
        if(!db.isOpen())
        {
            if(!db.open())
            {
                QMessageBox::critical(nullptr,"Error","Failed to connect admin database");
            }
        }
        return db;
    }

    static QSqlDatabase getMoviesData()
    {
        static QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","MoviesDataConnection");
        db.setDatabaseName(QCoreApplication::applicationDirPath() + "/Movies.db");
        if(!db.isOpen())
        {
            if(!db.open())
            {
                QMessageBox::critical(nullptr,"Error","Failed to connect movies database");
            }
        }
        return db;
    }
};

#endif // DATABASE_H
