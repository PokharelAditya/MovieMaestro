#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
#include <QSqlDatabase>
#include <QCoreApplication>
#include <QMessageBox>

class DatabaseManager {
public:
    static QSqlDatabase& getDatabase() {
        static QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
        if (!database.isOpen()) {
            database.setDatabaseName(QCoreApplication::applicationDirPath() + "/../userdatabase.db");
            if (!database.open()) {
                QMessageBox::warning(nullptr, "Database Info", "Failed to connect to the database: " + database.lastError().text(), QMessageBox::Ok);
            } else {
                QMessageBox::information(nullptr, "Database Info", "Connected to the database", QMessageBox::Ok);
            }
        }
        return database;
    }

private:
    DatabaseManager() {} // private constructor to prevent instantiation
};

#endif // DATABASEMANAGER_H
