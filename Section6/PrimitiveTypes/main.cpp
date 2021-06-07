#include <iostream>
using namespace std;

int main ()
{
    char middle_initial{'J'};
    cout << "My middle initial is " << middle_initial << endl;
    
    unsigned short exam__score{55};
    cout << "exam score is " << exam__score << endl;
    
    int countries_represented{66};
    cout <<"There were " << countries_represented << " countries represented in my meeting" << endl;
    
    int people_in_florida{20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;
    
    long long people_on_earth{7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    long long distance_alpha_centauri {9'640'000'000'000};
    cout << "The distance to alpha centauri is " << distance_alpha_centauri <<" kilometers." << endl;
    
    float car_payment{401.23};
    cout << "My car payment is " << car_payment << endl;
    
    float pi{3.145679};
    cout << "Pi is " << pi << endl;
    
    float large_amount{2.7e38};
    cout << large_amount <<" is a very big number." << endl;
    
    double very_large_amount{2.7e120};
    cout << very_large_amount <<" is also a very big number." << endl;
    
    bool game_over{false};
    cout << "The result of game is " << game_over << endl;
    
    unsigned short value1{200};
    unsigned short value2{320};
    unsigned short product {value1 * value2};
    
    cout <<"The product of " << value1 << " and " << value2 << " is " << product << endl;
    
    cout << sizeof(short);
    
}