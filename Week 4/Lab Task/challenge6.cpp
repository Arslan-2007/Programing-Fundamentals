#include<iostream>
using namespace std;
main(){
    cout<<"Enter any character in lower case:";
    char character;
    cin>>character;
    if(character == 'a','e','i','o','u'){
        cout<<"It is a vowel";
    }
    else{
        cout<<"It is a consonant.";
    }
}