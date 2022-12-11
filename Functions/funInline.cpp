/*Program to illustrate the use/working of 
inline function*/
/*Inline function:Whenever a function becomes inline
the function call will be replaced by the function
code.
EX:In the below program cube(num) will be replaced by 
a*a*a

USE:
Through this we can achieve the compile time effic
ciency provided code inside the function must be sm
all and simple;

Rules before using inline functions:
*Should not be used if fun has static variables
*Should not be used if fun has switch,goto statements
*Should not be used if fun has loop
*Should not be used if fun code is long

Syntax:
inline return_type fun_name(parameters){
    -----;
}

*/

#include<iostream>
using namespace std;
inline int cube(int a){
    return(a*a*a);
}
int main(){
    int num;
    cout<<"Enter the num(1-5):";
    cin>>num;
    cout<<"Cube of "<<num<<"= "<<cube(num)<<endl;
    cout<<cube(num)<<endl;
    cout<<cube(num)<<endl;
    cout<<cube(num)<<endl;
    return 0;
}