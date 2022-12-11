/*Abstract Classes :
*A class containing atleast 1 pure virtual function is known as Abstract Class
*A pure virtual function means function with no operation
*Syntax: 
            virtual void fun_name()=0;

*The purpose of creating an abstract class is to use the concept of inheritance 
*That is derived classes will make use of properties of abstract class
*So we cannot create object of an abstract class
*Abstract class can have constructors
*Pointers and References of abstract classes can be created to point to derived class objects
*If we don't redefine a pure virtual function in derived class then it will become an abstract class*/

#include<iostream>
using namespace std;
class fruit{
    private:
        void addWater(){
            cout<<"Add 150ml water!"<<endl;
        }
        void addSugar(){
            cout<<"Add sugar(in small quantity)!"<<endl;
        }
        void addIceCubes(){
            cout<<"Add 2 small and 1 medium cube!"<<endl;
        }
    public:
        void Ingriedients(){
            addWater();            
            addSugar();
            addIceCubes();
        }
        virtual void final()=0;//Pure Virtual Function
};
class mango:public fruit{
    public:
        mango(){
            cout<<"Recipie for mango juice:"<<endl;
        }
        void final(){
            cout<<"Add 5-6 mango slices(medium)"<<endl;
        }
};
class waterMelon:public fruit{
    public:
        waterMelon(){
            cout<<"Recipie for waterMelon juice:"<<endl;
        }
        void final(){
            cout<<"Add 4 waterMelon pieces(medium)"<<endl;
        }
};
void display(fruit *ptr){
    //Parameter is a pointer
    ptr->Ingriedients();
    ptr->final();
}
int main(){
    fruit **fruit_type_ptr=new fruit*[2];
    //Creating array of pointers dynamically
    mango m;
    fruit_type_ptr[0]=&m;
    display(fruit_type_ptr[0]);
    cout<<"-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-"<<endl;
    waterMelon w;
    fruit_type_ptr[1]=&w;
    display(fruit_type_ptr[1]);
    delete[] fruit_type_ptr;
    return 0;
}