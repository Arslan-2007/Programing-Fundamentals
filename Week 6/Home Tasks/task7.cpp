#include<iostream>
using namespace std;
main(){
    cout<<"Enter number of products: ";
    int n;
    cin>>n;
    string pname[n];
    float prices[n];
    float quantity[n];
    float total[n];
    for(int i=0;i<n;i++){
        cout<<"Enter name of product: ";
        cin>>pname[i];
        cout<<"Enter price of "<<pname[i]<<": $";
        cin>>prices[i];
        cout<<"Enter quantity of "<<pname[i]<<": ";
        cin>>quantity[i];
        total[i]=prices[i]*quantity[i];
    }
    cout<<"----------Product Inventory Report------------\n";
    cout<<"----------------------------------------------\n";
    for(int i=0;i<n;i++){
        cout<<pname[i]<<": $"<<prices[i]<<", "<<quantity[i]<<" in stock, Total Value: $"<<total[i]<<endl;
    }
}