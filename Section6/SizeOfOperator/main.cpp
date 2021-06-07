#include <iostream>
#include <climits>
#include<cfloat>
using namespace std;

int main ()
{
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "uint32_t: " << sizeof(uint32_t) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    
    cout << "=========================" << endl;
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;
    
     //use values defined in climits
    cout << "=========================" << endl;
    cout << "Minimum values: "<<endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LONG_LONG_MIN << endl;
    
    cout << "=========================" << endl;
    cout << "Minimum values: "<<endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LONG_LONG_MAX << endl;
     
     cout << "=========================" << endl;
     cout << "size of using variable names" <<endl;
     
     int age{21};
     cout<<"size of age: "<< sizeof(age) << " bytes" <<endl;
     cout<<"size of age: "<< sizeof age<< " bytes" <<endl;
     
     double wage{22.04};
     cout << "size of wage: " << sizeof(wage) << " bytes" <<endl;
     cout << "size of wage: " << sizeof wage << " bytes" <<endl;
}