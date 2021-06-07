#include <iostream>

using namespace std;

int main()
{
    int  scores[]{100, 98, 88, 72, 55, -1};
    int *score_ptr{scores};
    cout << score_ptr << endl;
    
    while(*score_ptr != -1)
        cout << *(score_ptr++) << endl;
    cout << "\n" << score_ptr << endl;
    
    cout << endl;
}










