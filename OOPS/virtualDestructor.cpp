/*Virtual destructors:

See whenever we create a derived class object and then assign it to a base class pointer and then if you destroy that derived class object it will call the base class destructor but not the derived.

In general it results in some undefined behaviour.

So in order to avoid this make the base class destructor virtual.

*/


#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Base class constructor!"<<endl;
        }
        virtual ~Base(){
            cout<<"Base class destructor!"<<endl;
        }
};
class Derived:public Base{
    public:
        Derived(){
            cout<<"Derived class constructor"<<endl;
        }
        ~Derived(){
            cout<<"Derived class destructor"<<endl;
        }
};
int main(){
    
    Derived *dptr=new Derived();
    Base *bptr=dptr;
    delete bptr;
    return 0;
}