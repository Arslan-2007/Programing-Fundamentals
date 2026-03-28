#include<iostream>
using namespace std;
main(){
    cout<<"Enter a word: ";
    string word;
    cin>>word;
    int i=0;
    while(word[i] != '\0'){
        if(word[i]=='z'){
            word[i]='a';
        }else{
            word[i] = word[i]+1;
        }
        i++;
    }
    cout<<"Shifted string: "<<word;
}