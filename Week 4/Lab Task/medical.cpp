#include<iostream>
using namespace std;
main(){
    cout<<"Enter Your Bill:";
    int bill;
    cin>>bill;
    if(bill <= 5000){
    float dis = (bill*0.05);
    int net1 = bill-dis;
    cout<<"Your discounted bill is "<<net1;
    }
    if(bill > 5000){
        float dis2 = (bill*0.10);
        int net2 = bill-dis2;
        cout<<"Your discounted bill is "<<net2;
    }
}