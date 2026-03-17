#include<iostream>
using namespace std;
main(){
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    int sum=0;
    for(int i=num;i>0;i=i/10){
        sum=sum+(i%10);
    }
    cout<<"Sum="<<sum;
}