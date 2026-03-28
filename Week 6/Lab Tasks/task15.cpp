#include<iostream>
using namespace std;
int main(){
    int choice;
    string username;string 
    sname="";int age=0;
    string password,cname;
    for(int i=1;i<=3;i++){
        cout<<"Enter the username: ";
        cin>>username;
        cout<<"Enter the password: ";
        cin>>password;
        if(username=="admin" && password=="1234"){
            cout<<"Login successfully."<<endl;
            break;
        }else{
            cout<<"Wrong login! Please try again!"<<endl;
        }
        if(i == 3 && !(username=="admin" && password=="1234")){
            cout<<"Too many attempts.Program Ends!"<<endl;
            return 0;
        }        
    }
    for(int i=1;i<=5;i++){
        cout<<endl;
        cout<<"-------University Management System--------"<<endl;
        cout<<"1. Add student."<<endl;
        cout<<"2. View Student."<<endl;
        cout<<"3. Add a course."<<endl;
        cout<<"4. Exit."<<endl;

        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter student name:";
            cin>>sname;
            cout<<"Enter student age: ";
            cin>>age;
            cout<<"Student added successfully"<<endl;
        }
        else if(choice==2){
                cout<<"Student name: "<<sname<<endl;
                cout<<"Student age: "<<age<<endl;
                break;
            }
        else if(choice==3){
            cout<<"Enter the course name: ";
            cin>>cname;
            cout<<"Course Added successfully!"<<endl;
        }
        else if(choice==4){
            cout<<"Program Exit."<<endl;
            break;
        }else{
            cout<<"Invalid choice!"<<endl;
        }
    }
    return 0;

}