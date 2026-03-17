#include<iostream>
using namespace std;
main(){
    cout<<"Enter the lenght of fibbonacci series: ";
    int length;
    cin>>length;
    int num1=0,num2=1;
    int sum;
    cout<<num1<<","<<num2<<"";
    for(int i=1;i<length-1;i++){
        sum=num1+num2;
        cout<<","<<sum;
        num1=num2;
        num2=sum;
    }
}