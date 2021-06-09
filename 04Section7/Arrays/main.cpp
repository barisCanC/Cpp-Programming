#include <iostream>
using namespace std;

int main ()
{
   char vowels[] {'a', 'e', 'i', 'o', 'u'};
   
   cout<< "The first vowel is "<< vowels[0];
   cout<< "\nThe last vowel is "<< vowels[4] << endl;
   
   //cin>>vowels[5];
   
   double hi_temps[] {90.1, 89.8, 77.5, 81.6};
   cout<< "\nThe first high temperature is "<< hi_temps[0]<< endl;
   
   hi_temps[0] = 100.9;
   cout<< "\nThe first high temperature is now: "<< hi_temps[0]<< endl;
   
   int test_scores[5] {};
   
   cout<< "\nFirst score at index 0 is: " <<test_scores[0]<<endl;
   cout<< "\nFirst score at index 1 is: " <<test_scores[1]<<endl;
   cout<< "\nFirst score at index 2 is: " <<test_scores[2]<<endl;
   cout<< "\nFirst score at index 3 is: " <<test_scores[3]<<endl;
   cout<< "\nFirst score at index 4 is: " <<test_scores[4]<<endl;
    
    cin>>test_scores[0];
    
    cout << "\nValue of Array name test_scores is: "<< test_scores << endl;
  
}







