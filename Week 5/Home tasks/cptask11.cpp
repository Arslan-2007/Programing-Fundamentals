#include<iostream>
using namespace std;
int main(){
    while (true){
        cout<<"--- Simple Calculator ---"<<endl;
        cout<<"1. Addition.\n";
        cout<<"2. Substraction.\n";
        cout<<"3. Multplication.\n";
        cout<<"4. Division.\n";
        cout<<"5. Clear Screen.\n";
        cout<<"6. Exit.\n";
        cout<<"Enter Your choice(1-6):";
        int choice,num1,num2,op;
        cin>>choice;
        if(choice==1){
            cout<<"Enter first number:";
            cin>>num1;
            cout<<"Enter second number:";
            cin>>num2;
            op=num1+num2;
            cout<<"Result "<<op<<"\n"<<endl;
        }
        if(choice==2){
            cout<<"Enter first number:";
            cin>>num1;
            cout<<"Enter second number:";
            cin>>num2;
            op=num1-num2;
            cout<<"Result "<<op<<"\n"<<endl;
        }
        if(choice==3){
            cout<<"Enter first number:";
            cin>>num1;
            cout<<"Enter second number:";
            cin>>num2;
            op=num1*num2;
            cout<<"Result "<<op<<"\n"<<endl;
        }
        if(choice==4){
            cout<<"Enter first number:";
            cin>>num1;
            cout<<"Enter second number:";
            cin>>num2;
            op=num1/num2;
            cout<<"Result "<<op<<"\n"<<endl;
        }
        if(choice==5){
            cout<<"Screen cleared successfully..\n"<<endl;
        }
        if(choice==6){
            cout<<"Program Exit Successfully....\n";
            break;
        }
    }
    return 0;
   
    
}