/*Reverse an array using pointers*/
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void swap(int *ptr1,int *ptr2){
    int temp;
    while(ptr1<ptr2){
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;  
        ptr1+=1;
        ptr2-=1;
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
    int arr[size];
    readArray(arr,size);
    int *p1=&arr[0];
    int *p2=&arr[size-1];
    swap(p1,p2);
    printArray(arr,size);
    return 0;
}