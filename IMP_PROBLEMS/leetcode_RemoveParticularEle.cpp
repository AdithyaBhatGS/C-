/*Conditions:
Solved--->05/04/22
Concept-->Two pointer technique
1)Time complexity-->0(n)
2)Space complexity-->0(1)
That means we should'nt create a new array or vector
Means it must be inplace.

Note:When you return k array need not to be sorted but first k elements must be the result

ex:If an array has elements
arr=[3,2,2,3],val=3;
*then we must place [2,2,-,-]
*we must return k i.e 2 in the above case
*Here first k elements must be final result after that there can any elements(indicated by '-')
ex2:
arr=[3,2,1,2,3,2,3],val=3;
*then we must place [2,1,2,2] or [1,2,2,2] order doesnt matter but first 4 elements must be the 
final result */
#include<iostream>
#include<vector>
using namespace std;
int removeParticular(vector<int> &nums,int val){
    int i=0,k=-1;
        while(i<nums.size()){
            if(nums[i]!=val){
                k+=1;
                nums[k]=nums[i];
            }
            i+=1;
        }
        return k+1;
}
int main(){
    int size,val,ele;
    vector<int> nums;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>ele;
        nums.push_back(ele);
    }
    cin>>val;
    int k=removeParticular(nums,val);
    cout<<k<<endl;
    return 0;
}