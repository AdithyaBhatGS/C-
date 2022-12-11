/*Program to take elements as input
and then display only the 1st and last 
element:*/
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The first and last element of the array are:"<<endl;
    cout<<arr[0];
    cout<<"\n"<<arr[size-1];
    return 0;
}