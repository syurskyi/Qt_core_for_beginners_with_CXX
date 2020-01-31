#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 44; //can change
    const int id = 215; //can not change

//    id = 1112;
    qInfo() << "Id: " << id;

    return a.exec();
}
