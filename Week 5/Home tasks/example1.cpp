#include<iostream>
using namespace std;
int main(){
    while(true){
        int choice;
        cout<<"======Menu======"<<endl;
        cout<<"1. Say Hello!"<<endl;
        cout<<"2. Say Good Bye!"<<endl;
        cout<<"3. Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        if(choice==1){
            cout<<"Hello! Welcome to programming world."<<endl;
        }
        if(choice==2){
            cout<<"Good Bye sir! Have a nice day!"<<endl;

        }
        if(choice==3){
            cout<<"Program Ends..." <<endl;
            break;
        }
        else{
            cout<<"Invalid choice!";
        }
    }
    return 0;
}