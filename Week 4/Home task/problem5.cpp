#include<iostream>
using namespace std;
main(){
    int norm = 30000;
    cout<<"Enter ther number of Holidays:";
    int hday;
    cin>>hday;
    int wdays = 365-hday;
    int playtime = (wdays*63)+(hday*127);
    int dfromnorm = 30000-playtime;
    int hours = dfromnorm/60;
    int minutes = dfromnorm%60;
    if(playtime > norm){
        cout<<"Tom will run away!"<<endl;
        cout<<hours<<" hours and "<<minutes<<" minutes for play";
    }else{
        cout<<"Tom sleeps Well. "<<endl;
        cout<<hours<<" hours and "<<minutes<<" minutes less for play.";
    }
}