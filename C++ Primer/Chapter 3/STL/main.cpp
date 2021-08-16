#include <QCoreApplication>

#include "stringclass.h"
#include "vectorclass.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    StringClass stringC;

    VectorClass vecC;

    return a.exec();
}
