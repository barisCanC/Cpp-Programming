#include <iostream>
#include <vector>
#include <string>

using namespace std;

void scale_number(int &num);
void swap_numbers(int &, int &);

void set_vector(vector<int>&, int);
void print_vector(const vector<int>&);

void pass_by_reference(string &str);

int main()
{
    int number{100};
    cout << "Old number is : " << number << endl;
    
    scale_number(number);
    
    cout << "New number is : " << number << endl;
    
    int num1{}, num2{};
    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;
    cout << "Your numbers are: "<< num1 << " " << num2 <<endl;
    
    swap_numbers(num1, num2);
    cout << "Your numbers are now : "<< num1 << " " << num2 <<endl;
    
    vector<int> data{1, 2, 3, 4, 5};
    cout << "Your data : ";
    print_vector(data);
    
    set_vector(data, 7);
    cout << "Your new data : ";
    print_vector(data);
    
    string str{"Hello"};
    cout << "String was : " << str << endl;
    pass_by_reference(str);
    cout << "String is now : " << str << endl;
    
    
    cout << endl;
}

void pass_by_reference(string &str)
{
    str = "Changed";
}

void print_vector(const vector<int> &numbers)        //pass by constant reference ; bu sayede print edilecek veriler kopyalanmamış olup değiştirilemez
{
    for(auto n : numbers)
        cout << n << " ";
    cout << endl;
//    numbers.at(3) = 4;            //error
}

void set_vector(vector<int>&numbers , int value)
{
    for(size_t i{}; i < numbers.size(); i++)
        numbers.at(i) = value;
}

void swap_numbers(int &n1, int &n2)
{
    int temp{n1};
    n1 = n2;
    n2 = temp;
}

void scale_number(int &num)
{
    if(num > 10)
        num = 10;
}










