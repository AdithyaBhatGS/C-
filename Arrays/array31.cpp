/*Program to sort an array having 0,1,2 as its element without using
any sorting algos:-*/
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void occurences_sort_fun(int arr[],int size){
    int j=0,zeros=0,ones=0,twos=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0)
            zeros+=1;
        else if(arr[i]==1)
            ones+=1;
        else if(arr[i]==2)
            twos+=1;
    }
    while(j<size){
        if(zeros>0){
            arr[j]=0;
            zeros-=1;
        }
        else if(ones>0){
            arr[j]=1;
            ones-=1;
        }
        else if(twos>0){
            arr[j]=2;
            twos-=1;
        }
        j++;
    }
}
int main(){
    int arr[]={2,1,2,1,0,0,1,1,2,2,1,0,0};
    int size=sizeof(arr)/sizeof(int);
    printArray(arr,size);
    occurences_sort_fun(arr,size);
    printArray(arr,size);
    return 0;
}