#include <iostream>
#include <string.h>

using namespace std;

int main()
{
//    string str {"12345"};
//    string str {"C++isFun!"};
//    string str {"ABC"};
//    string str {"ABCDEFG"};
//    string str {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    
    cout << "Please enter a string : \n" ;
    string str ;
    getline(cin, str);
    
    for(size_t i{}; i < str.size() ; i++){              // 0, 1, 2, 3
//        string space (str.size() - 1 - i, ' ');                       // use below one
//        cout << space;
        cout <<  string  (str.size() - 1 - i, ' ');
//        for(size_t j{}; j <= i; j++)          // use below one
//            cout << str.at(j);
        cout << str.substr(0, i + 1);
        for(size_t k{ i }; k > 0; k--)
            cout << str.at(k - 1);
        cout << endl;
    }
    
}











