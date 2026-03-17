#include<iostream>
using namespace std;
main(){
    cout<<"Enter a number:";
    int num;
    cin>>num;
    int count=0;
    for(int i=num;i>0;i=i/10){
        count=count+1;
    }
    cout<<"Total number of digits: "<<count;
}