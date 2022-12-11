//Program to copy an array using pointers*/
#include<iostream>
using namespace std;
void printArray(int *ptr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<*(ptr+i)<<" ";
    }
}
void copy(int *ptr1,int *ptr2,int size){
    for (int i = 0; i < size; i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
}
void readArray(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
}
int main(){
    int size1,size2;
    cin>>size1;
    int arr1[size1],arr2[size2];
    readArray(arr1,size1);
    int *p1=&arr1[0];
    int *p2=&arr2[0];
    copy(p1,p2,size1);
    printArray(p1,size1);
    return 0;
}