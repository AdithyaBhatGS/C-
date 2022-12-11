// Program to find the HCF of given 2 numbers:
/* HCF means highest common factor:
Means if we take 2 numbers 10 and 20,
Factors of 10 are:1,2,5,10
Factors of 20 are:1,2,4,5,10,20
Now in the above 2 lines 1,2,5,10 are common factors of 
10 & 20 but among them the highest common factor is 10
So it is the soln:*/

#include<iostream>
using namespace std;
int main(){
    int i,num1,num2;
    cout<<"Enter 2 numbers:";
    cin>>num1>>num2;
    i=num1;
    while(i>0) 
    {
        if(((num1%i)==0) && ((num2%i)==0))
        {
            cout<<"HCF OF "<<num1<<" and "<<num2<<" is "<<i;
            break;
        }
        i--;
    }
}