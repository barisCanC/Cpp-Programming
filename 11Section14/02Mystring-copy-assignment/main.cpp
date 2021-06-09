//Section 14
//Mystring-copy-assignment
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring empty;
    Mystring baris{"Hello"};
    cout << "baris.str : " << baris.get_str() << endl;
    Mystring can{baris};
    
    empty.display();
    baris.display();
    can.display();
    
    Mystring k{nullptr};
    Mystring h = nullptr;
    Mystring test{h};
    
    Mystring obj1{"Ahmet"};
    Mystring obj2;
    obj2 = obj1;            //obj2.operator=(obj1);
    
    obj2.display();
    
    obj2 = "This is a test";
    
    vector <Mystring> vec_test;
    vec_test.push_back("test1");
    vec_test.push_back("test2");
    
    cout << endl;
}










