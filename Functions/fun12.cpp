/*Program to take user and input and display prime numbers
between the entered range including the entry and final num*/
#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int start,end;
    cout<<"Enter starting and ending numbers:";
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        if(isprime(i)){
            cout<<i<<"\t";
        }
    }
    return 0;
}