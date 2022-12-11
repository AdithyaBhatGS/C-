//If we want to store 2 values in a variable then we can use pairs.
//A pair can have objects of different type
//It is possible to create a nested pair

#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int,int> p1={1,3};
    
    pair<int,pair<char,int>> p2={2,{'Z',99}};
    
    pair<char,int> arr[]={{'a',1},{'b',2},{'c',3}};
    
    cout<<p1.first<<" "<<p1.second<<endl;
    
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    
    int size=sizeof(arr)/sizeof(pair<char,int>);
    
    cout<<size<<endl;
    
    for(int i=0;i<size;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    
    //passing pairs as copy(pass by value)
    pair<int,int> p3=p1;
    
    cout<<p1.first<<" "<<p1.second<<endl;
    
    p3.first=300;

    cout<<p1.first<<" "<<p1.second<<endl;

    //passing pairs as reference
    pair<int,int> &p4=p1;
    
    cout<<p1.first<<" "<<p1.second<<endl;
    
    p4.first=300;

    cout<<p1.first<<" "<<p1.second<<endl;

    //Taking user input for array of type pair
    cout<<"!------------!"<<endl;
    pair<char,int> pair_arr[5];
    
    cout<<"Size of pair_arr : "<<sizeof(pair_arr)<<endl;
    
    char char_value;
    int int_value;

    for(auto i=0;i<5;i++){
        cin>>char_value>>int_value; 
        pair_arr[i].first=char_value;
        pair_arr[i].second=int_value;             
    }

    cout<<"Printing pair_arr : "<<endl;

    for(auto i=0;i<5;i++){
        cout<<pair_arr[i].first<<" "<<pair_arr[i].second<<endl;
    }

    return 0;
}