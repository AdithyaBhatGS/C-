/*Hybrid Inheritance
*Hybrid Inheritance is combination of other type of Inheritances
*In this example we have considered Hierarchial+Multiple
*/
#include<iostream>
using namespace std;
class Vehicle{
    protected:
        void display(){
            cout<<"This is a Vehicle ! "<<endl;
        }
};
class Fare{
    protected:
        void display(){
            cout<<"Fare of the vehicle ! "<<endl;
        }
};
class Bus:public Vehicle,public Fare{
    public:
        void display(){
            Vehicle::display();
            Fare::display();
            cout<<"This is Bus ! "<<endl;
            cout<<"------------- "<<endl;
        }
};
class Car:public Vehicle{
    public:
        void display(){
            Vehicle::display();
            cout<<"This is a Car ! "<<endl;
            cout<<"-------------"<<endl;
        }
};
int main(){
    Car c;
    Bus b;
    c.display();
    b.display();
    return 0;
}