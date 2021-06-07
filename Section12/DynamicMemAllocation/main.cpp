#include <iostream>

using namespace std;

int main()
{
    int * int_ptr{nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    cout << *int_ptr << endl;
    delete int_ptr;
    
    double *temp_ptr{};
    cout << "How many temperatures you want ? : ";
    size_t size{};
    cin >> size;
    
    cout << temp_ptr << endl;
    temp_ptr = new double [size];
    
    cout << temp_ptr << endl;
    
    for(size_t i{}; i < size; i++)
        *(temp_ptr + i) = 3;
    
    for(size_t i{}; i < size; i++)
        cout << temp_ptr[i] << " ";
    cout << endl;
    
    delete [] temp_ptr;
    
    for(size_t i{}; i < size; i++)
        cout << *(temp_ptr + i) << " ";
    cout << endl;
    
    cout << temp_ptr << endl;
    
}










