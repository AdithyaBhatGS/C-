/*Inheritance Ambiguity:
Whenever we have 2 or more parent classes having a common method name with same number of parameters and if we create a child that inherits from these parents then ,if we call that method from the child object , it cannot identify the method because 2 or more class have same name and parameters for the method,hence it results in "Inheritance Ambiguity"

How to resolve?:
To resolve this we need to mention the name of the class whose method is being accessed or called*/
#include<iostream>
using namespace std;
class Parent1{
    public:
        void fun(){
            cout<<"A member function of Parent1 class!"<<endl;
        }
};
class Parent2{
    public:
        void fun(){
            cout<<"A member function of Parent2 class!"<<endl;
        }
};
class Child:public Parent1,public Parent2{

};
int main(){
    Child obj;
    obj.Parent1::fun();
    obj.Parent2::fun();
    return 0;
}