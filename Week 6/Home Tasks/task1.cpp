#include<iostream>
using namespace std;
main(){
    cout<<"Enter the number of the elements: ";
    int n;
    cin>>n;
    int num[n];
    cout<<"Enter "<<n<<" number: \n";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+num[i];
    }
    cout<<"Sum of all elements: "<<sum;
}