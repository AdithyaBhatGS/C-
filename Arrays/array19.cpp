/*Program to take user input and find the second
largest element in the given array*/
#include<bits/stdc++.h>
using namespace std;
void secondLargest(int arr[],int size){
    bool swapped=false;
    int i;
    for(i=0;i<2;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }        
        }
        if(swapped!=true)
            break; 
        if(i==1)
            cout<<arr[size-2];  
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    secondLargest(arr,size);
    return 0;
}