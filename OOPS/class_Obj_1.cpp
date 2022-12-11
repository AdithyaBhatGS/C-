//Program to create a Car class and instantize the class:
/*
Class->It is the blueprint to create the objects
*It is a user defined type
*It contains data members and member functions
*Data Members->State,Properties.
*Member Functions->Behaviour.
*Logical Entity(as it doesn't take any space in the memory)
Objects->It is an instance of the class
*Through the creation of the object,we can initialize the data members of the class
*Physical Entity(as it occupies the space).*/
#include<iostream>
using namespace std;
class Car{
    public:
        char brand[15];
        char model[15];
        int milege;
        float avg_speed;
        void display(){
            cout<<"Brand : "<<brand<<" Model : "<<model<<" Milege : "<<milege<<" Avg Speed : "<<avg_speed<<endl;
        }        
};
int main(){
    Car c1,c2;
    cout<<"Enter the car details : "<<endl;
    cin>>c1.brand>>c1.model>>c1.milege>>c1.avg_speed;
    c1.display();
    cin>>c2.brand>>c2.model>>c2.milege>>c2.avg_speed;
    c2.display();
    return 0;
}