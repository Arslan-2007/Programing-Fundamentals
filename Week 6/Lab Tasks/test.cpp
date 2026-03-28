#include<iostream>
using namespace std;
main(){
    
    cout<<"Ente a name: ";
    char name[30];
    cin>>name;
    int i=0;
    while(name[i] != '\0'){
        i++;
    }
    if(name[i-1] == 'n'){
        cout<<"true\n";
    }else{
        cout<<"False\n";
    }


}