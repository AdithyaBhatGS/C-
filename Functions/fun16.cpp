/*Program to take user input and reverse the
given number and check wheather it is palindrome or
not:
Note:A number which is same after reversing
is known as palindrome*/
#include<iostream>
using namespace std;
int rev(int a){
    int last_dig,sum=0;
    int num=a;
    while(num>0)
    {
        last_dig=num%10;
        sum=sum*10+last_dig;
        num=num/10;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num==rev(num))
        cout<<num<<" is a Palindrome!";
    else
        cout<<num<<" is not a Palindrome!";
    return 0;
}