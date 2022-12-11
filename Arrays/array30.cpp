/*Program to reverse an array*/
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size){
    int i=0,j=size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void readArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    readArray(arr,size);
    printArray(arr,size);
    reverse(arr,size);
    printArray(arr,size);
    return 0;
}