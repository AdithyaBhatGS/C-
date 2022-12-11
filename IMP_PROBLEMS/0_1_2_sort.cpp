#include<iostream>
#include<list>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void readArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size],start=0,end,mid=0;
    end=size-1;
    readArray(arr,size);
    while(mid<=end){
        if(arr[mid]==1)
            mid+=1;
        else if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            mid+=1;
            start+=1;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[end]);
            end-=1;
        }
    }
    printArray(arr,size);
    return 0;
}