#include<iostream>
using namespace std;
main(){
    cout<<"Enter the name of 5 students: \n";
    string name[5];
    for(int i=0;i<5;i++){
        getline(cin,name[i]);
    }
    cout<<"Student names are: \n";
    for(int i=0;i<5;i++){
        cout<<name[i]<<"\n";
    }
}