#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Speed:";
    int speed;
    cin>>speed;
    if(speed <= 10){cout<<"Speed information= Slow";}
    if(speed >10 && speed <= 50){cout<<"Speed Information=Average";}
    if(speed > 50 && speed <= 150 ){cout<<"Speed Information= Fast.";}
    if(speed > 150 && speed <= 1000){cout<<"Speed Information=Ultra Fast!";}
    if(speed > 1000){cout<<"Speed Information=Extremely Fast!!";}
    
}