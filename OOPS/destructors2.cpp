/*Program to illustrate when exactly the objects are 
destroyed*/
#include<iostream>
using namespace std;
class Car{
    public:
        int milege;
        float avg_speed;
        Car(int milege,float avg_speed):milege(milege),avg_speed(avg_speed){

        }
        ~Car(){
            cout<<"Destructor Invoked!"<<endl;
        }
        void display(){
            cout<<milege<<" "<<avg_speed<<endl;
        }
};
void fun(){
    Car c4(25,39.99);
    c4.display();
}
int main(){
    int x=0;
    Car c1(20,35.57);
    Car c2=c1;
    c1.display();
    c2.display();
    cout<<"-------------"<<endl;
    if(x==0){
        Car c3(100,101.2);
        c3.display();
    }
    cout<<"-------------"<<endl;
    fun();
    cout<<"-------------"<<endl;
    c1.~Car();
    return 0;
}