/*Program to illustrate the concept of functio
-on overloading in c++:
Function Overloading is a concept where 2 or more
functions can have same name but they should have
different number of parameters or different
type of parameters:*/

//Multiple function with same name diff types
//  of parameters
#include<iostream>
using namespace std;
int add(int x,int y){
    return(x+y);
}
float add(float x,float y){
    return(x+y);
}
int main(){
    int num1=add(5,6);
    float num2=add(4.3f,5.3f);
    cout<<"Integer addition:"<<num1<<endl;
    cout<<"Float addition:"<<num2;
    return 0;
}