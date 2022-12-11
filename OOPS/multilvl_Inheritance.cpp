/*Multilvl Inheritance
*It is a concept where a class will Inherit the properties and behaviour 
from the derived class.
*/
#include<iostream>
using namespace std;
class Animal{
    public:
        void eat(){
            cout<<"Eating"<<endl;
        }
};
class Dog:public Animal{
    public:
        void bark(){
            cout<<"Barking"<<endl;
        }
};
class BabyDog:public Dog{
    public:
        void weep(){
            cout<<"Weeping"<<endl;
        }
};
int main(){
    BabyDog b1;
    b1.eat();
    b1.bark();
    b1.weep();
    return 0;
}