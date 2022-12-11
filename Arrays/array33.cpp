#include<bits/stdc++.h>
using namespace std;
void printIntersection(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}
void intersection(int arr1[],int size1,int arr2[],int size2){
    vector<int> arr3;
    int i=0,j=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]==arr2[j]){
            arr3.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j])
            j++;
    }
    printIntersection(arr3);
}
void readArray(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
}
int main(){
    int size1,size2;
    cout<<"Enter the array1 and array2 size:";
    cin>>size1>>size2;
    int arr1[size1],arr2[size2];
    readArray(arr1,size1);
    readArray(arr2,size2);
    intersection(arr1,size1,arr2,size2);
    return 0;
}