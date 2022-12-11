/*Given a sorted array arr[] of size N and a number x, find a pair in array whose sum is closest to x.
size---->20
input--->0 5 8 24 32 33 35 37 39 39 45 51 57 71 71 71 74 86 95 95
x------->111*/
#include<iostream>
#include<climits>
#include<vector>
#include<valarray>
using namespace std;
void sumClosest(vector<int> &arr,int x){
    int min_start,min_end,i=0,j=arr.size()-1,diff=INT_MAX;
    while(i<j){
        if(diff>abs((arr[i]+arr[j])-x)){
            diff=abs((arr[i]+arr[j])-x); 
            min_start=i;
            min_end=j; 
            if(diff==0)
                break;  
        }
        if(arr[i]+arr[j]>x)
            j--;
        else    
            i++;
    }
    cout<<arr[min_start]<<" "<<arr[min_end]<<endl;
}
int main(){
    vector<int> arr;
    int x,size,ele;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    cin>>x;
    sumClosest(arr,x);
    return 0;
}