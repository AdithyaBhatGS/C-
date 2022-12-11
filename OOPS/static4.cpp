/*Static member function
*They are special function which can access only static data members
and static member functions
*If you try to access a non static data member in a static fun,it will
throw an error.
*Also we don't need an object to call a static method in a class.
*/
#include<iostream>
using namespace std;
class Car{
    public:
        static int a;
        static void fun(){
            cout<<"Hello World!"<<endl;
        }
        static void display(){
            fun();
            cout<<a<<endl;
        }

};
int Car::a=10; 
int main(){
    Car::display();
    return 0;
}