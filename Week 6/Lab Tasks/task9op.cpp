#include<iostream>
using namespace std;
main(){
    cout<<"Enter quarters: ";
    float quar;
    cin>>quar;
    cout<<"Enter dimes: ";
    float dimes;
    cin>>dimes;
    cout<<"Enter nickels: ";
    float nick;
    cin>>nick;
    cout<<"Enter pennies: ";
    float penny;
    cin>>penny;
    cout<<"Enter the total amount due:$ ";
    float due;
    cin>>due;
    float n1=quar*0.25;
    float n2=dimes*0.10;
    float n3=nick*0.05;
    float n4=penny*0.01;
    float sum=n1+n2+n3+n4;
    cout<<"Can you pay the amount?\n";
    if(sum<due){
        cout<<"No,you can't pay the amount.\n";
    }else{
        cout<<"Yes,you can pay.\n";
    }
}