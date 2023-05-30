/*Array of vectors

Here it simply means that array is a container in which each element is a vector

vector<int> a[10]
It simply means you're creating 10 vectors in array named arr

rows->elements of array(here each element is a vector)
columns->elements of array(here each element is a int)

So always remember that array of vectors means ,array can have fixed number of vectors but each vectors is dynamic means resizable

Means >horizontally resizable but vertically fixed

You need to declare the size of the array else it will be invalid;

Once you declare for example N it means the arr is holding N vectors

Now you need to read values to each of the vectors present inside the arr.

Means put a loop for traversing from 1st vector to Nth 

Then read a size of vector 

Then put a loop which will read values into each vector

v[0].push_back()-->you are reading values to 1st vector

When you want to print apply same logic

1st loop for going from 1st to Nth vector
Then within vector if we need to print the elements then use a loop

v[0]->1st vector
v[0][0]->1st vector's 1st element

*/

#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int> v){
    cout<<"Vector ....."<<endl;
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
}
int main(){
    //vector<int> arr[10];10 vectors in 1 array named arr
    int N,n,a;
    cin>>N;

    vector<int> arr[N];

    for(int i=0;i<N;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a;
            arr[i].push_back(a);
        }
    }
    for(int i=0;i<N;i++){
        printVec(arr[i]);//sending vector as parameter
    }
    return 0;
}