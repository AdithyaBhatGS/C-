/*Program to print the negative elements present
in an array:*/
#include<iostream>
using namespace std;

int main(){
    int arr[]={10,-5,11,-10,22,-33};
    for(int i=0;i<6;i++){
        if(arr[i]<0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}