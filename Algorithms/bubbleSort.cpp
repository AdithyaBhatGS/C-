// Space complexity:O(1)

// Time complexity:
// Best Case:O(N^2) Worst Case:O(N)

#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    bool swapped=false;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        // Set flag to false
        swapped=false;
        // Go from first ele to last-1
        for(int j=0;j<size-1-i;j++){
            // Compare with right adjacent and swap if cur>adjacent and set flag to true if swapped
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        // If there is no swapping then already it's sorted
        if(swapped==false)
            break;
    }
    printArray(arr,size);
    return 0;
}