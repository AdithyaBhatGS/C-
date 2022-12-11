#include<iostream>
using namespace std;
int square(int);
float square(float);
int main(){
    int a;
    float b;
    cout<<"Enter a number whose square should be obtained:";
    cin>>a;
    cout<<"Enter a number(in decimal) whose square should be obtained:";
    cin>>b;
    cout<<"The square of "<<a<<" is "<<square(a)<<endl;
    cout<<"The square of "<<b<<" is "<<square(b);
}
int square(int num){
    return(num*num);
}
float square(float num){
    return(num*num);
}