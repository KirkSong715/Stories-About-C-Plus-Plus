#include "constpointerclass.h"

ConstPointerClass::ConstPointerClass()
{
    // 关于 const 与 指针

    //指向 常量 的指针
    const double pi = 3.1415926;
    const double *pip = &pi;    //pip首先是个指针，这个指针指向const double类型



    //const指针
    int errNum = 20;
    int *const errP = &errNum;  //errP首先是一个const指针，这个指针指向int类型
    const double *const ppi = &pi;  //ppi是个const对象，这个对象是个指针，这个指针指向 const double 类型

    // 关于指针 和 constexpr
    const int *p = nullptr; // p是一个指针，这个指针 指向const int
    constexpr int *q = nullptr;     //如果在constexpr中定义了一个指针，限定符constexpr仅对指针有效，与指针所指的对象无关。
    //等价于 int const* q = nullptr; 指向int类型的const指针




}
