/*Program to check wheather a number
is even or not:*/
#include<iostream>
using namespace std;
void odd_or_even(int a){
    if((a%2)==0)
        cout<<a<<" is even number!!";
    else    
        cout<<a<<" is odd number!!";
}
int main(){
    long long int num;
    cout<<"Enter any number:";
    cin>>num;
    odd_or_even(num);
    return 0;
}