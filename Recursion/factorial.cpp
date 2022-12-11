//Program to find the factorial of a number using recursion

#include<iostream>
using namespace std;
unsigned long long int factorial(int num){

    //base case
    if(num==0)
        return 1;
    
    return num*factorial(num-1);
}
int main(){
    int num;
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<<factorial(num);
    return 0;
}