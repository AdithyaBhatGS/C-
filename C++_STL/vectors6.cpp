#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int value;
    for(int i=0;i<6;i++){
        cin>>value;
        v.push_back(value);
        cout<<"Size : "<<v.size()<<endl;
        cout<<"Capacity : "<<v.capacity()<<endl;
    }
    
    cout<<"Element at 3rd index : "<<v.at(3)<<endl;
    
    cout<<"First element : "<<v.front()<<endl;
    cout<<"Last element : "<<v.back()<<endl;
    
    //When we use clear the size will become 0 but the capacity remains the same

    cout<<"Before clear : "<<endl;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"After clear : "<<endl;
    v.clear();
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    return 0;
}