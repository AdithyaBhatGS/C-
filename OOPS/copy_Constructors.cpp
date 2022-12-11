/*Copy Constructors:
*If we have an object whose data members are already initialized then
we can pass that as a reference to a newly created object
*Means all the data memebers of the initialized constructor
will be copied to data members of the current object
*/
#include<iostream>
using namespace std;
class Car{
    public:
        int milege;
        int speed;
        int year_of_purchase;
        Car(int milege,int speed,int year_of_purchase) : milege(milege),speed(speed),year_of_purchase(year_of_purchase){ 

        }
        //A simple copy constructor
        Car(Car &obj){
            this->milege=obj.milege;
            this->speed=obj.speed;
            this->year_of_purchase=obj.year_of_purchase;
        }
        void display(){
            cout<<milege<<" "<<speed<<" "<<year_of_purchase<<endl;
        }
};
int main(){
    Car c1(15,100,2012);
    Car c2(c1);
    c2.display();
    return 0;
}