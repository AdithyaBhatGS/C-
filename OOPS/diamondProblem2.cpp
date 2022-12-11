/*See here you have 4 classes A,B,C,D.
A-->base class
D-->C-->A
 -->B-->A

We are trying to call A's public method print() through both B and C now since both of them will call print() this creates an ambiguity which is known as diamond problem

*/
#include<iostream>
using namespace std;
class A{
    int x;
    public:
        A(){

        }
        void setx(int x){
            this->x=x;
        }
        void print(){
            cout<<x<<endl;
        }
};
class B:public A{
    public:
        B(){
            setx(20);
        }
};
class C:public A{
    public:
        C(){
            setx(10);
        }
};
class D:public B,public C{
    public:
        D(){

        }
};

int main(){
    D d;
    //d.print();//uncomment this to see the diamond problem
    return 0;
}