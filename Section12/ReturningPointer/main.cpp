#include <iostream>

using namespace std;

int * creating_array(size_t size, int value = 7);
void display(const int *const array, const int sentinel);

int main()
{
    cout << "Enter size : ";
    size_t size{};
    cin >> size;
    cout << "Enter value : ";
    int value{};
    cin >> value;
    int * array{creating_array(size, value)};
    
    display(array, size);
    
    delete [] array;
    cout << endl;
}

int * creating_array(size_t size, int value )
{
    int *new_storage{new int[size]};
    for(size_t i{}; i < size; i++)
//        *(new_storage + i) = value;
        new_storage[i] = value;
    return new_storage;
}

void display(const int *const array, const int size)
{
    cout << "Array values : " << endl;
    for(size_t i{}; i < size; i++)
        cout << *(array + i) << " " ;
}











