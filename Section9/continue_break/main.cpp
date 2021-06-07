#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers{1, 2, -1, 7, -4, 0, -1, -23, -99, 37, 6};
    int last_num{};
    
    for(auto num: numbers)
        if(num == -1)
            continue;
        else if(num == -99)
            break;
        else{
            cout << num << endl;
            last_num = num;
        }
    
    cout << "last of numbers: " << last_num << endl;
    
    
}










