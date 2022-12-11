/* Program to check wheather a number is prime number or not:
NOTE:Prime number:A number which is not divisible by any numbers 
other than 1 and itself*/
#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter the number:";
    cin>>num;
    for (i=num-1;i>=1;i--)
    {
        if((num%i)==0 && i>1){
            cout<<num<<" is not a prime number!";
            break;
        }
        if(i==1)
            cout<<num<<" is a prime number!";
    }
    return 0;
}

