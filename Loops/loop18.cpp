/* Program to take the user input and determine wheather a number is Strong number or not:
Ex:145 i.e.1!+4!+5!=1+24+120=145 
A number is said to be strong number if the sum of individual digits fact
orial is equal to the number*/
#include<iostream>
using namespace std;
int main(){
    int n,num,i,last_dig,fact=1,sum=0;
    cout<<"Enter the number:";
    cin>>num;
    n=num;
    while(num>0)
    {
        last_dig=num%10;
        for(i=last_dig;i>0;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
        fact=1;
    }
    if(sum==n){
        cout<<n<<" is a STRONG NUMBER!!";
    }
    else{
        cout<<n<<" is not a STRONG NUMBER!!";
    }
}