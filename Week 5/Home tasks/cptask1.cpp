#include<iostream>
using namespace std;
main(){
    cout<<"Enter the number:";
    int num,multi;
    cin>>num;
    for(int i=1;i<=10;i++){
        multi=num*i;
        cout<<num<<" * "<<i<<" = "<<multi<<endl;

    }
}