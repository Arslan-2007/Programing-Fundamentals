#include<iostream>
using namespace std;
main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" numbers: \n";
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int largest=num[0];
    for(int i=0;i<n;i++){
        if(num[i]>largest){
            largest=num[i];
        }
    }
    int smallest=num[0];
    for(int i=0;i<n;i++){
        if(num[i]<smallest){
            smallest=num[i];
        }
    }
    cout<<"Largest number: "<<largest<<endl;
    cout<<"Smallest number: "<<smallest;
}