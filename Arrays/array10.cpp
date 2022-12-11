/*Program to take the user input and calculate the
arithmetic mean using the concept of arrays:
Note:
Arithmetic Mean means sum of all the elements
divided by the number of elements*/
#include<iostream>
using namespace std;

int main(){
    int size,sum=0;
    float arithmetic_mean=0;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The elements of the arrays are:"<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<"\t";
    }
    for(int k=0;k<size;k++){
        sum=sum+arr[k];
    }
    arithmetic_mean=(float)sum/size;
    cout<<"\nArithmetic mean = "<<arithmetic_mean;
    return 0;
}