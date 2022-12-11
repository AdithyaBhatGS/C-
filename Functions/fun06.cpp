/* Program to find area,diameter and circumference 
of a circle using functions:
Formulas:
area = pie*r*r;
diameter = 2*r;
circumference = 2*pie*r;
*/
#include<iostream>
using namespace std;
double area(double);
double diameter(double);
double circumference(double);
int main(){
    double radius;
    cout<<"Enter the radius of the circle:";
    cin>>radius;
    cout<<"Area of the circle with radius="<<radius<<" is="<<area(radius)<<"\n";
    cout<<"Diameter of the circle with radius="<<radius<<" is="<<diameter(radius)<<"\n";
    cout<<"Circumference of the circle with radius="<<radius<<" is="<<circumference(radius)<<"\n";
    return 0;
}
double area(double rad){
    return(3.14*rad*rad);
}
double diameter(double rad){
    return(2*rad);
}
double circumference(double rad){
    return(6.28*rad);
}