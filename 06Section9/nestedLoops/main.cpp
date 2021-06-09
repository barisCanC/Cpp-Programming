#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <vector<int>> vector2d{
        {1, 2, 3},
        {10, 20, 30},
        {100, 200, 300},
    };
    
    for(auto vec : vector2d){
        for(auto val : vec)
            cout << val << " " ; 
        cout << endl ; 
    }
    
}










