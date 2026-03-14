#include<iostream>
using namespace std;
main(){
    cout<<"Number of red roses:";
    float n1;
    cin>>n1;
    cout<<"Numeber of white roses:";
    float n2;
    cin>>n2;
    cout<<"Number of Tulips:";
    float n3;
    cin>>n3;
    float p1 = n1*2.00;
    float p2 = n2*4.10;
    float p3 = n3*2.50;
    float sum = p1+p2+p3;
    if(sum > 200){
        float d1 = (sum * 20/100);
        float net = sum - d1;
        cout<<"Original Price: "<<sum<<endl;
        cout<<"Discounted Price: "<<net;
 }else{
    cout<<"Payable amount:"<<sum;
 }
}