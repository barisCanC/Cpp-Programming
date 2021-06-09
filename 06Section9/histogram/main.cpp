#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num_of_items;
    cout << "How many data items do you want ?" ;
    cin >> num_of_items;
    
    vector<int> numbers{};
    
    for(size_t i{1}; i <= num_of_items; i++){
        int data_item{};
        cout << "Enter data item " << i << " : " ;
        cin >> data_item;
        
        numbers.push_back(data_item);
    }
    
    for(auto val : numbers)
        cout << val << " , " ; 
    
    
}










