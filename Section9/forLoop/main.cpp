#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums{10, 20, 30, 40, 50};
    for(size_t i{0}; i <= nums.size() - 1; i++)
        cout << nums.at(i) << endl;
    
    
}










