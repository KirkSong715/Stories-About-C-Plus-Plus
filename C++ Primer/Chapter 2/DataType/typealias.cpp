#include "typealias.h"

TypeAlias::TypeAlias()
{
    typedef char *pstring;  //char* 的类型别名是 pstring
    const pstring cstr = 0; //const修饰的是一个指向char类型的指针。是一个const指针，指向char类型

    //const * cstr = 0;

    const pstring *cstrp = nullptr; //cstrp 是一个指针，这个指针指向 指向char类型的常量指针


    int i = 0, &r = i;  // int &r = i; 是一个int类型的引用
    auto a = r;     //a是一个整数

    //auto 会忽略顶层const，但是一般不会忽略底层const

    const int ci = i, &rc = ci;
    auto b = ci;            //顶层const 本身是一个常量，然后会忽略掉


}
