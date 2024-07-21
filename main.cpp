#include "user.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    User *myuser = new User();myuser->show();
    return a.exec();
}
