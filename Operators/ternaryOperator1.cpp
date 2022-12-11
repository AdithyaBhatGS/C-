/*Program to check wheather a number
is +ve ,-ve or 0 using ternary operator:*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    (num==0) ? cout<<"Zero" : (num>0) ? cout<<"Positive":cout<<"Negative";
    return 0;
}