#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

//void print(char);
void print(int = 82);
//void print(float);
void print(double);
//void print(double = 345.67);          //yukarıdaki int ile aynı anda default argument yaparsan error oluşur
void print(string);
void print(string, string);
void print(vector<string>);

int main()
{
    print();
    print(100);
    print('B');     //character is always promoted to int should print 66 in ASCII ('B')
    cout << "\n";
    
    cout << fixed << setprecision(5);
    print(123.45);
    print(123.77777F);         //float is promoted to double
    cout << "\n";
    
    print("C-style string");           // C-style string is converted to a C++ string
    cout << "\n";
    
    string s {"C++ string"};
    print(s);
    cout << "\n";
    
    print("C-style string", s);
    cout << "\n";
    
    vector<string> three_stooges{"Larry", "Moe", "Curly"};
    print(three_stooges);
    
    cout << endl;
}

//void print(char c)
//{
//    cout << "Printing character : " << c << endl;
//}

void print(int num)
{
    cout << "Printing integer : " << num << endl;
}

//void print(float num)
//{
//    cout << "Printing float : " << num << endl;
//}

void print(double num)
{
    cout << "Printing double : " << num << endl;
}

void print(string s)
{
    cout << "Printing string : " << s << endl;
}

void print(string s1, string s2)
{
    cout << "Printing sting1 : " << s1 << "\n string2: " << s2<< endl;
}

void print(vector<string> v)
{
    cout << "Printing vector of strings : " ;
    for(auto s : v)
        cout << s + " ";
    cout << endl;
}











