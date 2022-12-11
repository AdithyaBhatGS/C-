/*Program to take the user input for 5 elements 
in an array and compute the sum of those elements*/
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the "<<i<<" th element of the array:";
        cin>>arr[i];
    }
    for(int k=0;k<5;k++){
        sum=sum+arr[k];
    }
    cout<<"Sum of entered elements is = "<<sum;
}