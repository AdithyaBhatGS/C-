/*Pointers to derived class
See important thing to understand is that if we create,
*A base class pointer and hold the address of a derived class object we cannot access any data memeber or member function of the derived class object but can access the data member and member function of the base class
*But if we create a derived class pointer and hold the address of a derived class object we can access and modify the data memeber and member functions of base class*/ 
#include<iostream>
using namespace std;
class BaseClass{
    public:
        int base_var;
        void display(){
            cout<<"This is a base class method!"<<endl;
            cout<<"Base_Class_Method : "<<base_var<<endl;
        }
};
class DerivedClass:public BaseClass{
    public:
        int derived_var;
        void display(){
            cout<<"This is a derived class method!"<<endl;
            cout<<"Derived Class variable : "<<derived_var<<endl;
            cout<<"Base Class variable : "<<base_var<<endl;
        }
};
int main(){
    BaseClass *base_class_ptr=NULL;
    BaseClass base_class_obj;
    DerivedClass derived_class_obj;
    base_class_ptr=&derived_class_obj;
    base_class_ptr->base_var=22;
    base_class_ptr->display();
    //base_class_ptr->derived_var=33;
    /*Throws error(Because base class pointer can hold the address of derived class object and can access and execute all the data members and member function of the base class(as it is inherited by the derived) but cannot access the data members and member function of the derived class)*/
    DerivedClass *derived_class_ptr=NULL;
    derived_class_ptr=&derived_class_obj;
    derived_class_ptr->base_var=29;
    derived_class_ptr->derived_var=333;
    derived_class_ptr->display();
    /*As we can see here a derived class pointer can access and set the data memebers and member functions of a base class but a base class cannot set or access the data memeber of the derived class*/
    return 0;
}