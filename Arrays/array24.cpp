/*Program to merge two sorted array into a array
so that the elements in merged array should be sorted:
Note:
Ex:arr1[]={10,12,15,22,23}
arr2[]={6,7,8}
mergedArray={6,7,8,10,12,15,22,23}*/
#include<iostream>
using namespace std;
void merge(int arr1[],int size1,int arr2[],int size2,int mergedArray[],int size3){
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            mergedArray[k]=arr1[i];
            i++;
            k++;
        }
        else{
            mergedArray[k]=arr2[j];
            j++;
            k++;
        }
    }    
    while(i<size1){
        mergedArray[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2){
        mergedArray[k]=arr2[j];
        j++;
        k++;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size1,size2,size3;
    cin>>size1>>size2;
    size3=size1+size2;
    int arr1[size1],arr2[size2],mergedArray[size3];
    for (int i = 0; i < size1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        cin>>arr2[i];
    }
    merge(arr1,size1,arr2,size2,mergedArray,size3);    
    printArray(mergedArray,size3);
    return 0;
}