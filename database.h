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

    QSqlDatabase db;

    public:
    static database& instance()
    {
        static database instance;
        return instance;
    }

    QSqlDatabase getAdminLoginData()
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(QCoreApplication::applicationDirPath() + "/AdminAuthentication.db");
        if(!db.open())
        {
            QMessageBox::critical(nullptr,"Error","Failed to connect database");
        }
        return db;
    }

    QSqlDatabase getMoviesData()
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(QCoreApplication::applicationDirPath() + "/Movies.db");
        if(!db.open())
        {
            QMessageBox::critical(nullptr,"Error","Failed to connect database");
        }
        return db;
    }
};

#endif // DATABASE_H
