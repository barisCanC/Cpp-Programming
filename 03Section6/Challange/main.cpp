#include <iostream>
using namespace std;

int main ()
{
    /*Frank' s carpet cleaning service
     * Charges:
        $25 per small room
        $35 per large room
     * Sales tax rate is 6%
     * Estimates are valid for 30 days
     * 
     * Prompt the user for the number of small and large rooms they would like cleaned
     * and provide an estimate such as:
     * 
     * Estimate for carpet cleaning service
     * Number of small rooms: 3
     * Number of large rooms: 1
     * Price per small room: $25
     * Price per large room: $35
     * Cost: $110
     * Tax: $6.6
     * 
     * ================
     * Total estimate: $116.6
     * This estimate is valid for 30 days
     * 
     * Pseudocode:
     *      Prompt the user to enter the number of rooms
     *      Display number of rooms
     *      Display price per room
     * 
     *      Display cost: ( number of rooms * price per room)
     *      Display tax: (cost * tax rate)
     *      Display total estimate: (cost + tax)
     *      Display total expiration time
     * 
    */
    cout<< "Hello welcome to Barış' s carpet cleaning service" << endl;
    cout << "Please enter number of small room you would like cleaned: ";
    int number_of_small_rooms{0};
    cin>> number_of_small_rooms;
    cout << "Please enter number of large room you would like cleaned: ";
    int number_of_large_rooms{0};
    cin>> number_of_large_rooms;
    
    cout << "Estimate for carpet cleaning service" <<endl;
    cout <<"Number of small rooms: " << number_of_small_rooms << endl;
    cout <<"Number of large rooms: " << number_of_large_rooms << endl;
    const float price_per_small_room{25};
    const float price_per_large_room{35};
    cout <<"Price per small room: $" << price_per_small_room << endl;
    cout <<"Price per large room: $" << price_per_large_room << endl;
    float cost = (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room);
    cout<<"Cost: "<< cost <<endl;
    const float sales_tax{0.06};
    float tax { cost * sales_tax};
    cout <<"Tax: "<< tax <<endl;
    
    cout <<"===================" <<endl;
    cout<<"Total estimate: "<< cost + tax <<endl;
    const int expiry{30};
    cout<<"This estimate is valid for " <<  expiry << " days" <<endl;
    
}










