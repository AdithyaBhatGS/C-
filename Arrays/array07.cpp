/*Program to calculate the number of odd numbers
in an array that takes user input of 
10 numbers:*/
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int count=0;
    cout<<"Enter 10 elements of your choice:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"The number of odd elements in the array: {";
    for(int k=0;k<10;k++){
        cout<<arr[k];
        if(k<9){
            cout<<",";
        }
    }
    cout<<"}"<<" ";
    for(int i=0;i<10;i++){
        if(i%2!=0)
            count+=1;
    }
    cout<<count;
    return 0;
}