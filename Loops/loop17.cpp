/* Program to check wheather a number is perfect
number or not:
NOTE:A perfect number is one which is equal to sum of all 
divisors excluding itself
ex:6 i.e. divisors of 6 are:6,3,2,1
but we need to exclude 6 so 3+2+1=6;*/
#include<iostream>
using namespace std;
int main(){
    int num,i,sum=0;
    cout<<"Enter the number:";
    cin>>num;
    for(i=num-1;i>0;i--){
        if((num%i)==0){
            sum=sum+i;
        }
    }
    if(sum==num)
        cout<<num<<" is a perfect number!";
    else
        cout<<num<<" is not a perfect number!";
    return 0;
}