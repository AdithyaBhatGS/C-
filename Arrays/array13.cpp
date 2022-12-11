/*Simple programs to take the user input
and display the elements in the 2dimensional
array
Note:
Syntax for 2d array:
data_type array_name[][];*/
#include<iostream>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter the rows and columns:";
    cin>>rows>>columns;
    int arr[rows][columns];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
