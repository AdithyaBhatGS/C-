// Program to find the sum of digits of a number:
#include<iostream>
using namespace std;
int main(){
    int num,sum_of_dig=0;
    cout<<"Enter the number:";
    cin>>num;
    while(num!=0){
        sum_of_dig=(num%10)+sum_of_dig;
        num=num/10;
    }
    cout<<"Sum of the digits of number is:"<<sum_of_dig;
    return 0;
}