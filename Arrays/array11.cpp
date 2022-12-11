/*Program to take the user input :
->Size of the array
->Elements of the array
->Then display the array before reversing
->Then display the array after reversing*/
#include<iostream>
using namespace std;

int main(){
    int i=0,j,temp=0,size;
    cout<<"Enter the array size:";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array before reversing:"<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    j=size-1;
    i=0;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }
    cout<<"\nArray after reversing:"<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}