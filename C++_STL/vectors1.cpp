//Taking user input in vectors:
#include<iostream>
#include<vector>

using namespace std;

void printVec(vector<int> v){
    cout<<" Size: "<<v.size()<<endl;
    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size,a;
    cin>>size;
    vector<int> v;

    for(auto i=0;i<size;i++){
    
        cin>>a;
        v.push_back(a);
        printVec(v);
    }

    return 0;
}