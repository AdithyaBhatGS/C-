/*Program to calculate the sum of elements in 
an array:*/
#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int arr[]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of 5 elements in an array is = "<<sum;
    return 0;
}