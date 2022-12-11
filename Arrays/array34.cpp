/*Frequency of each element in the array
Last updated :- 02/04/2022
Last T.C. :- O(N^2) */
#include<bits/stdc++.h>
using namespace std;
void count_freq(int arr[],int size){
    int count,j,ele,flag=0;
    for (int i = 0; i < size; i++)
    {
        count=0;
        flag=0;
        j=0;
        if(arr[i]!=INT_MIN){
            ele=arr[i];
            while(j<size){
                if(ele==arr[j]){
                    arr[j]=INT_MIN;
                    count+=1;
                    flag=1;
                }
                j++;    
            }
            if(flag)
                cout<<"Frequency of ele "<<ele<<" = "<<count<<endl;
        }
    }   
}
void readArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
int main(void){
    int size=0;
    cin>>size;
    int arr[size];
    readArray(arr,size);
    count_freq(arr,size);
    return 0;
}