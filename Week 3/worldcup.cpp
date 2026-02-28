#include<iostream>
using namespace std;
main(){

 cout<<"Enter name of country:";
 string country;
 cin>>country;

  cout<<"Enter number of wins:";
 int wins;
 cin>>wins;

 cout<<"Enter number of draws:";
 int draws;
 cin>>draws;

 cout<<"Enter number of losses:";
 int losses;
 cin>>losses;

 float points;
 points = (wins*3) + (draws*1) + (losses*0);
 
 cout<<""<<country<<" has obtained "<<points<<" points in Asia Cup Tournament.";
}