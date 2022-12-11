/*Program to find the maximum of 2 numbers
using ternary operator:*/
#include<iostream>
using namespace std;
int max(int a,int b){
    return((a>b)?a:b);
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    cout<<"Max="<<max(num1,num2)<<endl;
    return 0;
}