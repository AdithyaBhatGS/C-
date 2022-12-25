#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    // Creating a set
    unordered_set<string> s;
    
    // Inserting elements to a set
    s.insert("Naman");
    s.insert("Ramu");
    s.insert("Rohan");
    s.emplace("Rajesh");
    
    // Printing the size of the set
    cout<<s.size()<<endl;
    
    // count() return a binary if present then 1 else 0
    cout<<s.count("Rohan")<<endl;
    cout<<s.count("Rahan")<<endl;
    
    // Iterator
    unordered_set<string> :: iterator it=s.begin();
    
    while(it!=s.end()){
        cout<<*it<<endl;
        it++;
    }
    
    // find() returns an iterator
    auto iter=s.find("Rahan");
    
    if(iter!=s.end())
        cout<<*iter<<endl;
    else
        cout<<"Key not present!"<<endl;
    
    unordered_set<int> s1;
    s1.insert(10);
    s1.insert(20);
    
    unordered_set<int> s2;
    s2.insert(1);
    s2.insert(2);
    
    
    // swapping the 2 sets
    swap(s1,s2);
    
    for(auto it=s2.begin();it!=s2.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}