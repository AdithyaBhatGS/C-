/*Vectors unlike arrays are pass by value by default
and not pass by reference

But we can make it pass by reference 
*/
#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int> v){
    cout<<"Size : "<<v.size()<<endl;
    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void passbyValue(vector<int> v){
    v[0]=100;
    v[1]=200;
}
void passbyReference(vector<int> &v){
    v[0]=100;
    v[1]=299;
}
int main(){

    vector<int> v(10);
    printVec(v);
    v.push_back(29);
    printVec(v);

    vector<int> v1;
    
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    //We can clearly see that value is not changing even if 
    //we have changed it in the passbyValue function
    
    cout<<"Pass by value : "<<endl;
    passbyValue(v1);
    printVec(v1);
    
    //pass by reference
    cout<<"Pass by reference : "<<endl;
    passbyReference(v1);
    printVec(v1);

    /*Whenever you send vectors as a parameters in a function
    remember that you are by default using pass by value
    which means it will copy values one by one which takes
    O(N) time complexity
    Pass by reference takes O(1) time complexity*/

    vector<int> v2=v1;//O(N)
    //It is simply like applying a for loop to copy elements one
    //by one
    vector<int> &v3=v1;//O(1)

    return 0;
}