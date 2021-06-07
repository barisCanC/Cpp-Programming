#include <iostream>

using namespace std;

int main()
{
    char selection{};
    
//    do{
//        float width{}, height{};
//        cout << "Enter a width and height respectively: " << endl;
//        cin >> width >> height;
//        
//        cout << "Area is : " << width * height << endl;
//        
//        cout << "Do you want to continue? (Y/N) : " << endl;
//        cin >> selection;
//    }while(selection == 'Y' || selection == 'y');
//    
//    cout << "Thanks" << endl;
//    

   do{
       cout << "\n============" <<endl;
       cout << "1. Do this" << endl;
       cout << "2. Do that" << endl;
       cout << "3. Do sth else" << endl;
       cout << "Q. Quit" << endl;
        cout << "What is your choice : " << endl;
        cin >> selection;
        
        switch(selection){
            case '1':
                cout << "doing this..." <<endl;
                break;
            case '2':
                cout << "doing that..." <<endl;
                break;
            case '3':
                cout << "doing sth else..." <<endl;
                break;
            case 'Q' : case 'q':
                cout << "Quit." <<endl;
                break;
            default : 
                cout << "Entered wrong char. Try again." << endl;
        }
        
    }while(selection != 'q' && selection != 'Q');
    
    cout << "Thanks" << endl;
    

    
}










