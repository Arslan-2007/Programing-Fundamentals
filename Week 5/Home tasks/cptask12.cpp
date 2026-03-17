#include<iostream>
using namespace std;
int main(){
    string name="";
    while(true){
        cout<<"====Library System===\n";
        cout<<"1. Add Book.\n";
        cout<<"2. View book.\n";
        cout<<"3. Borrow Book.\n";
        cout<<"4. Issue Book.\n";
        cout<<"5. Exit.\n";
        cout<<"Enter your choice(1-5): ";
        int choice;
        cin>>choice;
        if(choice==1){
            cout<<"Enter the name of book you want to add: ";
            cin>>name;
            cout<<name<<" has been added successfully.\n"<<endl;
        }
        if(choice==2){
            cout<<name<<"\n"<<endl;
        }
        if(choice==3){
            cout<<"Enter the name of book you want to borrow:";
            string bname;
            cin>>bname;
            cout<<bname<<" has been borrowed by you.\n"<<endl;
        }
        if(choice==4){
            cout<<"Enter the name of book you want to issue:";
            string iname;
            cin>>iname;
            cout<<iname<<" has been issued for you.\n"<<endl;
        }
        if(choice==5){
            cout<<"Library system closes successfully.";
            break;
        }
    }
}