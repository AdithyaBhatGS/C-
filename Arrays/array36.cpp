/*Program to computer total number of duplicate elements
present in the array:-
Last updated : 03/04/2022
Current T.C. --> O(N^2)
How?
Ex:arr={1,10,20,1,25,1,10,30,25,1}
Here total duplicate elements are = 5
Because we should not count elements first occurence
Here 10 is present 2 times but duplicate will be 1time
Similarily 1 present 4 times but duplicate 3times*/
#include<bits/stdc++.h>
using namespace std;
void duplicate_counter(int arr[],int size){
    int ele,count,j,final_count=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=INT_MIN){
            ele=arr[i];
            j=0;
            count=-1;
            while(j<size){
                if(ele==arr[j]){
                    count+=1;
                    arr[j]=INT_MIN;
                }
                j++;
            }
            if(count>0)
                final_count+=count;
        }
    }
    cout<<"Total duplicate elements in the array : "<<final_count<<endl;
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
    duplicate_counter(arr,size);
    return 0;
}