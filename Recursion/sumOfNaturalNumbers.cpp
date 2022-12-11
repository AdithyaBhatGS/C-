//Program to find the sum of first N natural numbers using
//recursion

#include<iostream>
using namespace std;
unsigned long long int sumOfNaturalNumber(int num){
    //base case
    if(num==0)
        return 0;
    return num+sumOfNaturalNumber(num-1);
}
int main(){
    int num;
    cin>>num;
    cout<<"Sum of 1st "<<num<<"Natural Numbers is :"<<sumOfNaturalNumber(num);    
    return 0;
}