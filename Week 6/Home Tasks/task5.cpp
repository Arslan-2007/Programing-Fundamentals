#include<iostream>
using namespace std;
main(){
    cout<<"Enter the number of customers: ";
    int n;
    cin>>n;
    cin.ignore();
    cout<<"Enter the name of "<<n<<" customers: "<<endl;
    string name[n];
    for(int i=0;i<n;i++){
        getline(cin,name[i]);
    }
    cout<<"Enter a letter to check: ";
    char chc;
    cin>>chc;
    int count=0;
    for(int i=0;i<n;i++){
        if(name[i][0]==chc)count++;
    }
    cout<<"Total names starting with '"<<chc<<"': "<<count;
}