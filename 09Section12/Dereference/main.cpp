#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> stooges{"Mary", "Curl", "Larry"};
    vector<string> * vector_ptr{&stooges};
    
    cout << "Fitst sooge : " << (*vector_ptr).at(0) << endl;
    
    for(auto stooge : *vector_ptr)
        cout << stooge << " ";
    cout << endl;
 
    cout << endl;
}










