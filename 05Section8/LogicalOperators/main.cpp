#include <iostream>

using namespace std;

int main()
{
    const int lower{10}, upper{20};
    
    cout << boolalpha;
    
    //Determine if an entered integer in btw lower and upper
    cout << "Please enter an integer in btw " << lower << " and " << upper << " : " ;
    int num{};
    cin >> num;
    
//    bool within_bounds = ((num > lower) && (num < upper));
//    cout << "Your number is in btw " << lower << " and " << upper << " : " << within_bounds << endl;
//    
//    bool outside_bounds = ((num < lower) || (num > upper));
//    cout << "Your number is outside " << lower << " and " << upper << " : " << outside_bounds << endl;
    
    if((num > lower) && (num < upper))
        cout << "Your number is in btw " << lower << " and " << upper <<endl;
    else if((num < lower) || (num > upper))
        cout << "Your number is outside " << lower << " and " << upper << endl;
    else
        cout << "Your number is on one of boundries " << endl;
        
        if(8 > 9)//mğıojmğoımğ
        //jğoıjnm
            cout <<"deneme" ;
            
    
    
}










