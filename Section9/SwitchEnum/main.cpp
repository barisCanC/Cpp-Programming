#include <iostream>

using namespace std;

int main()
{
    enum Direction{
        left, right, up, down
    };
    
    Direction heading{left};
    
    switch(heading){
        case left :
            cout << "Direction is left " << endl;
            break;
        case right :
            cout << "Direction is right " << endl;
            break;
        case up :
            cout << "Direction is up " << endl;
            break;
        case down :
            cout << "Direction is down " << endl;
            break;
//        default :
//            cout << "cc" <<end;
    }
    
}










