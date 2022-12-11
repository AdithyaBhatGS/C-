// Program to find the sum of last and first digit of 
// a number without using pow
#include<iostream>
using namespace std;
int main(){
    int num,i,n1,n,count=0,first_dig,last_dig,sum;
    cout<<"Enter the number:";
    cin>>num;
    n=n1=num;
    while(n!=0){
        n=n/10;
        ++count;
    }
    for(i=count;i>0;i--){
        if(i==1){
            first_dig=n1;
        }
        n1=n1/10;
    }
    last_dig=num%10;
    sum=last_dig+first_dig;
    cout<<"Sum of first and last digits="<<sum;
    return 0;
}
// P.S this might not be the optimal code