/*Program to show how to create refrence variables and 
use them:-
*/
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int num1,num2;
    cout<<"Enter 2 numbers a and b:";
    cin>>num1>>num2;
    cout<<"Value before the swap:"<<"num1 = "<<num1<<" and num2 = "<<num2<<endl;
    swap(num1,num2);
    cout<<"Value after the swap:"<<"num1 = "<<num1<<" and num2 = "<<num2<<endl;
    return 0;
}