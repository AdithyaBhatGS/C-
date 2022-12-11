/*Program to read and print elements of array using pointers*/
#include<iostream>
using namespace std;
void printArray(int *p1,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<*(p1+i)<<" ";
    }
}
void readArray(int *p1,int size){
    for (int i = 0; i < size; i++)
    {
        cin>>*(p1+i);
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    int *ptr=&arr[0];
    readArray(ptr,size);
    printArray(ptr,size);
    return 0;
}