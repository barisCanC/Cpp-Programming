/*
 * Ask the user to enter 3 integers
 * Calculate the sum of the  integers
 * Calcuculate the average of integers
 * 
 * Display 3 integers entered
 * sum of integers
 * average of integers
 * 
*/


#include <iostream>

using namespace std;

int main()
{
//    int num1{100};
//    int num2{8};
//    
//    cout << "without typecasting: " <<endl;
//    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//    
//    cout << "with typecasting: " <<endl;
//    cout << num1 << " / " << num2 << " = " << static_cast<float> (num1) / num2 << endl;

    cout << "Please enter 3 integers calculated :" << endl;
    int num1{}, num2{}, num3{};
    cin >> num1 >> num2 >> num3;
    
    int sum{num1 + num2 + num3};
    
    //float average{(static_cast<float>(num1) + num2 + num3 ) / 3};
    float average{static_cast<float>(sum) / 3};
    
    //float average{(float)sum / 3};                       // Old C - style
    
    cout << "The numbers entered are : " << num1 << " , "<< num2 << " , "<< num3 <<endl;
    cout << "Sum of the numbers is : " << sum << endl;
    cout << "Average of the numbers is : " << average << endl;
    
}










