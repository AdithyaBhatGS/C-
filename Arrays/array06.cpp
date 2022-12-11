/*Program to count the number of negative
elements present in an array by taking 7
inputs from the user,also diplay the array alongside
the result:*/
#include<iostream>
using namespace std;

int main(){
    int arr[7];
    int count=0;
    cout<<"Enter any 7 elements(can include -ve values):";
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    for(int j=0;j<7;j++){
        if(arr[j]<0){
            ++count;
        }
    }
    cout<<"The total number of negative elements in the array:";
    cout<<"{";
    for(int k=0;k<7;k++){
        cout<<arr[k];
        if(k<6){
            cout<<",";
        }
        if(k==6){
            cout<<"}";
        }
    }
    cout<<" is "<<count;
    return 0;
}