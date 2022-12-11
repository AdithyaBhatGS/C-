/*Program to take input from the user
 and compute the sum:*/
#include<iostream>
using namespace std;
int sum(int a,int b,int c){
    int d=a+b+c;
    return d;
}
int main(){
    int num1,num2,num3;
    cout<<"Enter the value of num1,num2,num3:";
    cin>>num1>>num2>>num3;
    cout<<num1<<"+"<<num2<<"+"<<num3<<"="<<sum(num1,num2,num3);
    return 0;
}