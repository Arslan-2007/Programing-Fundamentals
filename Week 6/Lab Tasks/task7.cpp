#include<iostream>
using namespace std;
main(){
    cout<<"Enter a word: ";
    string word;
    cin>>word;
    cout<<"Enter the letter you want to find in word: ";
    char letter;
    cin>>letter;
    bool is=false;
    for(int i=0;word[i] != '\0';i++){
        if(word[i] == letter){
            is=true;
            break;
        }
    }
    if(is == true){
        cout<<letter<<" is found in "<<word;
    }else{
        cout<<letter<<" is not found in "<<word;
    }
}