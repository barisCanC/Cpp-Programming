#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    //vector <char> vowels;
    //vector<char> vowels(5);     //elements initialized to 0
//    vector <char> vowels{'a', 'e', 'i', 'o', 'u'};
//    
//    cout << vowels[0] << endl;
//    cout << vowels[4] << endl;
//    
//    //vector<int> test_scores(3);            //elements initialized to 0
//    vector<int> test_scores(3, 100);       //elements initialized to 100
//    
//    //vector<int> test_scores{100, 56, 75};
//    
//    cout<<"\nTest scores using array syntax:" << endl;
//    cout<< test_scores[0] <<endl;
//    cout<< test_scores[1] <<endl;
//    cout<< test_scores[2] <<endl;
//    
//    cout<<"\nTest scores using vector syntax:" << endl;         //This method will be bounds checked !!!!!
//    cout<< test_scores.at(0) <<endl;
//    cout<< test_scores.at(1) <<endl;
//    cout<< test_scores.at(2) <<endl;
//    cout<< "\nThere are " << test_scores.size() << " scores in the vector.\n" << endl;
//    
//    cout<< "Enter 3 test scores: " ;
//    cin >> test_scores.at(0);
//    cin >> test_scores.at(1);
//    cin >> test_scores.at(2);
//    
//    cout<<"\nUpdated test scores: " << endl;         
//    cout<< test_scores.at(0) <<endl;
//    cout<< test_scores.at(1) <<endl;
//    cout<< test_scores.at(2) <<endl;
//    
//    cout<< "Enter a test score  to add to the vector" << endl;
//    
//    int score_to_add{0};
//    cin>> score_to_add;
//    
//    test_scores.push_back(score_to_add);
//    
//    cout<< "Test scores are now: " << endl;
//    cout<< test_scores.at(0) <<endl;
//    cout<< test_scores.at(1) <<endl;
//    cout<< test_scores.at(2) <<endl;
//    cout<< test_scores.at(3) <<endl;
//    cout<< "\nThere are " << test_scores.size() << " scores in the vector now.\n" << endl;
//    
    //cout << "This should cause an exception " << test_scores.at(8); 
    
    cout<<"Example of a 2-D vector " << endl;
    
    vector<vector<int>> movie_ratings
    {
        {1,2,3,4},
        {1,3,2,2},
        {2,4,3,3}
    };
    
    cout << "Here are the movie ratings for reviewer #1 using array syntax: " <<endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << "\nHere are the movie ratings for reviewer #1 using vector syntax: " <<endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    
    
}







