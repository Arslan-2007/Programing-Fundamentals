#include<iostream>
using namespace std;
main(){
    cout<<"How many number of fibbonacci series you want to print: ";
    int n;
    cin>>n;
    int n1=0, n2=1, next;
    cout<<n1<<","<<n2;
    for(int i=1;i<n-1;i++){
        next=n1+n2;
         cout<<","<<next;
        n1=n2;
        n2=next;
       
    }
}