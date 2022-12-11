/*Order of constructor call when we have a virtual base class :
1st priority-->virtual base class
(If there are multiple virtual base classes then they will be executed in order)
2nd priority-->normal base class
(In the order they appear)*/

#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"This is a virtual base class!"<<endl;
        }
};
class B{
    public:
        B(){
            cout<<"This is a normal base class!"<<endl;
        }
};
class C:public B,virtual public A{
    public:
        C(){
            cout<<"C constructor!"<<endl;
        }
};
int main(){
    C c;
    return 0;
}