#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    string transmitted_message;
    cout << "Please enter your secret mesage : " ;
    getline(cin, transmitted_message);
    cout << transmitted_message <<endl;              //this is a normal message
    string encrypted_message;
    
//    vector <char> alphabet {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', };
//    vector <char> key{'x', 'u', 'i', 'h', 'k', 'q', 'a', 'c', 'v', 'b', 'o', 'p', 'w', 'z', 'r', 's', 'd', 'j', 'y', 'e', 'l', 'g', 'n', 'f', 'm', 't', };
//    
//    for(char encrypt : transmitted_message){
//        if(!isalpha(encrypt))
//            encrypted_message.insert(encrypted_message.end(), encrypt);
//        else{
//            for(size_t i{}; i < alphabet.size(); i++)
//                if(encrypt == alphabet.at(i)){
//                    encrypted_message.insert(encrypted_message.end(), key.at(i));
//                    break;
//                }
//        }
//    }
//    
//    cout << "Encrypted message : \n" ;
//    cout << encrypted_message << endl;
//    
//    string received_message;
//    for(char encrypt : encrypted_message){
//        if(!isalpha(encrypt))
//            received_message.insert(received_message.end(), encrypt);
//        else{
//            for(size_t i{}; i < key.size(); i++)
//                if(encrypt == key.at(i)){
//                    received_message.insert(received_message.end(), alphabet.at(i));
//                    break;
//                }
//        }
//    }
//    
//    cout << "Decrypted message : \n" ;
//    cout << received_message << endl;
//    
    
    string alphabet("abcdefghijklmnopqrstuvwxyz");
    string key{"xuihkqacvbopwzrsdjyelgnfmt"};
    for(char encrypt : transmitted_message){
        if(!isalpha(encrypt))
            encrypted_message.insert(encrypted_message.end(), encrypt);
        else{
            int position = alphabet.find(encrypt);
            encrypted_message.insert(encrypted_message.end(), key.at(position));
            //encrypted_message += key.at(position);
        }
    }
    
    cout << "Encrypted message : \n" ;
    cout << encrypted_message << endl;
    
    
}










