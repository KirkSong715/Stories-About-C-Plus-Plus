#include "forclass.h"

using namespace std;
ForClass::ForClass()
{
    //范围for循环

//    vector<int> value{0, 1, 2, 3, 4, 5};
//    vector<int> vv{6,7,8,9,10};

//    for(auto &r : value)
//        qDebug()<<r;

    // 等价于下边这个
//    for(auto r = value.begin(); r != value.end(); r++)
//        qDebug()<<*r;


//    QHash<int, vector<int>> vecHash;
//    vecHash.insert(0, value);
//    vecHash.insert(1, vv);



//    for(auto r = vecHash.begin(); r != vecHash.end(); r++)
//    {
//        qDebug()<<"key:"<< r.key();
//        for(auto rr = r.value().begin(); rr != r.value().end(); rr++)
//        {
//            qDebug()<<*rr;
//        }
//    }

    // 范围for循环的写法
//    for(auto &rr : vecHash)     //遍历出来的是vector，但是找不到key  从尾开始输出
//    {
//        for(auto &r : rr)
//        {
//            qDebug()<<r;

//        }

//    }

    int a, b;
    while(cin >> a >>b)
    {
        try
        {
            if(a!=b)
                throw runtime_error("a!=b\n");

            cout <<"out:"<<a <<" "<<b;

        }
        catch (runtime_error err)
        {
            cout << err.what()
                 << "Try again y n" << endl;
            char c;
            cin >>c;

            if(!c || c == 'n' ||c == 'N')
            {
                break;
            }

        }
    }

//    cin >> a >>b;

//    if(a != b)
//        throw runtime_error("a != b");

//    cout <<a <<" " <<b;



}
















