#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

float calc_cost(float base_cost = 100.0, float tax_rate = 0.06, float shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

int main()
{
//    float cost{};
//    
//    cost = calc_cost(100.0, 0.08, 4.25);
//    
//    cout << fixed << setprecision(2);
//    cout << "Cost is : " << cost << endl;
//    
//    cost = calc_cost(100.0, 0.08);
//    cout << "Cost is : " << cost << endl;
//    
//    cost = calc_cost(200.0);
//    cout << "Cost is : " << cost << endl;
//    
//    cost = calc_cost();
//    cout << "Cost is : " << cost << endl;
    
    greeting("John Malkovich", "Dr.", "M.D.");
    greeting("Glen Johnson", "Professor", "Ph.D.");
    greeting("Mahmut Can", "Dr.");
    
}

float calc_cost(float base_cost, float tax_rate, float shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}








