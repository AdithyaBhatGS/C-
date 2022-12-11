/*A singleton class is a type of class where we can crete only one object/instance of it.

So we should not be able to create objects of a Singleton class rather we need to access only object/instance.

This object should be created by the class itself not by you.

How to make a singleton class?

Steps:

1)Make a private constructor 

Why?
Because we should'nt create multiple objects

If we make the constructor public then we can create as many instances we need.

Because we know that the job of the constructor is to allocate the memory for the objects.

2)Create a public static method so that you can create an object and return the object.

But normally you should return a pointer that points to the created object.

3)Create a private static pointer because if you use a static function then you need a static data member as it cannot take non static data members.

4)Initialize the pointer to a null value

5)Now whenever user try to create an object they should call getInstance method() which will basically return the address of the created object.

But check if the value in the pointer is "Null" if it is only then create a new object ,else do not create.

If it "Null" it means still no objects are created so you can create.

*/

#include<iostream>
using namespace std;

class Singleton{
    private:
        Singleton(){

        }
        static Singleton* ptr;
    public:
        static Singleton* getInstance(){
            if(NULL==ptr){
                ptr=new Singleton();
            }
        }
        void display(){
            cout<<"Singleton class!"<<endl;
        }
        ~Singleton(){
            delete ptr;
        }
};
Singleton *Singleton::ptr=NULL;
int main(){
    Singleton* obj1=Singleton::getInstance();

    Singleton* obj2=Singleton::getInstance();

    cout<<obj1<<" "<<obj2<<endl;  

    obj1->~Singleton();
    obj2->~Singleton();
    return 0;  
}