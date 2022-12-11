/*Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.

Ex:numbers=[1,2,5,9]
    target=7
    Solution=[2,3]
    We need to return array of integers
    
    Concept applied-->Binary Search ,Two pointer technique */
#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> &numbers,int target){
    int low=0,high=numbers.size()-1;
    while(numbers[low]+numbers[high]!=target){
        if(numbers[low]+numbers[high]<target)
            low++;
        else 
            high--;
    }
    return {low+1,high+1};
    /*numbers.clear();
    numbers.push_back(low+1);
    numbers.push_back(high+1);*/
}
int main(){
    vector<int> numbers;
    int target,size,ele;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>ele;
        numbers.push_back(ele);
    }
    cin>>target;
    twoSum(numbers,target);
    /*cout<<numbers[0]<<" "<<numbers[1];*/
    return 0;
}