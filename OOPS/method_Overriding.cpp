/*Runtime Polymorphism:
Method Overriding:
Whenever a class inherits from a parent class and both parent class have method of common name ,number of parameters and type of parameters are same then the child class method will over ride the parent class method and this concept is known as "Method Overriding"
 Note:
 Method Overriding is achieved through Inheritance 
*/

#include<iostream>
using namespace std;
class Parent{
    public:
        void show(){
            cout<<"This is a parent class method!"<<endl;
        }
};
class SubClass1:public Parent{
    public:
        void show(){
            cout<<"This is subclass1!"<<endl;
        }
};
class SubClass2:public Parent{
    public:
        void show(){
            cout<<"This is subclass2!"<<endl;
        }
};
int main(){
    SubClass1 s1;
    SubClass2 s2;
    s1.Parent::show();
    s1.show();
    s2.show();
    return 0;
}