/*Program to find the largest sum sub array
Ex:arr[4]={0,-1,2,8}
sub arrays are={0},{0,-1},{0,-1,2},{0,-1,2,8},{-1},{-1,2},{-1,2,8},{2},{2,8},{8}
here largest sum is 10 and the respective sub-array is {2,8}*/
#include<iostream>
#include<algorithm>
using namespace std;
long long int LargestSumSubArray(long long int arr[],int N){
    long long int sum=0;
    long long int largest=0;
    for (int i = 0; i < N; i++)
    {
        sum=max(0ll,arr[i]+sum);
        largest=max(sum,largest);
    }
    return largest;
}
int main(){
    int N;
    cin>>N;
    long long int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    cout<<LargestSumSubArray(arr,N);
    return 0;
}