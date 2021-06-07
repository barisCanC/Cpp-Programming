//Section 14
//Mystring - starting point
#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring empty;
    Mystring baris{"Hello"};
    Mystring can{baris};
    
    empty.display();
    baris.display();
    can.display();
    
    Mystring k{nullptr};
    Mystring h = nullptr;
    Mystring test{h};
    
    cout << endl;
}










