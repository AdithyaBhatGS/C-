/*A dangling pointer is the one that points to a invalid memory
*/
#include<iostream>
using namespace std;

class A{
    public:
    A(){

    }
};
int main(){
    // Here we're creating an object of class A
    // Assign its address to ptr of type A
    A *ptr=new A;

    // Create another pointer of type A and assign the value of ptr to it

    A *ptr1=ptr;

    cout<<ptr<<endl;
    
    // Now delete memory stored in the old ptr
    delete ptr;
    
    // assign it with new address
    ptr=nullptr;

    cout<<&ptr<<endl;
    
    // now if you see ptr1 it is still pointing to a location that is already removed or invalid causing dangling pointer. 
    cout<<ptr1;
    return 0;
}