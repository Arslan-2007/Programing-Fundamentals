#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid Input! Number must be greater than 0."<<endl;
    }
    int arr[n];
    cout<<"Enter "<<n<<" numbers,one per line:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Number in reverse orders: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}