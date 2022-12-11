// Program to reverse a given number:
#include<iostream>
using namespace std;
int main(){
    int num,numm,last_dig,rev_num=0;
    cout<<"Enter a number:";
    cin>>num;
    numm=num;
    while(num!=0){
        last_dig=num%10;
        rev_num=rev_num*10+last_dig;
        num=num/10;
    }
    cout<<"Reverse of :"<<numm<<" is\n"<<rev_num;
    return 0;
}