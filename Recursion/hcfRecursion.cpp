/*Program to calculate the hcf of 2 numbers

How it works?

Here we are following Euclidian Algorithm

Euclid's algorithm:

num1=1220
num2=30

    if(num1%num2==0)
        hcf=num2

    num1=num2
    num2=num2%num1

Working:

hcfOfTwoNos(1220,30){
    1000%30==20
    20==0 false
    hcfOfTwoNos(30,20)
}

hcfOfTwoNos(30,20){
    30%20==10
    10==0 false
    hcfOfTwoNos(20,10)
}

hcfOfTwoNos(20,10){
    20%10==0
    0==0 true 
    return 10;
}

*/

#include<iostream>
using namespace std;

int hcfOfTwoNos(int num1,int num2){
    if(num1%num2==0)
        return num2;
    return hcfOfTwoNos(num2,num1%num2);
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    if(num1>num2)
        cout<<hcfOfTwoNos(num1,num2);
    else
        cout<<hcfOfTwoNos(num2,num1);
    return 0;
}
