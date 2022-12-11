/*Program to right rotate an array by N positions*/
#include<iostream>
using namespace std;
void rotateArray(int size,int N,int arr[]){
    int temp=0,j;
    for(int i=0;i<N;i++){
        j=size-2;
        temp=arr[size-1];
        while(j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[0]=temp;
    }
}
void printarray(int size,int arr[]){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size,N;
    cin>>size>>N;
    int arr[size];
    N=N%size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array before rotation:";
    printarray(size,arr);
    cout<<"\n";
    rotateArray(size,N,arr);
    cout<<"Array after rotation:";
    printarray(size,arr);
    return 0;
}