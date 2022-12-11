//Constructors:
/*
*Constructors are used to initialize the data members of an object.
*Whenever we create an object by default constructors get invoked automatically
*They are similiar to function with no return type*/
#include<iostream>
using namespace std;
class Car{
    public:
        Car(){
            cout<<"This is a Constructor!"<<endl;
        }
};
int main(){
    Car c;
    return 0;
}