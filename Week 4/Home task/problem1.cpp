#include<iostream>
using namespace std;
main(){
    cout<<"Write name of country:";
    string name;
    cin>>name;
    cout<<"Enter the price of ticket in dollars:";
    int price;
    cin>>price;
    if(name=="Ireland"){
        int discount1 = price * 10/100;
        int dPrice = price - discount1;
        cout<<"Discounted Price of ticket is $"<<dPrice;
    }else{
        int discount2 = price * 5/100;
        int dPrice2 = price - discount2;
        cout<<"Discounted Price of ticket is $"<<dPrice2;
    }
}