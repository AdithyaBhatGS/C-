/*Program to find the sum of digits using
recursion*/
#include<iostream>
using namespace std;
int sumOfdigits(int);
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Sum of digits of "<<num<<" is "<<sumOfdigits(num);
    return 0;
}
int sumOfdigits(int num){
    if(num==0)
        return 0;
    else
        return (num%10 + sumOfdigits(num/10));
}