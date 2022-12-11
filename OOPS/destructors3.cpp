/*Program to show how to destroy a dynamically created object*/
#include<iostream>
using namespace std;
class Car{
    public:
        int milege;
        Car(int milege){
            this->milege=milege;
        }
        ~Car(){
            cout<<"Object is destroyed!"<<endl;
        }
};
int main(){
    Car *c1=new Car(22);    
    //If we don't use delete operator in dynamic object then object
    //will not be destroyed
    delete c1;
    return 0;
}