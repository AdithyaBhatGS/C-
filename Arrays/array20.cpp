/*Program to left rotate an array by N positions:*/
#include<iostream>
using namespace std;
void rotateArray(int arr[],int size,int N){
    int temp,j;
    for(int i=0;i<N;i++){
        j=1;
        temp=arr[0];
        while(j<size){
            arr[j-1]=arr[j];
            j++;
        }
        arr[size-1]=temp;
    }
}
void printArray(int arr[],int size){
    for (int k = 0; k < size; k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main(){
    int size,N;
    cin>>size>>N;
    int arr[size];
    N=N%size;
    /*if user enters for ex:size as 7 and N as 8
    means we need to perform 8 rotations which is
    similiar to performing only 1 rotation
    9 rotation = 2 rotations ,similarly n rotations
    are equal to n%size rotations when n>size*/
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before rotation:";
    printArray(arr,size);
    rotateArray(arr,size,N);
    cout<<"\n";
    cout<<"Array after rotation:";
    printArray(arr,size);
    return 0;
}