#include <QCoreApplication>

#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    signed char singedChar= -128;
//    singedChar = singedChar - 256;
//    qDebug()<<singedChar;

//    for(int i = 0; i < 20; i++)
//    {
//        int data;
//        qDebug()<<data;
//    }

    //引用
//    int value = 100;
//    int& ref = value;

//    int i = 100;
//    int &refi = i;

//    int j = 200;
//    int &refj = j;

//    refi = 3;

//    qDebug()<<refi << i;


    // 关于指针  以及指针的指针(笔记里 再重新写一下)

//    int value = 100;

//    int* p = &value;        // int类型指针,p 指向value的地址， p指向地址的值就是一个地址。 p本身存在于内存的一个地址中。

//    qDebug()<<"value p.value p.addr &p" << value << *p << p <<&p;

//    int** pp =  &p;             // int类型指针的指针，  指向的是指针p， 所以pp应该是p的地址。

//    qDebug() << "pp.value = p.addr:" << pp <<*pp << **pp;

    // 下边是指向 指针的引用
//    int value = 40;
//    int* p = &value;  //指针
//    int* &ref = p;  //ref是一个对指针p的引用

//    ref = &value;  //



    return a.exec();
}





































