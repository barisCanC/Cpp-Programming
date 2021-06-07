#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num{100};
    int &ref{num};
    int *ref_ref{&ref};
    
    cout << &num << endl;
    cout << ref << endl;
    cout << &ref << endl;
    
    int m{};
    ref = m;
    cout << "\n" << ref << endl;
    cout << &ref << endl;
    cout << num << endl;
    num = 3;
    cout << "\n" << ref << endl;
    cout << &ref << endl;
    cout << num << endl;
    
    vector <string> stooges{"Lary", "Curly", "Mary"};
    for(auto str : stooges){
        str = "Funny";
        cout << str << " ";
    }
    cout << endl;
    for(auto const str : stooges)
        cout << str << " " ;
    
    for(auto &str : stooges)
        str = "Funny";
    cout << endl;
    for(auto const str : stooges)
        cout << str << " " ;
    
    cout << endl;
}










