#include<iostream>
using namespace std;
main(){
    cout<<"Enter the size of array: ";
    int size;
    cin>>size;
    cout<<"Enter "<<size<<" elements of the array: \n";
    int ele[size];
    for(int i=0;i<size;i++){
        cin>>ele[i];
    }
    bool even=false;
    bool odd=false;
    for(int i=0;i<size;i=i+2){
        if(ele[i]%2==0){
            even=true;
        }
    }
    for(int i=1;i<size;i=i+2){
        if(ele[i]%2!=0){
            odd=true;
        }
    }
    if(even&&odd){
        cout<<"The array is special.";
    }else{
        cout<<"The array is not special.";
    }
}