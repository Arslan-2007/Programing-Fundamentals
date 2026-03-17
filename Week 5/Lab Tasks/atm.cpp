#include<iostream>
using namespace std;
int main(){
    int balance=0;
    char option;
    int pin,draw;
    int code=1234;
    for(int i=1;i<=3;i++){
        cout<<"Enter your pin: ";
        cin>>pin;
        if(pin==code){
            cout<<"Login Successfully!"<<endl;
            break;
        }else{
            cout<<"Wrong pin!! Try again.."<<endl;
        }
        if(i==3 && pin!=1234){
            cout<<"Failed to access details!"<<endl;
            cout<<"Go home."<<endl;
            return 0;
        }
    }
    for(int i=1;i<=4;i++){
        cout<<endl;
        cout<<"-----ATM Menu----"<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Select an option from above."<<endl;
        cin>>option;
        if(option=='1'){
            cout<<"Your current balance is "<<balance<<endl;
            return 0;
        }
        if(option=='2'){
            cout<<"Enter the amount you want to deposit."<<endl;
            cin>>balance;
            cout<<"Amount Added successfully to your account."<<endl;
        }
        if(option=='3'){
            cout<<"Enter the amount you want to draw: "<<endl;
            cin>>draw;
            if(draw<=balance){
                cout<<"The given amount has been deducted!"<<endl;
                balance=balance-draw;
            }else{
                cout<<"Insufficient Balance!"<<endl;
                break;
            }
        }
        if(option=='4'){
            cout<<"Program Exit Successfully."<<endl;
            break;
        }
    }
    return 0;
}