// Program to find the factorial of a number:
#include<iostream>
using namespace std;
int main(){
    int n,num,i=1;
    unsigned long int fact=1;
    cout<<"Enter the number:";
    cin>>num;
    n=num;
    for(i=num;i>=1;i--)
    {
            fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}