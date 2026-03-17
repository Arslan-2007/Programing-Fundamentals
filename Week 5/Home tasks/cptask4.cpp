#include<iostream>
using namespace std;
main(){
    cout<<"Enter a number:";
    int num,count=0;
    cin>>num;
    cout<<"Enter the digit to check:";
    int digit,remain;
    cin>>digit;
    for(int i=num;i>0;i=i/10){
        remain=i%10;
        if(remain==digit){
            count++;
        }
    }
    cout<<"Frequency of "<<digit<<" in "<<num<<" is "<<count;
}