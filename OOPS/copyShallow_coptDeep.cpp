/*
Copy of an object can be done:
1)= -> implicit copy assignment operator 
2)Copy constructor

objects->s1,s2 belongs to same class
data members->x,y

now,
already s1 is created.

Assigning an other object at the time of object creation:

sample s2=s1; 
(copy constructor)

Creating an object and then assigning another object:

sample s2;
s2=s1;
(implicit copy assignment operator)

What is shallow copy:

A shallow copy simply copies everything from one object and assigns it to another object

Now if you have created a pointer in an object then when you copy that object to a new object even the new object cotains a pointer and now both pointers(new objects and old objects) are pointing to same address.

So when you change the value in one object anothers will also get impacted.

Deep copy:

In deep copy we can avoid this by creating our own copy constructor.

*/

#include<iostream>
using namespace std;

class sample{
    private:
        int x,y;
        int* p;
    public:
        sample(){
            p=new int();
        }
        // Normal object's data members are assigned here
        void setData(int a,int b,int c){
            x=a;
            y=b;
            *p=c;
        }
        void showData(){
            cout<<x<<" "<<y<<" "<<*p<<endl;
        }
        // Object being created using copy constructor will be assigned here
        sample(sample& obj){
            x=obj.x;
            y=obj.y;
            // Instead of assigning a value to same address we create a new memory block and then assign a value
            p=new int;
            *p=*(obj.p);
        }
};
int main(){
    sample s1;  
    s1.setData(10,19,100);
    cout<<"Before shallow copy:";
    s1.showData();  
    sample s2=s1;
    s2.setData(10,19,122);
    cout<<"After shallow copy:";
    s1.showData();
    return 0;
}
