/*Single Inheritance :
Single lvl Inheritance is a type of Inheritance where 
for one parent class there will be only one child class*/
#include<iostream>
using namespace std;
class Animal{
    public:
        int age;
        float weight;
        string name;
        void setName(string name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
        void setWeight(float weight){
            this->weight=weight;
        }
        void display(){
            cout<<"Name : "<<name<<"\nAge : "<<age<<"\nWeight : "<<weight<<endl; 
        }
};
class Dog:public Animal{
    public:
        void bark(){
            cout<<"Dog is barking!"<<endl;
        }
};
int main(){
    Dog d1;
    d1.setAge(20);
    d1.setName("Shanaya");
    d1.setWeight(17.45);
    d1.display();
    d1.bark();
    return 0;
}