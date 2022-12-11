/*Compile Time Polymorphism(Operator Overloading)
It is a concept where an operator can be used to perform different tasks.

Here a single operator is in many forms.Hence we call it as operator overloading*/
#include<iostream>
using namespace std;
class op{
    public:
        int val;
        void operator + (op &obj){
            int num1=this->val;
            int num2=obj.val;
            cout<<num1-num2<<endl;
        }
        void operator / (op &obj){
            int num1=this->val;
            int num2=obj.val;
            cout<<num1*num2<<endl;
        }
        void operator ! (){
            cout<<"Not Operator!!"<<endl;
        }
        void operator () (){
            cout<<"This is Parenthesis!!"<<endl;
        }
};
int main(){
    op operand1,operand2;
    operand1.val=10;
    operand2.val=20;
    operand1 + operand2;
    op operand3,operand4;
    operand3.val=12;
    operand4.val=12;
    operand3 / operand4;
    !operand4;
    operand3();
    return 0;
}