#include<iostream>
using namespace std;
main(){
    string word="Something";
    cout<<"Enter the argument 'a': ";
    string a;
    getline(cin, a);
    cout<<"Result: "<<word<<" "<<a;
}