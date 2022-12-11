/*Program to search an element using pointers of an usorted array*/
#include<iostream>
using namespace std;
int element_finder(int *p1,int size,int ele){
    for (int i = 0; i < size; i++)
    {
        if(*p1==ele)
            return i;
        p1+=1;
    }
    return -1;
}
void readArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
int main(){
    int ele,size;
    cin>>size;
    int arr[size];
    readArray(arr,size);
    cin>>ele;
    int *ptr=&arr[0];
    int x=element_finder(ptr,size,ele);
    if(x>=0)
        cout<<ele<<" is found at position : "<<x<<endl;
    else
        cout<<ele<<" is not present in the array! "<<endl;
    return 0;
}