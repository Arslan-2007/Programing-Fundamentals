#include<iostream>
using namespace std;
main(){
    cout<<"Enter number: ";
    int num;
    cin>>num;
    cout<<"Enter Digit: ";
    int digit,count=0;
    cin>>digit;
    int remain,counter;
    for(int i=num;i>0;i=i/10){
        remain=i%10;
        if(digit == remain){
            counter++;
        }
       
    }
    cout<<"Frequency of "<<digit<<" in number "<<num<<" is "<<counter;
}