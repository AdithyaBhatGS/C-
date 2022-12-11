/*
A simple illustration of a fibonacci sequence:

0,1,1,2,3,5,8,13,21,34,55......

0->0th term
1->1st term

Each next occurence=Sum of(current+previous) occurences

*/

#include<iostream>
using namespace std;
int fibonacci(int n){
    //base case
    if(n==0)    
        return 0;
    if(n==1)
        return 1;
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
    int nThFibonacci;
    cin>>nThFibonacci;

    cout<<"Fibonacci of "<<nThFibonacci<<" is "<<fibonacci(nThFibonacci);
    return 0;
}