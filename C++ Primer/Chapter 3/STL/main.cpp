#include <QCoreApplication>

#include "stringclass.h"
#include "vectorclass.h"
#include "arrayclass.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //StringClass stringC;

    //VectorClass vecC;

    ArrayClass arrClass;

    return a.exec();
}
