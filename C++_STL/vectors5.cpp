/*Vector of vectors

Vector is a container that holds other vectors.

Array of vectors vs vector of vector is that ,

Array of vectors->horizontally resizable but vertically fixed

It simply means that we can resize the vectors present inside the array but size of the array will be fixed

Vector of vectors->It is horizontally resizable as well as vertically resizable

It means we resize the num of vectors in the vector and each vectors size can also be altered.

When you want to read values to vector of vector use outer loop to go from 1st to Nth vector

Then take size as input from the user which indicates the size of vector instance present inside the container 

Then , while reading the values create a temporary vector and read values to it ,then append the entire vector to main container

*/

#include<iostream>
#include<vector>
using namespace std;
int j=0;
void printVec(vector<int> v){
    ++j;
    cout<<"Vector : "<<j<<endl;
    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int no_of_vec,size,value;
    vector<vector<int>> v;
    vector<int> temp;
    cout<<"How many vectors?"<<endl;
    cin>>no_of_vec;

    for(int i=0;i<no_of_vec;i++){
        temp.clear();
        /*If not cleared value will be contiguous,means 1st time you read there will be no issue . Ex 1st vector size 3
        and elements are 1,2,3.

        now if this is not cleared then while reading the next vector temp will already have 3 values and next value will be simply appended to it.*/
        
        cin>>size;
        
        for(int j=0;j<size;j++){
            cin>>value;
            temp.push_back(value);
        }
        
        v.push_back(temp);
    
    }
    
    for(auto i=0;i<v.size();i++){
        printVec(v[i]);
    }
    
    return 0;
}