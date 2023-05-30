/*Hashmaps-A data structure that is used to store the key value pairs
*An unordered map uses hash tables concept
*searching,insertion,removing all will take O(1)
in best case and O(n) if its collision
*/
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    //Inserting elements into map
    m["Mumbai"]=10;
    m["Chennai"]=11;
    m["Bengaluru"]=12;
    m["Hyderabad"]=13;

    //To check the size
    cout<<m.size()<<endl;

    //To display key value pairs
    unordered_map<string,int> :: iterator it1;
    for(it1=m.begin();it1!=m.end();it1++){
        cout<<it1->first<<" "<<it1->second<<endl;
    }

    //Use of at
    //If we use at and if that key is not present then it will throw an out of range error
    //cout<<m.at("Goa")<<endl;

    //But if we simply use map(key) and if that key is not present then it will be inserted
    //m["Goa"];
    //cout<<m.size()<<endl;

    //To check if an element is present or not in a map
    unordered_map<string,int> :: iterator it2;
    it2=m.find("Pune");
    if(it2!=m.end())
        cout<<"Present!"<<endl;
    else 
        cout<<"Not Present!"<<endl;
    return 0;
}