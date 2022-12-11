/*Program to return maximum and minimum among
2 numbers by taking user input using functions:*/
#include<iostream>
using namespace std;
int max(int,int);
int min(int,int);
int main(){
    int num1,num2;
    cout<<"Enter any 2 numbers:";
    cin>>num1>>num2;
    cout<<"Maximum="<<max(num1,num2)<<endl;
    cout<<"Minimum="<<min(num1,num2);
    return 0;
}
int max(int a,int b){
    return(a>b)?a:b;
}
int min(int a,int b){
    return(a<b)?a:b;
}
