#include<iostream>
using namespace std;
main(){
    cout<<"Enter a Word: ";
    string word;
    getline(cin, word);
    for(int i=word.length()-1;i>=0;i--){
        cout<<word[i];
    }
}
