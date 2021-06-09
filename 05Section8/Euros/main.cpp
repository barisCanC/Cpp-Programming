#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to euro to dolar converter " <<endl;
    float dolar_per_euro{1.19};
    
    cout << "Please enter euro amount converted : ";
    float euros{0.0};
    cin >> euros;
    
    float dolars {euros * dolar_per_euro};
    cout << euros << " euros equal to " << dolars << " dolars" << endl;
    
    
    
}










