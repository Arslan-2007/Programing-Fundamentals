#include<iostream>
using namespace std;
main(){
    int num[5]={1,2,3,4,5};
    int sum=0;
    for(int idx=0;idx<5;idx++){
        sum=sum+num[idx];
    }
    int average;
    average=sum/5;
    cout<<"Sum of first five natural numbers is: "<<sum<<endl;
    cout<<"Average of first five natural numbers is: "<<average;
}