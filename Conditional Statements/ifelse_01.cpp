//Program to check wheather a number is zero,positive or negative
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    if(num==0)
        cout<<"ZERO!!! \n";
    else if(num<0)
        cout<<"Negative number!!! \n";
    else 
        cout<<"Positive number!!! \n";
    return 0;
}
