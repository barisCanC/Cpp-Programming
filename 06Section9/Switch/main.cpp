#include <iostream>

using namespace std;

int main()
{
    /* Ask the user what grade they expect on an exam and
     * tell them what they need to score to get it.
    */
    
    cout << "What grade do you expect ? " ;
    char grade {};
    cin >> grade ;
    
    switch(grade){
        case 'A' : case 'a' : 
            cout << "You should get in btw 90 and 100 "<< endl ;
            break;
        case 'B' : case 'b' : 
            cout << "You should get in btw 80 and 90 "<< endl;
            break;
        case 'C' : case 'c' : 
            cout << "You should get in btw 70 and 80 " << endl;
            break;
        case 'D' : case 'd' : 
            cout << "You should get in btw 60 and 70 " << endl;
            break;
        case 'F' : case 'f' : 
            cout << "Under 60 you will get F " << endl;
            break;
        default : 
            cout << "Sorry, not a valid grade" << endl;
        
    }
    
    
}










