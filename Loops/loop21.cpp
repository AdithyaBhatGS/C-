// Program to find the sum of all prime numbers from 1 to n;
#include<iostream>
using namespace std;
int main(){
    int num,n,i,sum=0;
    cout<<"Enter the number:";
    cin>>num;
    for(n=num;n>1;n--){
        for(i=n-1;i>=1;i--){
            if(((n%i)==0) && i>1){
                break;
            }
            if(i==1){
                sum=sum+n;            
            }
        }
    }
    cout<<"Sum of prime numbers between 1 and "<<num<<" = "<<sum;
    return 0;
}