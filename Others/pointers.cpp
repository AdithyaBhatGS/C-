/*Pointer:It is a variable that holds the address
of other variable;
& ---->Address off operator
* ---->Derefrencing operator
*/
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr1<<endl;
    **ptr1=12;
    cout<<a<<endl;
    *ptr=(**ptr1)+2;
    cout<<*ptr<<endl;
    return 0;
}