#include "vectorclass.h"

using namespace std;
VectorClass::VectorClass()
{

    vector<string> intVec;
    for(unsigned int i = 0; i != 100; i++)
    {
        intVec.push_back("aa");
    }

    for(auto it = intVec.begin(); it != intVec.end() && (*it).empty(); ++it)
    {

    }


//    for(auto it = intVec.begin(); it != intVec.end() && !isspace(*it); ++it)
//    {
//        *it = toupper(*it);
//        qDebug()<<*it;
//    }
//    vector<int>::iterator t1;

    //_Vector_iterator<int> it_Vec = intVec.begin();


    //qDebug()<<intVec.begin();

//    struct Navi
//    {
//        int ID;
//        double lon;
//        double lat;
//    };
//    Navi a;
//    a.ID = 100;
//    a.lon = 123.456;
//    a.lat = 456.789;

//    QHash<int, Navi> naviHash;

//    naviHash.insert(a.ID, a);

//    for(auto it = naviHash.begin(); it != naviHash.end() && naviHash.empty(); ++it)
//    {
//        qDebug()<< it.value().ID;
//    }


}
