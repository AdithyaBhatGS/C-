//Program to find the 1st N natural numbers by taking user
//input using recursion


#include<iostream>
using namespace std;

void naturalNum(int num){
    
    //base case
    if(num==0)
        return;
        
    naturalNum(num-1);
    cout<<num<<" ";
}

int main(){
    int num;
    cin>>num;
    naturalNum(num);
    return 0;
}