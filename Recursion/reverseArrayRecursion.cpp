/*Program to reverse an array using recursion*/
/*Working:
    arr[]={11,99,87,64,1}
    size=5

    reverseArray(arr,0,5){
        0>=2 false
        reverseArray(arr,1,5)
        swap(arr[0],arr[4])
        //1 64 87 99 11
    }
    
    reverseArray(arr,1,5){
        1>=2 false
        reverseArray(arr,2,5)
        swap(arr[2],arr[3])
        //11 64 87 99 1
    }

    reverseArray(arr,2,5){
        2>=2 true
    }
*/
#include<iostream>
using namespace std;
void reverseArray(int arr[],int i,int n){
    if(i>=n/2)
        return;
    reverseArray(arr,i+1,n);
    swap(arr[i],arr[n-i-1]);
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={11,99,87,64,1};
    printArray(arr,5);
    reverseArray(arr,0,5);
    printArray(arr,5);
    return 0;
}