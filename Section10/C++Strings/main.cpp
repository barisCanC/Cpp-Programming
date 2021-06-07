#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s1;                              //is initialized to empty string
    string s2 {"Baris"};
    //string s2 ("Baris");              //can be used 
    string s3 {s2};
    string s4 {"Baris" , 3};
    string s5 {s3, 0 , 2};
    string s6 (5, 'Y');
    
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
        
//    string s1{"C++"};
//    string s2{"is a powerful"};
//    string sentence{s1 + " " + s2 + " " + "language."};
//    
//    cout << sentence << endl;
//    
//    //cout << s1 + " " + s2 + " " + "language." << endl;
//    
//    sentence = s2 + "hank" + "uhık" + s1 ;            //illegal ; can't concatenate C-style literals ; eğer ilk olarak litelal ile başlarsa
//    
//    //sentence = "hank" + s1 + "uhık";
//    
//    cout << sentence << endl;
    
//    cout << s2[0] << endl;
//    cout << s2.at(0) << endl;
//    
//    s2[0] = 'f';
//    cout << s2 << endl;
//    
//    s2.at(0) = 'v';
//    cout << s2 << endl;
//    
    
//    string s1 {"Baris"};
//    
////    for(char c : s1)
////        cout << c << endl;
//
//        for(int c : s1)
//            cout << c << endl;    
//    
//    string s1 {"This is a test"};                       //object.substr(starting index, length)
//    
//    cout << s1.substr(0, 4) << endl;
//    cout << s1.substr(5, 2) << endl;
//    cout << s1.substr(10, 4) << endl;
//    
//    cout << s1.find("This") << endl;
//    cout << s1.find("is") << endl;
//    cout << s1.find("test") << endl;
//    cout << s1.rfind('e') << endl;
//    cout << s1.find("is", 4) << endl;
//    cout << s1.find("xyz") << endl;
//    
//    if(s1.find("xyz") == string::npos)
//        cout << "xyz is not in the sentence." << endl;
//    
//    
//    //object.erase(starting index, length)
//    cout << s1.erase(0, 5) << endl;
//    cout << s1.erase(5, 4) << endl;
//    s1.clear();
//    cout << s1 << endl;
//    
//    
//    string s1 {"Baris"};
//    cout << s1.length() << endl;
//    
//    s1 += " Can Coskun";
//    
//    cout << s1 << endl;
//    
//    string s1;
//    cin >> s1;
//    cout << s1 << endl;
//    
//    getline(cin, s1);
//    cout << s1 << endl;
//    
//    getline(cin, s1, 'x');
//    cout << s1 << endl;
//    
//        
//    string str="to be question";
//    string str2="the ";
//    string str3="or not to be";
//    string::iterator it;
//
//    // used in the same order as described above:
//    str.insert(6,str2);                 // to be (the )question
//    str.insert(6,str3,3,4);             // to be (not )the question
//    str.insert(10,"that is cool",8);    // to be not (that is )the question
//    str.insert(10,"to be ");            // to be not (to be )that is the question
//    str.insert(15,1,':');               // to be not to be(:) that is the question
//    it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
//    str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
//    str.insert (it+2,str3.begin(),str3.begin()+3); // (or )
//
//    cout << str << '\n';

//    
//    string journal_entry_1 {"Isaac Newton"};
//    string journal_entry_2 {"Leibniz"};
//    
//    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//    //----WRITE YOUR CODE BELOW THIS LINE----
//    
//    journal_entry_1.erase(0, 6);
//    
//    if(journal_entry_1 > journal_entry_2)
//        journal_entry_1.swap(journal_entry_2);
//        
//    cout << journal_entry_1 << endl;
//    
    
}










