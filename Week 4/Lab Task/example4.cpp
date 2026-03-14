#include<iostream>
using namespace std;
main(){
    cout<<"Enter price of dress:";
    int price;
    cin>>price;
    if(price<5000){
        cout<<"Buy the dress.";
    } else{
        cout<<"Dont buy the dress!!";
    }
}