#include<iostream>
using namespace std;
main(){
    int num[5];
    for(int idx = 0;idx<5;idx++){
        cout<<"Enter a number: ";
        cin>>num[idx];
    }
    cout<<"The first element in array is: "<<num[0]<<endl;
    cout<<"The last element in arary is: "<<num[4];
}