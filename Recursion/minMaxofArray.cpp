/*Program to calculate the maximum and minimum elements of the array using recursion
*/


#include<iostream>
#include<limits.h>
using namespace std;
int minOfArray(int arr[],int i,int size){
    if(i==size-1){
        if(arr[i]<INT_MAX)
            return arr[i];
        else    
            return INT_MIN;
    }
    int min=minOfArray(arr,i+1,size);
    if(min>arr[i])
        min=arr[i];
    return min;
}
int maxOfArray(int arr[],int i,int size){
    if(i==size-1){
        if(arr[i]>INT_MIN)
            return arr[i];
        else    
            return INT_MIN;
    }
    int max=maxOfArray(arr,i+1,size);
    if(max<arr[i])
        max=arr[i];
    return max;
}
int main(){
    int size=10;
    int arr[10]={1000,2,8,77,33,21,100,188,29,10}; 
    cout<<minOfArray(arr,0,size)<<endl;
    cout<<maxOfArray(arr,0,size);   
    return 0;
}