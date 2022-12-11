/*Pointer to pointer is a variable that holds the 
address of a pointer.
Whereas pointer is variable that holds the address of a 
variable*/
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* b=&a;
    int** c=&b;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    return 0;
}