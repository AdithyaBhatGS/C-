// Program to find the number of digits in a number:
#include<iostream>
using namespace std;
int main(){
    int num,i=0;
    cout<<"Enter the number:";
    cin>>num;
    while(num!=0){
        ++i;
        num=num/10;  
    }
    cout<<"The number of digits="<<i;
    return 0;
}