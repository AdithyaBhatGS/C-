/*Program to insert an element at a specific
position in the array*/
#include<iostream>
using namespace std;
#define MAX_SIZE 100
int main(){
    int size,elem,pos;
    cin>>size;
    int arr[MAX_SIZE];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cin>>pos>>elem;
    if(pos<1 || pos>size){
        cout<<"Invalid position!!";
    }
    else{
        pos=pos-1;
        for(int j=size-1;j>=pos;j--){
            arr[j+1]=arr[j];
        }
        arr[pos]=elem;
        for (int i = 0; i < size+1; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}