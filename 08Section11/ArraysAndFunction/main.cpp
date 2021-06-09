#include <iostream>
#define SIZE 5

using namespace std;

void printArray(const int numbers[], size_t size);
void setArray(int numbers[], size_t size, int value);

int main()
{
    int my_numbers[] {1, 2, 3, 4, 5};
    
    printArray(my_numbers, SIZE);
    setArray(my_numbers, SIZE, 7);
    printArray(my_numbers, SIZE);
    
}

void printArray(const int numbers[], size_t size)
{
    for(size_t i{}; i < size; i++)
        cout << numbers[i] << " " ;
    cout << endl;
}

void setArray(int numbers[], size_t size, int value)
{
    for(size_t i{}; i < size; i++)
        numbers[i] = value;
}








