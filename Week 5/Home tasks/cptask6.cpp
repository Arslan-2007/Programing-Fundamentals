#include<iostream>
using namespace std;
main(){
    cout<<"Enter the first number:";
    int num1;
    cin>>num1;
    cout<<"Enter the second number:";
    int num2;
    cin>>num2;
    int i=1;
    int hcf=0;
    while(i<=num1 && i<=num2){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
        i=i+1;
    }
    cout<<"GCD : "<<hcf<<endl;
    int lcm;
    lcm = (num1*num2)/hcf;
    cout<<"LCM : "<<lcm;
    
}