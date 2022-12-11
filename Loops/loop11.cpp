// Program to find the factors of a given number:
#include<iostream>
using namespace std;
int main(){
    int num,fact=1,i=1;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Factors of "<<num<<"are: ";
    while(i<=num)
    {
            if((num%i)==0)
            {
            cout<<"\n"<<i;
            }
            i++;
            // Here we need to put i++ outside if because if the "if" becomes false then it will not work;
    }
    return 0;
} 