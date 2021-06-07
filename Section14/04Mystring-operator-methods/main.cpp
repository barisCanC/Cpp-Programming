//Section 14
//Mystring-operator-methods
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring baris1{"BARIS"};
    Mystring baris2;
    
    baris2 = -baris1;           //to unary minus operator method, baris1.operator-();
    
    cout << "baris1 : ";
    baris1.display();
    cout << "baris2 : ";
    baris2.display();
    
    Mystring test1{"Test1"};
    Mystring test2;
    
    test2 = baris1 + " " + baris2 + test1;
    
    cout << endl;
}










