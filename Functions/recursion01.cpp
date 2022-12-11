/*Program to find the factorial of a 
number using recursion*/
#include<iostream>
using namespace std;
int fact(int);
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<fact(num);
    return 0;
}
int fact(int a){
    if(a==1)
        return 1;
    else
        return a*fact(a-1);
}