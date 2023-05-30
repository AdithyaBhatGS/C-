// Merge sort:
// Space complexity:O(1)

// Time complexity:
// Best Case:O(N^LogN)

#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
void merge(int arr[],int start,int end){

    int mid=start+(end-start)/2;
    
    // determine sub array size
    int size_of_arr1=mid-start+1;
    int size_of_arr2=end-mid;
    
    // create 2 sub arrays of size size_of_arr1,size_of_arr2
    int *arr1=new int[size_of_arr1];
    int *arr2=new int[size_of_arr2];
    
    int main_arr_idx=start;
    
    // copy values from main array to sub array1
    for(int i=0;i<size_of_arr1;i++){
        arr1[i]=arr[main_arr_idx++];
    }
    
    main_arr_idx=mid+1;
    // copy values from main array to sub array2
    for(int i=0;i<size_of_arr2;i++){
        arr2[i]=arr[main_arr_idx++];
    }
    
    int index1=0;
    int index2=0;
    main_arr_idx=start;
    
    while(index1<size_of_arr1 && index2<size_of_arr2){
        if(arr1[index1]<=arr2[index2]){
            arr[main_arr_idx++]=arr1[index1++];
        }    
        else{
            arr[main_arr_idx++]=arr2[index2++];
        }
    }
    
    while(index1<size_of_arr1){
        arr[main_arr_idx++]=arr1[index1++];
    }

    while(index2<size_of_arr2){
        arr[main_arr_idx++]=arr2[index2++];
    }
    
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int arr[],int start,int end){
    int mid=start+(end-start)/2;
    
    if(start>=end)
        return;
    //divide arr to two equal parts 
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    // sort and merge
    merge(arr,start,end);
}
int main(){
    
    int size=6;
    int arr[size]={2,3,11,8,9,-99};
    
    cout<<"Before:"<<endl;
    printArray(arr,size);

    mergeSort(arr,0,size-1);
    
    cout<<"After:"<<endl;
    printArray(arr,size);
    
    return 0;
}