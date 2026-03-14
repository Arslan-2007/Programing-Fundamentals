#include<iostream>
using namespace std;
main(){
    cout<<"Temperature of City 1 = ";
    int t1;
    cin>>t1;
    cout<<"Temperature of Cty 2 = ";
    int t2;
    cin>>t2;
    int d = t1 - t2;
    if(d <= 10 ){
        cout<<"Program Ends!";
    }else{
        cout<<"Difference is too big!!"<<endl;
        cout<<"Program Ends";
    }
}