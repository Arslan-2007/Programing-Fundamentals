#include<iostream>
using namespace std;
main(){
    cout<<"Enter the number of resistors in the series circuit: ";
    int n;
    cin>>n;
    cout<<"Enter the resistance values (in ohm) of the "<<n<<" resistors one per line: "<<endl;
    float value[n];
    for(int i=0;i<n;i++){
        cin>>value[i];
    }
    float count=0;
    for(int j=0;j<n;j++){
        count=count+value[j];
    }
    cout<<"The total resistance of series circuit is "<<count<<" ohm.";
}