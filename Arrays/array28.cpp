/*Program to find the largest and smallest element in the
array*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,2,11,9,20};
    int max=INT_MIN;
    int min=INT_MAX;
    int n=sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++) {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];    
    }
    cout<<"Maximum element in the array = "<<max<<endl;
    cout<<"Minimum element in the array = "<<min<<endl;
    return 0;
}