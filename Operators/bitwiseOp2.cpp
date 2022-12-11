/*Whenever we try to use shift left and shift 
right operator to shift 1 bit of data it will
be similiar to multiplying and dividing the 
number:
ex01:a=10;
(a<<1);==20
(a>>1);==5
ex02:a=11;
cout<<(a<<1)=22
cout<<(a>>1)=5   
*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    cout<<(num<<1)<<endl;//Acts as num1*2
    cout<<(num>>1)<<endl;//Acts as num1/2
    return 0;
}