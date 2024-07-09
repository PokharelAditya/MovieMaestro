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
        static QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE","AdminLoginDataConnection");
        db1.setDatabaseName(QCoreApplication::applicationDirPath() + "/AdminAuthentication.db");
        if(!db1.isOpen())
        {
            if(!db1.open())
            {
                QMessageBox::critical(nullptr,"Error","Failed to connect admin database");
            }
        }
        return db1;
    }

    static QSqlDatabase getMoviesData()
    {
        static QSqlDatabase db2 = QSqlDatabase::addDatabase("QSQLITE","AdminLoginDataConnection");
        db2.setDatabaseName(QCoreApplication::applicationDirPath() + "/Movies.db");
        if(!db2.isOpen())
        {
            if(!db2.open())
            {
                QMessageBox::critical(nullptr,"Error","Failed to connect movies database");
            }
        }
        return db2;
    }
};

#endif // DATABASE_H
