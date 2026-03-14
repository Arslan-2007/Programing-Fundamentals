#include<iostream>
using namespace std;
main(){

    cout<<"Please Enter the number:";
    int num1;
    cin>>num1;
    cout<<"Please Enter the number:";
    int num2;
    cin>>num2;
    if(num1>num2){
        cout<<"Number "<<num1<<" is greater than "<<num2;
    }else{
        cout<<"Number "<<num2<<" is greater than "<<num1;
    }
}