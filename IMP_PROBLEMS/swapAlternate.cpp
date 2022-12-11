/*Program to swap alternate elements in an array:
Ex:Even array:-          odd array:-
 10 23 39 54 63 11        10 23 59 62 71
 23 10 54 39 11 63        23 10 62 59 71 */
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={29,89,33,78,69,96};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    printArray(arr,size);
    while(i+1<size){
        swap(arr[i],arr[i+1]);
        i+=2;
    }
    cout<<"\n";
    printArray(arr,size);
    return 0;
}