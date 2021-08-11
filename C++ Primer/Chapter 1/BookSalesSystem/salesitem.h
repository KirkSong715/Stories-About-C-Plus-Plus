#ifndef SALESITEM_H
#define SALESITEM_H

#include "iostream"

using namespace std;
class SalesItem
{

    friend std::istream operator>>(std::istream&, SalesItem&);  //友元函数
    friend std::ostream operator<<(std::ostream&, const SalesItem&);
    friend bool operator<(const SalesItem&, const SalesItem&);
    friend bool operator==(const SalesItem&, const SalesItem&);

public:
    SalesItem();

private:
    std::string bookNo;

    //inline函数 内联函数
};

#endif // SALESITEM_H
