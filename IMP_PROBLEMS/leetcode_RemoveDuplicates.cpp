/*Conditions:
Solved--->05/04/22
Concept-->Two pointer technique
1)Time complexity-->0(n)
2)Space complexity-->0(1)
That means we should'nt create a new array or vector
Means it must be inplace.

Note:Input array will be sorted

ex:If an array has elements
arr=[0,0,1,1,1,2,2,3,3,4]
*then we must place [0,1,2,3,4,-,-,-,-,-]
*we must return k i.e 5 in the above case
*Here first k elements must be unique after that there can any elements(indicated by '-')*/

#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int> &nums) {
        int i=0,k=0;
        while(i<nums.size()){
            if(nums[i]!=nums[k]){
                k+=1;
                nums[k]=nums[i];
            }
            i+=1;
        }
        return k+1;
}
int main(){
    int ele,size;
    vector<int> nums;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>ele;
        nums.push_back(ele);
    }
    int k=removeDuplicates(nums);
    cout<<k<<endl;
    return 0;
}