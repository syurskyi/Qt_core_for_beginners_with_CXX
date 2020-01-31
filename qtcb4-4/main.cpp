#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //enums

    //enum Color {red, green, blue}; //zero based
    enum Color {red = 100, green  = 56, blue = 8123}; //zero based
    Color mycolor = Color::blue;
    qInfo() << "Color: " << mycolor;
    Color mycolor2 = Color::green;
    qInfo() << "Color: " << mycolor2;

    return a.exec();
}
