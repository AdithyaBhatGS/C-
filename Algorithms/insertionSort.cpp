// Space complexity:O(1)
// Time complexity:O(N^2),O(N)

#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    int temp=0,j;
    for(int i=1;i<size;i++){
        // copy current element
        temp=arr[i];
        // j will be current element's pos-1
        j=i-1;
        // index>=0 and if arr[j]>current ele the arr[j] should be copied to arr[j+1] and j should be decremented for further comp
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        // when temp>arr[j] skip the loop and place temp in correct pos
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