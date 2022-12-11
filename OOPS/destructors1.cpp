/*Destructors:
*Destructors are basically used to destroy the created objects.
*Even if we don't create a destructor the compiler will automatically 
destroy the objects.
*When will a destructor destroy the object?
1)When the main fun() ends.
2)When we use ~ sign.
3)When a block ends.
4)When a function ends.
Note:
If we have created a dynamic object i.e. in thee heap section then
to destroy that object we need to use "delete" or else
it won't be destroyed
*/
#include<iostream>
using namespace std;
class Car{
    public:
        Car(){
            cout<<"Constructor got invoked!"<<endl;
        }
        ~Car(){
            cout<<"Object is destroyed!"<<endl;
        }
};
int main(){
    Car c1;
    cout<<"-----------------"<<endl;
    return 0;
}