#include<iostream>
using namespace std;
main(){
    char vowels[5]={'a','e','i','o','u'};
    cout<<"Enter a string: ";
    string word;
    getline(cin,word);
    for(int i=0;word[i]!='\0';i++){
        char c=word[i];
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
            cout<<c;
        }
    }
}