/* Program to take user input and print prime numbers 
from 1 to n:
NOTE:Prime number:A number which is not divisible by any numbers 
other than 1 and itself*/
#include<iostream>
using namespace std;
int main(){
    int num,n,i;
    cout<<"Enter the number upto which prime numbers will be generated:";
    cin>>num;
    for(n=num;n>1;n--){
        for(i=n-1;i>=1;i--){
            if((n%i)==0 && i>1){
                break;
            }
            if(i==1)
                cout<<n<<"\t";
        }
    }
    return 0;
}