//vector of pairs
/*Vector of pairs=pairs are individual elements inside a
container called vectors

Means if it is vector<int> v ,each and every elements inside 
a vector is an integer

But if it is vector<pair<int,int>> ,it means each and every elements inside a vector is a pair

Here when you want to read user input v[0] means 1st pair
and v[0] has 2 integers inside it.

So simply take user input to two normal int variables may be x and y and then use emplace_back() or push_back()

*/

#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<pair<int,int>> v){
    cout<<"Printing ....."<<endl;
    for(auto i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main(){
    //direct input
    //vector<pair<int,int>> v={{10,20},{20,30},{30,21}};
    vector<pair<int,int>> v;
    //User input
    int x,y,size;
    cin>>size;
    for(auto i=0;i<size;i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec(v);
    return 0;
}