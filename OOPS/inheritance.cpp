/*Inheritance
*It is the concept of inheriting properties and behaviour of one class
by another class is known as Inheritance.
*When we inherit a class then we can access data members and member functions
of that class.
*Sub-Class->The class that inherits the properties of another class.
*Parent-Class->The class from which properties are inherited.
*Advantages->
    1)Code Reusability
    Without writing the code in the derived class,we can access the parent
    class methods and data members.
    2)RunTime Polymorphism
    To achieve method overriding we need Inheritance.
    Without Inheritance runtime polymorphism is not possible.
*/
#include<iostream>
using namespace std;
class base{
    public:

};
class derived:public base{

};
int main(){

    return 0;
}