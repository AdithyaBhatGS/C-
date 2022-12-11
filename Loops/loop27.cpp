/* Program to find the power of number:
ex: 2^5 =32
*/
#include<iostream>
using namespace std;
int main(){
    int i,base,expo;
    long long int power=1;
    cout<<"Enter the base and exponent values:";
    cin>>base>>expo;
    for(i=1;i<=expo;i++)
    {
        power=power*base;
    }
    cout<<"Power of "<<base<<" ^ "<<expo<<" is "<<power;
    return 0;
}