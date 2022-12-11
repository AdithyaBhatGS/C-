/* Program to move all 0's to the end of the array without changing 
the order of non-zero elements using 
T.C.-->O(N) */
#include<iostream>
using namespace std;
void place_zeros_to_left(int arr[],int size){
    int count=0;
    for (int i = 0; i < size; i++)
    {   
        if(arr[i]!=0){
            arr[count]=arr[i];
            count+=1;
        }
    }
    while(count<size){
        arr[count]=0;
        count+=1;
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
    int arr[]={22,0,11,0,98,77,0,0,11,-1,19,0,23,0};
    int size=sizeof(arr)/sizeof(int);
    printArray(arr,size);
    place_zeros_to_left(arr,size);
    printArray(arr,size);
    return 0;
}