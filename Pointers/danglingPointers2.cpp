// Illustration of dangling pointer

#include<iostream>

using namespace std;

int* fun(){
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    return ptr;
}
int main(){

    /*Here we are creating an integer pointer and assigning it to a fun() that returns an address.

    But once the fun() scope ends it will be destroyed in the stack frame .

    Means c is pointing to an invalid location and hence it's a dangling pointer*/

    int *c=fun();
    cout<<c<<endl;
    return 0;
}