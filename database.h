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
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","AdminLoginDataConnection");
        db.setDatabaseName(QCoreApplication::applicationDirPath() + "/AdminAuthentication.db");
        if(!db.open())
        {
            QMessageBox::critical(nullptr,"Error","Failed to connect admin database");
        }
        return db;
    }

    static void closeAdminLoginData()
    {
        QSqlDatabase db = QSqlDatabase::database("AdminLoginDataConnection");
        if(db.isOpen())
        {
            db.close();
        }
    }

    static QSqlDatabase getMoviesData()
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","MoviesDataConnection");
        db.setDatabaseName(QCoreApplication::applicationDirPath() + "/Movies.db");
        if(!db.open())
        {
            QMessageBox::critical(nullptr,"Error","Failed to connect movies database");
        }
        QSqlQuery query(db);
        query.prepare("PRAGMA foreign_keys = ON");
        query.exec();
        return db;
    }

    static void closeMoviesData()
    {
        QSqlDatabase db = QSqlDatabase::database("MoviesDataConnection");
        if(db.isOpen())
        {
            db.close();
        }
    }
};

#endif // DATABASE_H
