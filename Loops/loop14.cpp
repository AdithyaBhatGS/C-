// Program to find the product of all the digits of a number:
#include<iostream>
using namespace std;
int main(){
    int num,n;
    unsigned long int product=1;
    cout<<"Enter the number:";
    cin>>num;
    n=num;
    while(num!=0){
        product=product*(num%10);
        num=num/10;
    }
    cout<<"The product of all the digits of the number : "<<n<<" is "<<product;
    return 0;
} 
