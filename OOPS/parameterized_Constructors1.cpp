/*Program to show the use of parameterized constructor :
Parameterized Constructor : A constructor with parameters */
#include<iostream>
using namespace std;
class Car{
    public:
        int price,speed,milege;
        //Constructor Car taking 3 parameters price,speed,milege
        Car(int price,int speed,int milege){
            this->price=price;
            this->speed=speed;
            this->milege=milege;
        }
        void display(){
            cout<<price<<" "<<speed<<" "<<milege<<endl;
        }
};
int main(){
    int price,speed,milege;
    cin>>price>>speed>>milege;
    Car c(price,speed,milege);
    c.display();
    return 0;
}