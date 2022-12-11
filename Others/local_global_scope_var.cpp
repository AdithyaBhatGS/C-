/*Purpose:A global variable is the one which can be accessed from any function

*Memory will be allocated only once and it will be in the data segment

*If no value is initialized then the default value would be 0

*Scope:Global scope
 Lifetime:Till program termination
*/

#include<iostream>
using namespace std;
//declaring a global variable
int a=10;

void fun(){
    a=a+10;
}
void fun1(){
    int a=10;
    cout<<"---------------------"<<endl;
    cout<<"Inside fun1 : "<<endl;
    
    //Local variable has more preference than a global variable
    
    cout<<"Value of local variable a : "<<a<<endl;
    
    /*Scope resolution operator will be used to access a global variable within the local scope when local scope has a variable with same name*/
    
    cout<<"Value of global variable a : "<<::a<<endl;
    
    cout<<"---------------------"<<endl;
}
int main(){
    cout<<"Value of a before call : "<<a<<endl;
    fun();
    cout<<"Value of a after call : "<<a<<endl;
    fun1();
    return 0;
}