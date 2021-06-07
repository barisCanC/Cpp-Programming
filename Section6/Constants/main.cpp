#include <iostream>
using namespace std;

int main ()
{
    /*Frank' s carpet cleaning service
     * Charges $30 per room
     * Sales tax rate is 6%
     * Estimates are valid for 30 days
     * 
     * Prompt the user for the number of rooms they would like cleaned
     * and provide an estimate such as:
     * 
     * Estimate for carpet cleaning service
     * Number of rooms: 2
     * Price per room: $30
     * Cost: $60
     * Tax: $3.6
     * 
     * ================
     * Total estimate: $63.6
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
    cout << "Please enter number of rooms you would like cleaned: "<< endl;
    int number_of_rooms{0};
    cin>> number_of_rooms;
    
    cout << "Estimate for carpet cleaning service" <<endl;
    cout <<"Number of rooms: " << number_of_rooms << endl;
    const float price_per_room{32.5};
    cout <<"Price per room: $" << price_per_room << endl;
    cout<<"Cost: "<< number_of_rooms * price_per_room <<endl;
    const float sales_tax{0.06};
    cout <<"Tax: "<<number_of_rooms * price_per_room * sales_tax<<endl;
    
    cout <<"===================" <<endl;
    cout<<"Total estimate: "<< (number_of_rooms * price_per_room) + (number_of_rooms * price_per_room * sales_tax) <<endl;
    const int expiry{30};
    cout<<"This estimate is valid for " <<  expiry << " days" <<endl;
    
}










