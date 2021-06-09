#include <iostream>

using namespace std;

int main()
{
    int scores[]{100, 90, 80};
    cout << scores << endl;
    cout << *scores << endl;
    
    int *score_ptr{scores};
    cout << score_ptr << endl;
    cout << *score_ptr << endl;
    cout << "\n" ;
    cout << score_ptr[0] << "\n";
    cout << score_ptr[1] << "\n";
    cout << score_ptr[2] << endl;
    cout << "\n" ;
    cout << score_ptr << endl;
    cout << score_ptr + 1 << endl;
    cout << score_ptr + 2 << endl;
    cout << "\n" ;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;
    cout << "\n" ;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
    
    cout << endl;
}










