#include <iostream>

using namespace std;

int *apply_all(const int array1[], const int array2[], const size_t size1, const size_t size2);
void display(const int array[], const size_t size);

int main()
{
    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};
    const size_t size1 {5};
    const size_t size2 {3};
    
    cout << "array1 is : ";
    display(array1, size1);
    cout << "array2 is : ";
    display(array2, size2);
    
    int *results{apply_all(array1, array2, size1, size2)};
    constexpr size_t result_size{size1 * size2};
    cout << "final array is : ";
    display(results, result_size);
    
    delete [] results;
    cout << endl;
}

int *apply_all(const int array1[], const int array2[], const size_t size1, const size_t size2)
{
    int *new_storage{new int[size1 * size2]};
    size_t k{};
    for(size_t i{}; i < size2; i++)
        for(size_t j{}; j < size1; j++)
            new_storage[k++] = array1[j] * array2[i];
    return new_storage;
}

void display(const int array[], const size_t size)
{
    cout << "[" ;
    for(size_t i{}; i < size; i++)
        cout << array[i] << " ";
    cout << "]" ;
    cout << endl;
}










