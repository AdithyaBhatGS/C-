/*Program to show the use of getters and setters:-
Getters and Setters -> They are the methods that are used to set and get the value of private data members in a class*/
#include<iostream>
using namespace std;
class Car{
    private:
        int speed;
        int milege;
    public:
        void setSpeed(int s){
            speed=s;
        }
        int getSpeed(){
            return speed;
        }
        void setMilege(int m){
            milege=m;
        }
        int getMilege(){
            return milege;
        }
};
int main(){
    int milege,speed;
    cin>>speed>>milege;
    Car obj;
    obj.setSpeed(speed);
    obj.setMilege(milege);
    cout<<"Speed of the Car object = "<<obj.getSpeed()<<endl;
    cout<<"Milege of the Car object = "<<obj.getMilege()<<endl;
    return 0;
}