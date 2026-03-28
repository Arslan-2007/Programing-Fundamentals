#include<iostream>
using namespace std;
main(){
    cout<<"Enter the number of students: ";
    int n;
    cin>>n;
    cin.ignore();
    cout<<"Enter the name of "<<n<<" students:\n";
    string name[n];
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
    string temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(name[j]>name[j+1]){
                temp=name[j];
                name[j]=name[j+1];
                name[j+1]=temp;
            }
        }
    }
    cout<<"Student names in alphabetical order: \n";
    for(int i=0;i<n;i++){
        cout<<name[i]<<endl;
    }
}