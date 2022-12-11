/*Swapping two arrays using pointers*/
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapArray(int *p1,int *p2,int size){
    int temp;
    for (int i = 0; i < size; i++)
    {
        temp=*p1;
        *p1=*p2;
        *p2=temp;
        p1+=1;
        p2+=1;
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
    int arr1[size],arr2[size];
    readArray(arr1,size);
    readArray(arr2,size);
    int *ptr1=&arr1[0];
    int *ptr2=&arr2[0];
    cout<<"Before Swapping : "<<endl;
    cout<<"Array1 : "<<endl;
    printArray(arr1,size);
    cout<<"Array2 : "<<endl;
    printArray(arr2,size);
    swapArray(ptr1,ptr2,size);
    cout<<"After Swapping : "<<endl;
    cout<<"Array1 : "<<endl;
    printArray(arr1,size);
    cout<<"Array2 : "<<endl;
    printArray(arr2,size);
    return 0;
}