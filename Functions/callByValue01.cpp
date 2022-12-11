//Call by value:
//Ex:Swap 2 numbers:
#include<iostream>
using namespace std;
void swap(int,int);
int main(){
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    cout<<"Value of a="<<a<<" and b="<<b<<" before swap\n";
    swap(a,b);
    cout<<"Value of a="<<a<<" and b="<<b<<" after swap\n";
    return 0;
}
void swap(int num1,int num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"num1="<<num1<<" and num2="<<num2<<"\n";
}