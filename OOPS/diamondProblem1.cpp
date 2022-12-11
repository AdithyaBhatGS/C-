/* A diamond problem will occur when you try to inherit properties from 2 or more classes which in turn is inheriting from a common base class

child->Father->Person
     ->Mother->Person

The problem is that child class receives 2 copies of Person class data member and member functions which creates an ambiguity

To resolve this you need to make the base class virtual

*/  



#include<iostream>
using namespace std;
class A{
    public:
        int x;
        A(int x){
            this->x=x;
            cout<<"A constructor called!"<<endl;
        }
};
class B:public A{
    public:
        B(int x):A(x){
            cout<<"B constructor called!"<<endl;
        }
};
class C:public A{
    public:
        C(int x):A(x){
            cout<<"C constructor called!"<<endl;
        }
};
class D:public C,public B{
    public:
        D(int x):C(x),B(x){

        }
};
int main(){
    D d(10);
    return 0;
}