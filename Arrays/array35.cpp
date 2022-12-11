/*Program to print all unique elements in the array
Last updated : 03/04/2022
Current T.C.-->O(N^2)
*/
#include<bits/stdc++.h>
using namespace std;
void unique_only(int arr[],int size){
    int ele,count,j;
    for(int i=0;i<size;i++){
        if(arr[i]!=INT_MIN){
            ele=arr[i];
            j=0;
            count=0;
            while(j<size){
                if(ele==arr[j]){
                    count+=1;
                    arr[j]=INT_MIN;
                }
                if(count>1)
                    break;
                j++;
            }
            if(count==1)
                cout<<ele<<" ";
        }
    }
}
void readArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    readArray(arr,size);
    unique_only(arr,size);
    return 0;
}