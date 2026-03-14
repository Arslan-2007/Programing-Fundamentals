#include<iostream>
using namespace std;
main(){
  cout<<"Enter name of first brother: ";
  string name1;
  cin>>name1;
  cout<<"ENter age of first brother: ";
  int age1;
  cin>>age1;
  cout<<"Enter name of second brother: ";
  string name2;
  cin>>name2;
  cout<<"Enter age of second brother: ";
  int age2;
  cin>>age2;
  cout<<"Enter name of third brother: ";
  string name3;
  cin>>name3;
  cout<<"Enter age of third brother: ";
  int age3;
  cin>>age3;
  string youngestname;
  int youngestage = age1;
  youngestname = name1;
  if(age2 < youngestage){
    youngestage = age2;
    youngestname = name2;
}
if(age3 < youngestage){
    youngestage = age3;
    youngestname = name3;
}
cout<<"The youngest brother is "<<youngestname;
}