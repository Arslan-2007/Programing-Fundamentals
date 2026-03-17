#include<iostream>
using namespace std;
int main(){
    while(true){
        cout<<"---Restaurant Management System---"<<endl;
        cout<<"1. View order Menu."<<endl;
        cout<<"2. Place Order."<<endl;
        cout<<"3. View Order Status."<<endl;
        cout<<"4. Generate Bill."<<endl;
        cout<<"5. Contact Staff."<<endl;
        cout<<"6. Exit."<<endl;
        cout<<"Enter Your Choice(1-6):";
        int choice;
        cin>>choice;
        if(choice==1){
            cout<<"You selected View Order Status.\n"<<endl;
        }
        if(choice==2){
            cout<<"You selescted Place Order.\n"<<endl;
        }
        if(choice==3){
            cout<<"You selected View Order Status.\n"<<endl;
        }
        if(choice==4){
            cout<<"You selected Generate Bill.\n";
        }
        if(choice==5){
            cout<<"YOu selected COntact Staff.\n";
        }
        if(choice==6){
            cout<<"Program Exits Successfully.\n";
            break;
        }

    }
    return 0;
}