#include <iostream>

int main ()
{
    int fav_num;
    
    std::cout << "Enter your fav number btw 1 and 100: " ;
    std::cin >> fav_num;
    
    std::cout << "Wow it's my fav number too!\n";
    std::cout <<"No really " << fav_num << " is my fav number." << std::endl;
    
    return 0;
}