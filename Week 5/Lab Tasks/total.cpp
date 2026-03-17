#include<iostream>
using namespace std;
main(){
    cout<<"Enter Number: ";
    int num, count=0;
    cin>>num;
    for(int i=num;i>0;i=i/10){
       count=count+1;
    }
    cout<<"The stotal number of "<<num<<" is "<<count;
}