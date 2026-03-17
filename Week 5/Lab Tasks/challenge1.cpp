#include<iostream>
using namespace std;
main(){
    cout<<"Multiplication table of: ";
    int table,multi;
    cin>>table;
    for(int i=1;i<=10;i=i+1){
        multi=table*i;
        cout<<table<<" * "<<i<<" = "<<multi<<endl;
    }
}