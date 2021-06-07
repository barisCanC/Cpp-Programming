#include <iostream>
#include <vector>
#include <cctype>
#include <string>         // std::string
#include <locale>         // std::locale, std::isdigit
#include <sstream>      // std::stringstream

using namespace std;

bool isNumber(string s);
void display_menu();
void handle_display(const vector<int>&list);
void display_list(const vector<int>&list);
void handle_add(vector<int>&list);
void handle_clear(vector<int>&list);
void handle_mean(const vector<int>&list);
void handle_smallest(const vector<int>&list);
void handle_largest(const vector<int>&list);
char get_selection();
void calculate_mean(const vector<int>&list);

int main()
{
    vector <int> list{1, 2, 3, 4};
    
    char selection{};
    do{
        display_menu();
        selection = get_selection();
        
        switch(selection){
            case 'P' :
                handle_display(list);
                break;
            
            case 'A' :
                handle_add(list);
                break;
            
            case 'C' :
                handle_clear(list);
                break;
            
            case 'M' :
                handle_mean(list);
                break;
            
            case 'S' :
                handle_smallest(list);
                break;
                
            case 'L' :
                handle_largest(list);
                break;
            
            case 'Q' :
                cout << "Quit" << endl;
                break;
            
            default : 
                cout << "Entered wrong char. Try again." << endl;
        }
    }while(selection != 'Q');
    cout << endl;
}

void display_menu()
{
    cout << "\n=========" <<endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "C - Clear the list" << endl;
    cout << "M - Mean of the numbers" << endl;
    cout << "S - The Smallest of the numbers" << endl;
    cout << "L - The largest of the numbers" << endl;
    cout << "Q - Quit" << endl;
}
char get_selection()
{
    char c{};
    cout << "\nPlease make a choice : " ;
    cin >> c;
    return toupper(c);
}

void handle_display(const vector<int>&list)
{
    if(!list.size())
        cout << "[] - the list is empty" << endl;
    else
        display_list(list);
}

void display_list(const vector<int>&list)
{
    cout << "[ " ;
    for(auto val : list)
        cout << val << " " ;
    cout << "]" << endl;
}

bool isNumber(string s)
{
    for (size_t i{}; i < s.length(); i++)
        if (!isdigit(s.at(i)))
            return false;
    return true;
}

void handle_add(vector<int>&list)
{
    cout << "Please enter a number : ";
    string str{};
    cin >> str;
    int number{};
    if(isNumber(str)){
        stringstream(str) >> number;
        list.push_back(number);
        cout << number << " added." << endl;
    }
    else
        cout << "Wrong char. You should enter just digits" << endl;
}

void handle_clear(vector<int>&list)
{
    list.clear();
    cout << "The list is cleared." << endl;
}

void handle_mean(const vector<int>&list)
{
    if(!list.size())
        cout <<"Unable to calculate the mean - no data" << endl;
    else
        calculate_mean(list);
}

void calculate_mean(const vector<int>&list)
{
    int sum{};
    for(int val : list)
        sum += val;
    float mean{static_cast<float>(sum) / list.size()};
    cout << "Mean of the numbers : " << mean << endl;
}

void handle_smallest(const vector<int>&list)
{
    if(!list.size())
        cout <<"Unable to determine the smallest number." << endl;
    else{
        int smallest{list.at(0)};
        for(int val : list)
            if(val < smallest)
                smallest = val;
        cout << "The smallest number is : " << smallest << endl;
    }
}

void handle_largest(const vector<int>&list)
{
    if(!list.size())
        cout <<"Unable to determine the largest number." << endl;
    else{
        int largest{list.at(0)};
        for(int val : list)
            if(val > largest)
                largest = val;
        cout << "The largest number is : " << largest << endl;
    }
}







