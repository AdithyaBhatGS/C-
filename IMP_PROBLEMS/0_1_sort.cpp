/*Sort an array containing only 0's and 1's*/
#include<iostream>
using namespace std;
void sortArray(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i+=1;
            j-=1;
        }
        else if(arr[i]==0 && arr[j]==0){
            i+=1;
        }
        else if(arr[i]==1 && arr[j]==1){
            j-=1;
        }
        else if(arr[i]==0 && arr[j]==1){
            i+=1;
            j-=1;
        }
    }
    for (int k=0;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }
}
void Display(int arr[],int size){
    for (int k=0;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main(){
    int arr[]={0,1,1,1,0,0,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    sortArray(arr,size);
    return 0;
}