// Write a C program to print all even
//  numbers between 1 to 100. - using while loop
#include<iostream>
using namespace std;
int main(){
    int num=2;
    while(num>=2 && num<=100)
    {
        cout<<num<<endl;
        num=num+2;
    }
    return 0;
}