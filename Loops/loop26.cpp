// Program to find the L.C.M of 2 numbers
// by taking user input:
#include<iostream>
using namespace std;
int main()
{
    long long int num1,num2,i=1,max,lcm=0;
    cout<<"Enter 2 numbers:";
    cin>>num1>>num2;
    max=(num1>num2)?num1:num2;
    i=max;
    while(1){
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
        i=i+max;
    }
    cout<<"L.C.M of "<<num1<<" and "<<num2<<" is "<<lcm;
    return 0;
}