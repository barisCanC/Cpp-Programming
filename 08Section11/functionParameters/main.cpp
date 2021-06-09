#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);       // !!!!!!!!!!!! it's no different when u use objects !!!!!!!!!!!!!!!!!!!!
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

int main()
{
    int num{10};
    
    string name{"Baris"};
    cout << "name before calling pass_by_value2 : " << name << endl;
    pass_by_vale2(name);
    cout << "name after calling pass_by_value2 : " << name << endl;
    
    vector <string> stooges{"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3 : " ;
    print_vector(stooges);
    pass_by_vale3(stooges);
    cout << "\nstooges after calling pass_by_value3 : " ;
    print_vector(stooges);
    
    cout << endl;
}

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector<string> v)
{
    v.clear();
}

void print_vector(vector<string> v)
{
    for(auto s : v)
        cout << s << "  " ;
    cout << endl;
}










