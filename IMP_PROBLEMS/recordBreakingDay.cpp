/*Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is VI. A day is record-breaking if it satisfies both of the following conditions:

The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record-breaking day. Please help Isyana find out the number of record-breaking days.
Time limit: 20 seconds per test set.

Memory limit: 1GB.

1 ≤ T ≤ 100.
0 ≤ Vi ≤ 2 × 105.
Test set 1
1 ≤ N ≤ 1000.
Test set 2
1 ≤ N ≤ 2 × 105 for at most 10 test cases.
For the remaining cases, 1 ≤ N ≤ 1000.
Sample

Input
Output
4
8
1 2 0 7 2 0 2 0
6
4 8 15 16 23 42
9
3 1 4 1 5 9 2 6 5
6
9 9 9 9 9 9
Case #1: 2
Case #2: 1
Case #3: 3
Case #4: 0*/
#include<iostream>
#include<limits.h>
using namespace std;
int recordBreakingDays(int arr[],int size){
    int prev_max=INT_MIN,recordDays=0;
    for (int i = 0; i < size; i++)
    {
        if(i==0){
            if(arr[i]>arr[i+1])
                recordDays+=1;
        }
        if(i>0)
            prev_max=max(prev_max,arr[i-1]);
        if(i==size-1){
            if(arr[i]>prev_max)
                recordDays+=1;
        }
        else if(i!=0 && i<size-1){
            if(arr[i]>prev_max && arr[i]>arr[i+1])
                recordDays+=1;
        }
    }
    return recordDays;
}
void readArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    readArray(arr,size);
    int record=recordBreakingDays(arr,size);
    cout<<record<<endl;
    return 0;
}