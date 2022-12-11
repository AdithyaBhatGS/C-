/*Virtual Functions :
*To achieve run time polymorphism we need to use virtual functions
*To use a virtual function we need to have same method(name,type and no of parmeters)
*use virtual keyword in base class
*then create a base class pointer and store derived class object in it

How it works?
*First we check if there is a virtual keyword in the base class
*If yes then always the redifined method in the derived class gets executed
*If there is no redifined method then base class method executed

To execute proper method for an object we need virtual functions

Note:Whenever we use a method in base as well as derived class with
common name,parameters(both no and type) without virtual keyword in base class and create a base class pointer and hold the address of a derived class
object then we can execute only base class methods and access only base class data members.

But through virtual function we can access and executes methods of derived class through base class pointers*/

#include<iostream>
using namespace std;
class Animal{
    string type;
    public:
        Animal(){
            type="Animal";
        }
        virtual string getType(){
            return type;
        }
};
class Dog:public Animal{
    string type;
    public:
        Dog(){
            type="Dog";
        }
        string getType(){ 
            return type;
        }
};
class Cat:public Animal{
    string type;
    public:
        Cat(){
            type="Cat";
        }
        string getType(){
            return type;
        }
};
void print(Animal *animal_ptr){
    //Fun takes a pointer as a parameter
    cout<<"Animal : "<<animal_ptr->getType()<<endl;
}
int main(){
    Animal **animal_ptr=new Animal*[3];
    //Creating array of pointers dynamically
    Animal animal_obj;
    Dog dog_obj;
    Cat cat_obj;
    animal_ptr[0]=&animal_obj;//base_Class_Pointer->base_Class_Obj
    animal_ptr[1]=&dog_obj;//base_Class_Pointer->derived_Class_Obj
    animal_ptr[2]=&cat_obj;//base_Class_Pointer->derived_Class_Obj
    print(animal_ptr[0]);//Passing base_Class_Obj address
    print(animal_ptr[1]);//Passing derived_Class_Obj address
    print(animal_ptr[2]);//Passing derived_Class_Obj address
    delete[] animal_ptr;
    return 0;
}