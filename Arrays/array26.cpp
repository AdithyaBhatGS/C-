/*Given an array of size N,output sum of each subarray:
EX:Arr[4]={1,5,0,3}
Total number of subarrays in a array=(N*(N+1))/2
So here it will be 10
i.e. {1},{1,5},{1,5,0},{1,5,0,3},{5},{5,0},{5,0,3},{0},{0,3},{3}
Now we need to obtain the sum of them*/
#include<iostream>
using namespace std;
void subArray_sum(int arr[],int size){
    int sum=0,j;
    for(int i=0;i<size;i++){
        j=i;
        sum=0;
        while(j<size){
            sum+=arr[j];
            cout<<sum<<" ";
            j++;
        }
    }
}
int main(){
    int N,j,sum=0;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    subArray_sum(arr,N);
    return 0;
}