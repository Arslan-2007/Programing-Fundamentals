#include<iostream>
using namespace std;
main(){
    cout<<"Enter the number of flights: ";
    int n;
    cin>>n;
    int fnum[n],seats[n];
    string destination[n];
    for(int i=0;i<n;i++){
        cout<<"Enter flight number for flight "<<i+1<<":";
        cin>>fnum[i];
        cout<<"Enter destination for flight "<<fnum[i]<<":";
        cin>>destination[i];
        cout<<"Enter seats available for flight "<<fnum[i]<<":";
        cin>>seats[i];
        cout<<""<<endl;
    }
    cout<<"----------Flight Information----------"<<endl;
    cout<<"--------------------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Flight "<<fnum[i]<<" to "<<destination[i]<<" has only "<<seats[i]<<" seats available.\n";
    }
    cout<<""<<endl;
    cout<<"Flight with less than five seats available!\n";
    cout<<"-------------------------------------------\n";
    for(int i=0;i<n;i++){
        if(seats[i]<5){
             cout<<"Flight "<<fnum[i]<<" to "<<destination[i]<<" has only "<<seats[i]<<" available.\n";
        }else{
            cout<<"No flight with less than 5 seats available!\n";
        }
    }
}