#include <QCoreApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    signed char singedChar= -128;
    singedChar = singedChar - 256;
    qDebug()<<singedChar;


    return a.exec();
}

