#include<iostream>
using namespace std;
main(){
    cout<<"Enter the password: ";
    string password;
    cin>>password;
    string my_pass = "abc@123";
    if(password == my_pass){
        cout<<"Wow! You have cracked the code.";
    }
    else{
        cout<<"Hehe! That's not simple dude...";
    }
}