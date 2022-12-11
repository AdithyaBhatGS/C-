/*Program to find out of frequencies of each element in array 
using hashmaps 
Note:In the same order they appear in the array*/
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int a[]={10,20,10,20,22,33,49,33,22};
    int size=sizeof(a)/sizeof(a[0]);
    unordered_map<int,int> m;
    for (int i = 0; i < size; i++)
    {
        m[a[i]]=m[a[i]]+1;
    }
    /*If we just use iterators and print elements
    in the map then we get key-value pair in unor
    dered manner.But to print in order , just use
    a loop and iterate over loop and once you print 
    a particular key value pair make it -1,else
    for ex: a={10,12,10};
    Here we will print the frequency of 10 as 2 
    ,2times*/
    for(int i=0;i<size;i++){
        if(m[a[i]]!=-1){
            cout<<a[i]<<" "<<m[a[i]]<<endl;
            m[a[i]]=-1;
        }
    }
    return 0;
}
