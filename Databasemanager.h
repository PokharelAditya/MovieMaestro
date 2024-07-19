#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QCoreApplication>
#include <QMessageBox>

class DatabaseManager {
public:
    static DatabaseManager& instance() {
        static DatabaseManager instance;
        return instance;
    }

    QSqlDatabase getDatabase() {
<<<<<<< HEAD
      static QSqlDatabase  userdatabase = QSqlDatabase::addDatabase("QSQLITE" , "myconnection");
=======
        userdatabase = QSqlDatabase::addDatabase("QSQLITE");
>>>>>>> 615f8ebc185aad1ad8b7f7b5737c6d09ef52dd8a
        if (!userdatabase.isOpen()) {
            userdatabase.setDatabaseName(QCoreApplication::applicationDirPath() + "/../userdatabase.db");
            if (!userdatabase.open()) {
                QMessageBox::warning(nullptr, "Database Info", "Failed to connect to the database: " + userdatabase.lastError().text(), QMessageBox::Ok);
            } else {
                QMessageBox::information(nullptr, "Database Info", "Connected to the database", QMessageBox::Ok);
            }
        }
        return userdatabase;
    }









};

#endif // DATABASEMANAGER_H
