#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num{};
    
    cout << "Enter a number (float) : " ;
    cin >> num;
    
    cout << "The square root of " << num << " is : " << sqrt(num) << endl;
    cout << "The cubic root of " << num << " is : " << cbrt(num) << endl;
    
    cout << "The sin of " << num << " is : " << sin(num) << endl;
    cout << "The cos of " << num << " is : " << cos(num) << endl;
    
    cout << "The ceil of " << num << " is : " << ceil(num) << endl;
    cout << "The floor of " << num << " is : " << floor(num) << endl;
    cout << "The round of " << num << " is : " << round(num) << endl;
    
    cout << "\nEnter  a power to raise : " ;
    float power {};
    cin >> power;
    cout << num << " raised to the " << power << " power is : " << pow(num, power) << endl;

    
    
    
}










