#include<iostream>
using namespace std;
main(){
    string word1, word2;
    cout<<"Enter a word: ";
    cin>>word1;
    cout<<"Enter a word:";
    cin>>word2;
    if(word1 == word2){
        cout<<"Yes, The numbers are save.";
    }else{
        cout<<"The numbers are different.";
    }
}