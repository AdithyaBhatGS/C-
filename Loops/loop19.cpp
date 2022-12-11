/* Program to find fibonacci series upto n terms :
FIBONACCI SERIES?
It is a type of series where every number is obatained by 
sum previous 2 numbers:*/
// EX:0 1 1 2 3 5 8 13...etc.
#include<iostream>
using namespace std;
int main(){
    int i,n,prev=0,cur=1,fut;
    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<prev<<"\t"<<cur<<"\t";
    for(i=1;i<=n-2;i++){
        fut=prev+cur;
        cout<<fut<<"\t";
        prev=cur;
        cur=fut;
    }
    return 0;
}