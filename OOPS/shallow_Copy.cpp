/*Shallow_Copy
*Shallow Copy is the one which compiler will use by default
when we need to use Copy Constructor but we haven't declared yet.
*In Shallow Copy variables that are declared in the stack section
i.e. normal variables will not create any problem.
*But variables that are declared in the heap section means those 
that are dynamically created will create a problem.
*The copied object's data member and orginal object's data member
will point to same location .
*So if we change 1 object's data member then the other one will alse
get affected.
*So whenever we Create a dynamic variable we need to make use of 
deep copy */
#include<iostream>
using namespace std;
class Car{
    public:
        int *milege=NULL;
        Car(int milege_value){
            milege=new int;
            *milege=milege_value;
        }
        void setMilege(int milege_value){
            *milege=milege_value;
        }
        void display(){
            cout<<*milege<<endl;
        }
};
int main(){
    Car c1(20);
    Car c2=c1;
    c2.display();//c2 changes when c1 changes
    c1.setMilege(30);
    c2.display();//c2 changes when c1 changes
    return 0;
}