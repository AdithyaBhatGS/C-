//Program to find the sum of first n natural numbers:
#include<iostream>
using namespace std;
int sum(int n){
    int s=0;
    s=(n*(n+1))/2;
    return s;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
