#include<iostream>
#define PI 3.14159265358979323846
#define pi;
using namespace std;
main(){
    string name;
    cout<<"Enter the type of figure: ";
    cin>>name;
    if(name == "square"){
        cout<<"Enter the length of any side: ";
        float s;
        cin>>s;
        float a1 = s*s;
        cout<<"The area of square is "<<a1;
    }
    else if(name == "rectangle"){
        cout<<"Enter length of rectangle: ";
        float l;
        cin>>l;
        cout<<"Enter width of rectangle: ";
        float w;
        cin>>w;
        float a2 = l*w;
        cout<<"The area of rectangle is "<<a2;
    }
    else if(name == "circle"){
        cout<<"Enter the radius of the circle: ";
        float r;
        cin>>r;
        float a3 = PI * r*r;
        cout<<"The area of circle is "<<a3;
    }
    else if(name == "triangle"){
        cout<<"Enter the length of base of triangle: ";
        float b;
        cin>>b;
        cout<<"Enter the height of triangle: ";
        float h;
        cin>>h;
        float a4 = 1.0/2 * b*h;
        cout<<"The area of triangle is "<<a4;
    }
    
    
}