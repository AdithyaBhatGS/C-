/*Program to take user input and determine wheather 
it is prime number,armstrong number or perfect number
using functions: */
#include<iostream>
#include<math.h>
using namespace std;
int prime(int);
int armstrong(int);
int perfect(int);
int main(){
    int num;
    cout<<"Enter the number to be checked:";
    cin>>num;
    if(prime(num)){
        cout<<num<<" is a Prime number!"<<endl;
    }
    else{
        cout<<num<<" is not a Prime number!"<<endl;
    }

    if(armstrong(num)){
        cout<<num<<" is an Armstrong number!"<<endl;
    }
    else{
        cout<<num<<" is not a Armstrong number!"<<endl;
    }

    if(perfect(num)){
        cout<<num<<" is an Perfect number!"<<endl;
    }
    else{
        cout<<num<<" is not a Perfect number!"<<endl;
    }
    return 0;
}
int prime(int a){
    if(a==1)
        return 0;
    else
    {
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int armstrong(int a){
    int last_dig,sum=0,c=0,count=0;
    int b=a;
    int d=a;
    while(d>0){
        d=d/10;
        ++count;
    }
    while(a>0){
    last_dig=a%10;
    c=pow(last_dig,count);
    sum=sum+c;
    a=a/10;
    }
    if(sum==b)
        return 1;
    else
        return 0;
}
int perfect(int a){
    int sum=0;
    for(int i=1;i<=a/2;i++)
    {
        if((a%i)==0){
            sum=sum+i;
        }
    }
    if(sum==a)
        return 1;
    else 
        return 0;
}