#include<iostream>
using namespace std;
main(){
    cout<<"How many numbers you want to store: ";
    int num;
    cin>>num;
    int no[num];
    for(int idx=0;idx<num;idx++){
        cout<<"Enter a number: ";
        cin>>no[idx];
    }
    for(int dis=0;dis<num;dis++){
        cout<<"Number stored in array "<<dis<<" is: "<<no[dis]<<endl;
    }
}
