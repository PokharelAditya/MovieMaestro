#include "user.h"
#include "homepage.h"
#include <QApplication>
#include<QSettings>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSettings mysetting("myapp" ,"MovieMaestro");
    QString username = mysetting.value("username", "default").toString();
    bool islogged =mysetting.value("isLogged", false).toBool();
    qDebug()<<"the value lof user name is lol " <<username;

    if(islogged)
    {
        User *myuser = new User();
        myuser->_username = username;
       HomePage *myhomepage = new HomePage(myuser);
        myhomepage->show();
    }
    else
 {
       User *myuser = new User();
       myuser->show();
    }
     return a.exec();
}
