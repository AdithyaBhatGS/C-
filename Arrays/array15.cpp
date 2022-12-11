/*Program to put even and odd elements into 2 seperate 
arrays and displaying them*/
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void even_odd(int arr[],int size,int e,int o){
    int even[e],m=0,n=0,odd[o];
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0){
            even[m]=arr[i];
            m++;
        }
        else{
            odd[n]=arr[i];
            n++;
        }
    }
    cout<<"Even Array : "<<endl;
    printArray(even,e);
    cout<<"Odd Array : "<<endl;
    printArray(odd,o);
}
void readArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
int main(){
    int even=0,odd=0,size;
    cin>>size;
    int arr[size];
    readArray(arr,size);
    cout<<"Main Array : "<<endl;
    printArray(arr,size);
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0)
            even+=1;
        else 
            odd+=1;
    }
    even_odd(arr,size,even,odd);
    return 0;
}