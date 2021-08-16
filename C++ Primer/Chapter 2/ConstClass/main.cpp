#include <QCoreApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // 关于const 修饰符
    //const int value = 100;
    //const int &ref = value;  // 常量引用是对const的引用

    //int value = 100;
    //const int &ref = value;  //对const的引用可能引用一个并非const的对象

    //double pi = 3.14;
    //const int &refpi = pi;  // 现在的refpi 是常量
    // 如果refpi不是常量
    //int &refpi = pi;  //这个时候 编译器就会认为是错误的。

    //qDebug()<<"pi refpi"<< pi <<refpi;


    //关于指针和const
    //指向常量的指针
//    const double pi = 3.14;
//    const double* p = &pi;

//    double value = 3.1415926;
//    p = &value;

//     //p:pi的地址 *p pi的值 &p p自己内存空间的地址。
//    qDebug()<<p<<*p<<&p<<&value;

    // const指针
//    int errNum = 10;
//    int *const curErr = &errNum;  //使用从右往左阅读的方法： 说明curErr是一个const对象，这个指向int类型的指针

//    *curErr = 0;
//    (*curErr)++;

//    int errNum = 0;
//    int *const errP = &errNum;  //指向int*指针的const对象

//    const double pi = 3.14;
//    const double *const ppi = &pi; c


//    qDebug()<<*curErr<<*ppi;

    //指向常量的指针
//    const int ci = 100;
//    const int *p = &ci; // p 是一个指针，这个指针指向const int类型

//    int aa = 200;
//    p = &aa;

//    qDebug()<<*p;

    constexpr int value = 100;


    const int *p = nullptr;     // p是一个指针， 这个指针指向 const int类型

    const double *const ppi = nullptr;  // ppi是一个 const对象， 然后这个const对象指向 const double 类型的指针

    constexpr int *pp = nullptr;    // pp是一个指向整数的常量指针


    // 然后再来讨论一下  顶层const  和 底层const
    // 顶层const 表示指针是个常量
    // 底层const 表示指针指向的对象是个常量

    typedef char* pstring;      //pstring 是char * 的别名
    const pstring cstr = 0;     //const char* cstr = 0;
    const pstring* ps = nullptr;        //



    return a.exec();
}
