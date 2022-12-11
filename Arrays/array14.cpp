/*Program to copy the elements from one array
to another:*/
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of an array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int copied_arr[size];
    for(int i=0;i<size;i++){
        copied_arr[i]=arr[i];
    }
    cout<<"Array 01:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\nArray02:"<<endl;
    for(int i=0;i<size;i++){
        cout<<copied_arr[i]<<"\t";
    }
    return 0;
}