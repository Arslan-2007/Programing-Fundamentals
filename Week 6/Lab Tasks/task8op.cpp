#include<iostream>
using namespace std;
main(){
    cout<<"Enter the 2 number of elements one per line for first array: "<<endl;
    int n[2];
    for(int i=0;i<2;i++){
        cin>>n[i];
    }
    cout<<"Enter the number of elements for second array: ";
    int n1;
    cin>>n1;
    cout<<"Enter "<<n1<<" elements for the second array,one per line: "<<endl;
    int num[n1];
    for(int i=0;i<n1;i++){
        cin>>num[i];
    }
    cout<<"["<<n[0]<<",";
    for(int i=0;i<n1;i++){
        cout<<num[i]<<",";
    }
    cout<<n[1]<<"]";
}