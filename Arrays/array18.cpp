/*Program to pass array as an argument to function
and compute the average of elements in the array:
Note:We will use pointers concept
i.e. we will pass the address of the array to 
function so that function can access the elements 
in the array*/
#include<iostream>
using namespace std;
float avg(int arr[],int size){
    int sum=0;
    float a=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    a=sum/float(size);
    return a;
}
int main(){
    int arr[]={5,10,11,29,81};
    float average=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    average=avg(arr,size);
    cout<<"Average="<<average;
    return 0;
}