#include "stringclass.h"

using namespace std;
StringClass::StringClass()
{
//    string line;
//    while(getline(cin, line))
//    {
//        if(!line.empty())
//            cout << line << " " << line.size() << endl;
//    }

//    string str = "Hello" + string(" World!"); //const char[6]

    string str("Hello, World!!!!");
    decltype (str.size()) punctCount = 0;
    for(auto c : str)
        if(ispunct(c))
            punctCount++;

    //cout << punctCount;

}
