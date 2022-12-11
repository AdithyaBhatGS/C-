/*Program to illustrate the concept of functio
-on overloading in c++:
Function Overloading is a concept where 2 or more
functions can have same name but they should have
different number of parameters or different
type of parameters:*/

//Multiple functions with same name and diff
//number of parameters
#include<iostream>
using namespace std;
int add(int x,int y){
    return(x+y);
}
int add(int x,int y,int z){
    return(x+y+z);
}
int main(){
    int num1,num2,num3,num4,num5;
    cout<<"Enter 2 numbers:";
    cin>>num1>>num2;
    cout<<num1<<"+"<<num2<<"="<<add(num1,num2)<<endl;
    cout<<"Enter 3 numbers:";
    cin>>num3>>num4>>num5;
    cout<<num3<<"+"<<num4<<"+"<<num5<<"="<<add(num3,num4,num5);
    return 0;
}