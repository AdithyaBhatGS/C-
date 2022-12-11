/*Program to check wheather a number 
is even or odd:*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    (num & 1)?cout<<"ODD"<<endl:cout<<"EVEN"<<endl;
    return 0;
}
/*How it works:
See whenever we take an odd no ,if we convert it to binary
always the last bit will be 1 means 1 & 1=1;*/