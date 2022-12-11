/*Given an array a[] of size n.For every i from 0 to
n-1 output the max(a[0],a[1]....a[i])
ex:arr[6]={1,0,2,6,3,4}
here we need to output:1 1 2 6 6 6*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int max,size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        cout<<max<<" ";
    }
    return 0;
}