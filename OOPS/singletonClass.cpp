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

2)Create a private static pointer because we cannot make instances of it(no copies).

3)Create a public static method so that you can create an object and return the object.

But normally you should return a pointer that points to the created object.

4)Delete the copy constructor(because it accepts objects as arguments to initialize the current object,here we don't have the concept of more than 1 object so we must delete)

5)Initialize the pointer to a null value

6)Now whenever user try to create an object they should call getInstance method() which will basically return the address of the created object.

But check if the value in the pointer is "Null" if it is only then create a new object ,else do not create.

If it "Null" it means still no objects are created so you can create.

*/

#include<iostream>

using namespace std;

class Singleton{

    Singleton(){

    }

    string name;
    float salary;

    static Singleton* ptr;

    public:
    
    Singleton(const Singleton* obj)=delete;
    
    static Singleton* getInstance(){
        if(ptr==NULL){
            ptr=new Singleton();

            return ptr;
        }
        else{
            return ptr;
        }
    }

    void setValues(string name,float salary){
        this->name=name;
        this->salary=salary;
    }

    void printValue(){
        cout<<endl<<"Name : "<<this->name<<endl;
        cout<<"Salary : "<<this->salary<<endl;
    }

};

Singleton* Singleton::ptr=NULL;

// Here we can change value assigned to the datamembers of the object but we can't create instances of it

int main(){
    Singleton* s_ptr=Singleton::getInstance();
    
    s_ptr->setValues("Vamika",10000);
    s_ptr->printValue();

    cout<<"Address of the current obj : "<<s_ptr<<endl;
    
    cout<<"---------------------------------";   
    
    s_ptr->setValues("Manisha",20000);
    s_ptr->printValue();

    cout<<"Address of the current obj : "<<s_ptr<<endl;
    
    return 0;
}