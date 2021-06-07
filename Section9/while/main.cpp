#include <iostream>

using namespace std;

int main()
{
    
        
//    int i{};
//    while(++i <= 5)
//        cout << i << endl;
//    
//    int i{};
//    while(++i <= 10)
//        if(!(i % 2))
//            cout << i << endl;

//    int number{};
//    
//    do{
//        cout << "Enter a number less than or equal 100: ";
//        cin >> number;
//    }while (number > 100);
//    
//    cout << "Thanks" << endl;

//    int number{};
//    
//    do{
//        cout << "Enter an integer in btw 1 and 5: ";
//        cin >> number;
//    }while ((number < 1) || (number > 5));
//    
//    cout << "Thanks" << endl;

//        int number{};
//        bool done{false};
//        
//        while(!done){
//            cout << "Enter an integer in btw 1 and 5: " ;
//            cin >> number;
//            
//            if((number < 1) || (number > 5))
//                cout << "Out of range. Please try again. " << endl;
//            else{
//                cout << "Well done. Thanks. " << endl;
//                //done = true;
//                break;
//            }
//        }

    vector <int> vec{100, 67, 34, 22, 90, -12, -27, 55, 0, 3};
    int i{}, count{};
    bool size_flag{false};
    
    while( !size_flag && (vec.at(i) != -99)){
        count++;
        i++;
        if(count == vec.size())
            size_flag = true;
    }
        
    cout <<count  << " integers are present before i see -99" << endl;
        

//   int vec[]{100, 67, 34, 22, 90, -12, -27, 55, 0, 3};
//    int i{}, count{};
//    bool size_flag{false};
//    
//    while((vec[i] != -99) && !size_flag){
//        count++;
//        i++;
//        if(count == sizeof(vec))
//            size_flag = true;
//    }
//        
//    cout <<count  << " integers are present before i see -99" << endl;
      
    
}










