#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num{10};
    cout << "Value of num is : " << num << endl;
    cout << "size of num is : " << sizeof num << endl;
    cout << "Address of num is : " << &num << endl;
    
    int * p{&num };
    cout << "\nValue of p is : " << p << endl;
    cout << "size of p is : " << sizeof p << endl;
    cout << "Address of p is : " << &p << endl;
    
    
    
}










