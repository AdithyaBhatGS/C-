/*Inline Functions:
They are useful when the function code takes less time to execute than a function call.

At that time they will replace the function call with function call

*But inline is just a request to the compiler not a command

*But it may not work if:
1)If they contain a loop
2)If they are recursive
3)If return type is other than void
4)If it contains switch or goto

Advantages:
1)Speed of execution
*/
#include<iostream>
using namespace std;
class operation{
    int num1,num2,add,sub,mul;
    float quo;
    public:
        operation(int num1,int num2):num1(num1),num2(num2){

        }
        void sum();
        void difference();
        void product();
        void div();
};
inline void operation::sum(){
    add=num1+num2;
    cout<<"Sum of "<<num1<<" and "<<num2<<" = "<<add<<endl; 
}
inline void operation::difference(){
    sub=num1-num2;
    cout<<"Difference of "<<num1<<" and "<<num2<<" = "<<sub<<endl; 
}
inline void operation::product(){
    mul=num1*num2;
    cout<<"Product of "<<num1<<" and "<<num2<<" = "<<mul<<endl; 
}
inline void operation::div(){
    if(!num2){
        cout<<"Cannot divide by zero!"<<endl;
        exit(0);
    }
    quo=num1/float(num2);
    cout<<"Quotient of "<<num1<<" and "<<num2<<" = "<<quo<<endl; 
}
int main(){
    int num1,num2;
    cout<<"Enter the value of 2 numbers on which operation is to be performed : ";  
    cin>>num1>>num2;
    operation op(num1,num2);
    op.sum();
    op.difference();
    op.product();
    op.div();
    return 0;
}