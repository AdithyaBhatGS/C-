// Space complexity:O(1)

// Time complexity:
// Best Case:O(N^2) Worst Case:N(N^2)

#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int min=0,size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++){
        min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        if(min!=i)
            swap(arr[min],arr[i]);
    }
    print_array(arr,size);
    return 0;
}
/* Comment is for line 21-line26
    Outer loop for pases,here we need n-1 passes where n->no of elements in the array
    Because the last element need to be sorted as it is the only remaining element;
    Inner loop is to find the minimum element in the array;
    Once you find the minimum ,you need to check wheather minimum index is 
    different from the previosuly initialized one.If both are same ,you don't need to swap 
    as it is already minimum else swap it;
    ex: 1 9 11 10 18 26
    here after 1 will be in sorted sub array ,
    But next min=1
    and if you try to find min using loop again it will be 1st index
    then leave it as it is as the element is sorted.
    Go for next element to sort*/