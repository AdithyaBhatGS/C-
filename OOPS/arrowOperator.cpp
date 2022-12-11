/*Arrow operator(->) is used to access/modify the data member and member function of the respective objects through pointers;

Synatax:(ptr_name)->data_mem/mem_fun;

With (.) operator we can access/modify the data memebers and member functions of a object though object name;

This is the difference between dot and arrow operator*/
#include<iostream>
using namespace std;
class Simple{
    public:
        int a,b;
        void display(){
            cout<<a<<" "<<b<<endl;
        }
};
int main(){
    Simple *ptr=new Simple;
    ptr->a=11;
    ptr->b=19;
    ptr->display();
    return 0;
}