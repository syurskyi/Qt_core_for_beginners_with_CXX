#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //https://www.geeksforgeeks.org/c-data-types/

    int age = 44;
    double height = 6.02;

    //Create a warning
    age = 44.90;
    qInfo() << "Age: " << age;

    signed int dogs = -1;
    qInfo() << "Dogs: " << dogs;
    dogs = 15;
    qInfo() << "Dogs: " << dogs;

    unsigned int cats = -1; // will cause an issue!!!
    qInfo() << "Cats: " << cats;
    cats = 15;
    qInfo() << "Cats: " << cats;

    qInfo() << sizeof (dogs);
    qInfo() << sizeof (cats);
    qInfo() << sizeof (height);

    return a.exec();
}
