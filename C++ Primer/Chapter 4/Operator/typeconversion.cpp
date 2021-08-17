#include "typeconversion.h"

using namespace std;
TypeConversion::TypeConversion()
{
    // static_cast<>()    类型转换，只要不包含 底层const，都可以使用static_cast
    // 顶层const是指 指针本事是const对象
    int a = 10;
    int b = 20;

    double c = static_cast<double>(a) / b;

    qDebug()<<"c:"<<c;

//    float d = 10.0;
//    void *p = &d;
//    float *dp = static_cast<float *>(p);            //在这个过程中， 必须要保证内存地址一致。

    //qDebug()<<*dp;

    // const_cast<>()    只能改变运算对象的底层const  指向的对象是const对象
//    const int cstInt = 10;
//    const int* cstIntP = &cstInt;          //是个指针，指向const int类型

//    int *intP = const_cast<int *>(cstIntP);

//    qDebug()<<cstInt;

    //string str = const_cast<char>(cp);


}
