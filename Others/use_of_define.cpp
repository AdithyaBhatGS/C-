/*
#define--> It is basically a macro

Anything that begins with "#" will be known as 
preprocessor directive

It will be expanded before compilation

#define Name Value

Ex 1: 
#define PI 3.14

Here wherever you use PI it will be replaced by 3.14

Ex 2:
#define A "amith"

Here wherever you use A it will be replaced by "amith"

*/


#include <iostream>
#define PI 3.14
#define A "amith"

using namespace std;

float area(float radius){
    return PI*radius*radius;
}
float circumference(float radius){
    return 2*PI*radius;
}
string name(){
    return A;
}
int main()
{
    float radius;
    cin>>radius;
    cout<<"Area of the circle : "<<area(radius)<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Circumference of the circle : "<<circumference(radius)<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<name()<<endl;
    return 0;
}
