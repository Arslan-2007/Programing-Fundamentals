#include<iostream>
using namespace std;
main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    int num[n];
    cout<<"Enter "<<n<<" number: \n";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            count++;
        }
    }
    cout<<"Total Even numbers: "<<count;
}