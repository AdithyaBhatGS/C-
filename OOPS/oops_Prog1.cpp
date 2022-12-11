/*Problem Statement:
Design a car class having parameterized constructor that takes 2 arguments as input  i.e noOfGear and color ,printCarInfo method that prints the CarInfo i.e noOfGear and color.

Design another class RaceCar having parameterized constructor having an additional attribute maxSpeed and printRaceCarInfo method that prints the RaceCarInfo i.e noOfGear,color,MaxSpeed

Note :Create and object of class RaceCar and call printRaceCarInfo method
*/ 
#include<iostream>
using namespace std;
class Car{
    public:
        int noOfGear;
        string color;

        Car(int noOfGear,string color):noOfGear(noOfGear),color(color){

        }
        void printCarInfo(){
            cout<<noOfGear<<" "<<color<<" ";
        }
};
class RaceCar:public Car{
    public:
        int maxSpeed;
        RaceCar(int noOfGear,string color,int maxSpeed):Car(noOfGear,color){
            this->maxSpeed=maxSpeed;
        }
        void printRaceCarInfo(){
            Car::printCarInfo();
            cout<<maxSpeed<<endl;
        }
};
int main(){
    int noOfGear,maxSpeed;
    string color;
    cout<<"Enter the number of gears,maximum speed and color : ";
    cin>>noOfGear>>maxSpeed>>color;
    RaceCar r(noOfGear,color,maxSpeed);
    r.printRaceCarInfo();
    return 0;
}