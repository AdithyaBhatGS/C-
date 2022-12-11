#include<iostream>
using namespace std;
class Parent1{
    public:
        Parent1(){
            cout<<"This is Parent1 constructor!"<<endl;
        }
        ~Parent1(){
            cout<<"This is Parent1 destructor!"<<endl;
        }
};
class Parent2{
    public:
        Parent2(){
            cout<<"This is Parent2 constructor!"<<endl;
        }
        ~Parent2(){
            cout<<"This is Parent2 destructor!"<<endl;
        }
};
class Child:public Parent2,public Parent1{
    public:
        Child(){
            cout<<"This is Child class constructor!"<<endl;
        }   
        ~Child(){
            cout<<"This is Child class destructor!"<<endl;
        }   
};
int main(){
    Child c;
    return 0;
}