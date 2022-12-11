/*Order of Constructors in Inheritance
At first Parent class Constructor will be called
before executing the Child class Constructor
If we're inheriting the properties of 2 or more
Constructors then the order would be from left
to right*/
#include<iostream>
using namespace std;
class Parent{
    public:
        Parent(){
            cout<<"Parent class Constructor!"<<endl;
        }
};
class Child:public Parent{
    public:
        int i;
        Child(){
            cout<<"Child class Constructor!"<<endl;
        }
        Child(int i):i(i){
            cout<<"Child class Parameterized Constructor!"<<endl;
        }
        Child(Child &obj){
            this->i=obj.i;
            cout<<"Child class Copy Constructor!"<<endl;
        }
};
int main(){
    Parent p;
    cout<<"---------------"<<endl;
    Child c1;
    cout<<"---------------"<<endl;
    Child c2(10);
    cout<<"---------------"<<endl;
    Child c3=c2;
    cout<<"---------------"<<endl;
    return 0;
}