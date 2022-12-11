#include<iostream>
#include<array>
using namespace std;
int main(){
    //Declaring the array in stl form
    //Default:It is implemented through static array
    array<int,2> array_of_integers={};

    //Reading the array
    for(auto i=0;i<array_of_integers.size();i++){
        cin>>array_of_integers[i];
    }
    //Finding the size
    cout<<array_of_integers.size()<<endl;
    
    //Check if its size is 0
    if(array_of_integers.empty())
        cout<<"An empty container!"<<endl;
    else 
        cout<<"Array has : "<<array_of_integers.size()<<" elements!"<<endl;
        

    cout<<"First Element : "<<array_of_integers.front()<<endl;
    cout<<"Last Element : "<<array_of_integers.back()<<endl;
    
    //Use of at()
    cout<<"Element at 0th index : "<<array_of_integers.at(0)<<endl;
    return 0;
}