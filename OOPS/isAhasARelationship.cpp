/*isA relationship will come under the concept of inheritance 

When a class inherits the property of another class ,
Ex:

Swift is a Car

Here "swift" inherits from "car"

hasA relationship will be formed when a class contains an object of another class

Ex: maruthi class has engine class object*/


#include<iostream>
using namespace std;

class Car{
    private:
        string color;
        float max_speed;
    public:
        void setColor(string color){
            this->color=color;
        }
        void setMaxSpeed(float max_speed){
            this->max_speed=max_speed;
        }
        void display(){
            cout<<"Color:"<<this->color<<"\nMax Speed:"<<this->max_speed<<endl;
        }
};
class Engine{
    public:
        Engine(){
            start(); 
            cout<<"-------------"<<endl;           
            stop();            
        }
        void start(){
            cout<<"Engine started successfully.....!"<<endl;
        }
        void stop(){
            cout<<"Engine stopped successfully.....!"<<endl;
        }
};
//Here Maruthi inherits Car properties 

//Means "Maruthi" is a "Car"

//At the same time "Maruthi" has an object of type "Engine"
class Maruthi:public Car{
    public:
        void maruthiMethod(){
            Engine *e_ptr=new Engine();
            delete e_ptr;
        }        
};
void fun_caller(Maruthi *ptr){
    ptr->setColor("Blue");
    ptr->setMaxSpeed(68.93);
    ptr->display();
    ptr->maruthiMethod();
}
int main(){
    Maruthi *maruthi=new Maruthi();
    fun_caller(maruthi);
    delete maruthi;
    return 0;
}