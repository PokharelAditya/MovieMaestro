#include "mainwindow.h"
#include "user.h"
#include "admin.h"

#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    User *myuser = new User();myuser->show();
    //Admin *myadmin = new Admin();myadmin->show();
    return a.exec();
}
