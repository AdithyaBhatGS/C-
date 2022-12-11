// Program to find the maximum of two numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter num1: \n";
    cin>>num1;
    cout<<"Enter num2: \n";
    cin>>num2;
    if(num1>num2)
        cout<<"Maximum="<<num1<<endl;
    else
        cout<<"Maximum="<<num2<<endl;
    return 0;
}