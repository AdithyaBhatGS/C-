//Write a C program to find maximum between two numbers using switch case.
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter 2 numbers:";
    cin>>num1>>num2;
    switch(num1 > num2){
        case 0:cout<<"Max="<<num2;
                break;
        case 1:cout<<"Max="<<num1;
                break;
    }
    return 0;
}