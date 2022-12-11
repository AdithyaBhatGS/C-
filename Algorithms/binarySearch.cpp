//Binary Search
#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int low=0,high=size-1,mid;
    while(low<=high)
    {
        mid=low+((high-low)/2);
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int size,key,pos;
    cout<<"Enter the size:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched : ";
    cin>>key;
    pos=binarySearch(arr,size,key);
    if(pos>=0)
        cout<<key<<" is present at "<<pos<<" index"<<endl;
    else
        cout<<key<<" not found!"<<endl;
    return 0;
}