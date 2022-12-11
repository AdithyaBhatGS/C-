// Program to find maximum of 3 numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the num1:"<<endl;
    cin>>num1;
    cout<<"Enter the num2:"<<endl;
    cin>>num2;
    cout<<"Enter the num3:"<<endl;
    cin>>num3;
    if((num1>num2) && (num1>num3))
    {
        cout<<"Max="<<num1<<endl;
    }
    else if((num2>num1) && (num2>num3))
    {    
        cout<<"Max="<<num2<<endl;
    }
    else
    {
        cout<<"Max="<<num3<<endl;
    }
    return 0;
}