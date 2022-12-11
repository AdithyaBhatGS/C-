/*Program to find out of frequencies of each element in array 
using hashmaps*/
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
    unordered_map<int,int> :: iterator i;
    for(i=m.begin();i!=m.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}