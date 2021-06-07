#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(const vector<string> *const v);
void display(const int *array, const int sentinel);

int main()
{
    int i{6};
    while(--i > 0)
        cout << i << " " ;
    cout << endl;
    
    vector<string> stooges{"Mary", "Curly", "Lary"};
    display(&stooges);
    
    int scores[]{90, 45, 67, 10, 33, -1};
    cout << "The value of scores array is : " << scores <<endl;
    display(scores, -1);
    cout << "The value of scores array is now: " << scores <<endl;
    
}

void display(const vector<string> *const v)
{
    cout << "The stooges are : " << endl;
    for(auto str : *v)
        cout << str << " ";
    cout << endl;
}

void display(const int *array, const int sentinel)
{
    cout << "The value of array is : " << array <<endl;
    cout << "Elements of array are: " << endl;
    while(*array != sentinel)
        cout << *array++ << " " ;
    cout << "\nThe value of array is now: " << array <<endl;
    cout << endl;
}










