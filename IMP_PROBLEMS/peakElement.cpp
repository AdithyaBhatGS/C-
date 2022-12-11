/*Recursive Approach+Divide and Conquer*/
#include<bits/stdc++.h>
using namespace std;
int findPeakUntil(int arr[],int n,int low,int high){
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1||arr[mid+1]<=arr[mid]))
            return mid;
        else if(arr[mid-1]>arr[mid])
            return findPeakUntil(arr,n,low,mid-1);
        else    
            return findPeakUntil(arr,n,mid+1,high);
    }
}
int findPeak(int arr[],int n){
    findPeakUntil(arr,n,0,n-1);
}
int main(){
    int arr[]={10,20,15,2,23,90,67};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Peak Element present at : "<<findPeak(arr,size);
    return 0;
}