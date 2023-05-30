// Space complexity:O(1)

// Time complexity:O(N^2)
 

#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

// partition()->places the pivot in its position
// left of pivot all ele will be < pivot
// right of pivot all ele will be > pivot

int partition(int arr[],int lb,int ub){
    // lb,ub -> fixed pos indexes
    // start,end -> moving pos indexes
    int start=lb;
    int end=ub;
    // consider first ele as pivot(can take any ele as pivot)
    int pivot=arr[lb];

    int count=0;
    // count ele that are smaller than pivot
    for(int i=lb+1;i<=ub;i++){
        if(arr[i]<pivot)
            count+=1;
    }
    
    int pivotIndex=lb+count;

    // place pivot in its correct position
    swap(arr[pivotIndex],arr[lb]);
    
    // swapping to make sure that all ele left of pivot are less than pivot and ele right of pivot are greater than pivot

    while(start<pivotIndex && end>pivotIndex){
        while(arr[start]<arr[pivotIndex]){
            start+=1;
        }
        
        while(arr[end]>arr[pivotIndex]){
            end-=1;
        }
        
        if(start<pivotIndex && end>pivotIndex){
            swap(arr[start],arr[end]);
            start+=1;
            end-=1;
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int start,int end){
    // base condition
    if(start>=end)
        return;
    
    // find correct pos of pivot
    int loc=partition(arr,start,end);
    
    // Apply quick sort towards left
    quickSort(arr,start,loc-1);

    // Apply quick sort towards right
    quickSort(arr,loc+1,end);
}
int main(){
    
    int size=5;
    int arr[]={10,99,-1,-1,-1};
    
    cout<<"Before:"<<endl;
    printArray(arr,size);
    
    quickSort(arr,0,size-1);
    
    cout<<"After:"<<endl;
    printArray(arr,size);

    return 0;
}