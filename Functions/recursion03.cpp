/*Program to find the fibonacci term value using
recursion from index 0:
Means for ex:
Let's say we need to find the 5th fibonacci term the
it will be 8 not 5 because we will start from 0th term.

0th-1
1st-1
2nd-2
3rd-3
4th-5
5th-8   */

#include<iostream>
using namespace std;
int fib(int);
int main(){
    int num;
    cout<<"Enter the fibonacci term to be calculated:";
    cin>>num;
    cout<<"The value of fibonacci term "<<num<<" is = "<<fib(num);
    return 0;
}
int fib(int num){
    if(num<=1)
        return 1;
    else
        return (fib(num-2)+fib(num-1));
}