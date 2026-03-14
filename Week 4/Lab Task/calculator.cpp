#include<iostream>
using namespace std;
main(){
    cout<<"ENter frst number: ";
    int num1;
    cin>>num1;
    cout<<"ENter the operator:";
    char op;
    cin>>op;
    cout<<"Enter the second number: ";
    int num2;
    cin>>num2;
    if(op == '+'){
        int negative = num1-num2;
        cout<<num1<<"-"<<num2<<"="<<negative;
    }
    if(op == '-'){
        int add = num1+num2;
        cout<<num1<<"+"<<num2<<"="<<add;
    }
    if(op == '*'){
        int divide = num1/num2;
        cout<<num1<<"/"<<num2<<"="<<divide;
    }
    if(op == '/'){
        int multiply = num1*num2;
        cout<<num1<<"*"<<num2<<"="<<multiply;
    }

}