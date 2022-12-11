#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    int temp=0,j;
    for(int i=1;i<size;i++){
        j=i-1;
        temp=arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,size);
    printArray(arr,size);
    return 0;
}