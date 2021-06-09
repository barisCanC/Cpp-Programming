#include <iostream>
#include <vector>
#include <cctype>
#include <string>         // std::string
#include <locale>         // std::locale, std::isdigit
#include <sstream>      // std::stringstream

using namespace std;

bool isNumber(string s);

int main()
{
    vector <int> list{1, 2, 3, 4};
    
    char selection{};
    do{
        cout << "\n=========" <<endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "C - Clear the list" << endl;
        cout << "M - Mean of the numbers" << endl;
        cout << "S - The Smallest of the numbers" << endl;
        cout << "L - The largest of the numbers" << endl;
        cout << "Q - Quit" << endl;
        
        cout << "\nPlease make a choice : " ;
        cin >> selection;
        
        switch(selection){
            case 'P' : case 'p' :
                {
                    if(!list.size())
                        cout << "[] - the list is empty" << endl;
                    else{
                        cout << "[ " ;
                        for(auto val : list)
                            cout << val << " " ;
                        cout << "]" << endl;
                    }
                    break;
                }
            
            case 'A' : case 'a' :
                {
                cout << "Please enter number you want : ";
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
                break;
                }
            
            case 'C' : case 'c' :
                {
                list.clear();
                cout << "The list is cleared." << endl;
                break;
                }
            
            case 'M' : case 'm' :
                {
                    if(!list.size())
                        cout <<"Unable to calculate the mean - no data" << endl;
                    else{
                        int sum{};
                        for(int val : list)
                            sum += val;
                        float mean{static_cast<float>(sum) / list.size()};
                        cout << "Mean of the numbers : " << mean << endl;
                    }
                    break;
                }
            
            case 'S' : case 's' :
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
                    break;
                }
                
            case 'L' : case 'l' :
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
                    break;
                }
            
            case 'Q' : case 'q' : 
                cout << "Quit" << endl;
                break;
            
            default : 
                cout << "Entered wrong char. Try again." << endl;

        }
        
    }while(selection != 'q' && selection != 'Q');
    
}

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}










