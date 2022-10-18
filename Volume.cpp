#include<iostream>
using namespace std;
float vol(int);
float vol(float,int);
float vol(int,int,float);

int main(){

    int a,h,l,b;
    float r,H; 

    //for Cube
    cout<<"Enter the sides for the cube(units):";
    cin>>a;

    cout<<"Volume of cube(cb. units): " <<vol(a)<<"\n";

    //for Cylinder
    cout<< "Enter the height for the cylinder(units):";
    cin>> h;
    cout<< "Enter the radius for the cylinder(units):";
    cin>> r;
    cout<<"Volume of cylinder(cb. units): " <<vol(r,h)<< "\n";

    //for Rectanglular box
    cout<< "Enter the length for the rectangular box(units):";
    cin>>l;
    cout<< "Enter the breadth for the rectangular box(units):";
    cin>>b;
    cout<< "Enter the height for the rectangular box(units):";
    cin>>h;
    cout<<"Volume of rectangular box(cb. units): " <<vol(l,b,h);

    return 0;

}

float vol(int a)//Cube volume
{

    return(a*a*a);
}
float vol(float r,int h)//Cylinder volume
{
    return(3.14*r*r*h);

}
float vol(int l,int b,float h)//Rectangular box volume
{
    return(l*b*h);
}