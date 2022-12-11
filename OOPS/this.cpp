/*Program to illustrate the use of this pointer :
this -> The pointer that holds the address of current object*/
#include<iostream>
using namespace std;
class Car{
    public:
        int milege;
        Car(int milege){
            this->milege=milege;
            cout<<"\nValue of this pointer : "<<this<<endl;
        }
};
int main(){
    int milege;
    cout<<"Enter the milege : ";
    cin>>milege;
    Car c(milege);
    cout<<"Milege = "<<c.milege<<"\nAdress of current object: "<<&c<<endl;
    return 0;
}