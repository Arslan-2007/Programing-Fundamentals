#include<iostream>
using namespace std;
main(){
    int money,year;
    cout<<"Enter Money:";
    cin>>money;
    cout<<"Enter years(s):";
    cin>>year;
    int age=18;
    for(int i=1800;i<=year;i++){
        if(i%2==0){
            money=money-12000;
        }else{
            money -= (12000+50*age);
        }
        age++;
    }
    if(money >= 0){
       cout<<"Yes! He will live a carefre live and will have "<<money<<" dollars left";     
    }else{
        cout<<"He will need "<<money<<" dollar to survive";
    }
    
}