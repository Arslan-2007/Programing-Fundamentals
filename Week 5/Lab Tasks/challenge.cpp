#include<iostream>
using namespace std;
main(){
    cout<<"Enter the first number: ";
    int num1;
    cin>>num1;
    cout<<"Enter the second number: ";
    int num2;
    cin>>num2;
    int a = num1;
    int b = num2;
    while(b != 0){
        int remain=a%b;
        a=b;
        b=remain;
    }
    int gcd=a;
    int lcm;
    lcm=(num1*num2)/gcd;
    cout<<"Gcd of "<<num1<<" and "<<num2<<" is "<<gcd<<"\n";
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm<<endl;
}