#include<iostream>
using namespace std;
int a=22;
int main(){
    int a=39;
    cout<<"The value of a is:"<<a<<endl;
    /*If we want to print/use the value of global variable 
    whose name is similiar to local then we use scope reso
    lution operator*/
    cout<<"The value of a is:"<<::a<<endl;
    return 0;
}