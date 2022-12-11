/*Program to delete an element from a particular
position in an array*/
#include<iostream>
using namespace std;
void afterDeletion(int arr[],int size,int pos){
    int j=pos-1;
    while(j<size-1){
        arr[j]=arr[j+1];
        j++;
    }
    size=size-1;
    cout<<"\n"<<"Array after deletion:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size,pos;
    cin>>size>>pos;
    if(pos>size || pos<1){
        cout<<"Invalid position!";
        exit;
    }
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array before deletion:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    afterDeletion(arr,size,pos);
    return 0;
}