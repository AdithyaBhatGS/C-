/*Program to take a multiplier and perform static multiplication on 
2-dimensional array*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int rows,col,multiplier;
    cin>>rows>>col;
    int arr[rows][col];
    cin>>multiplier;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Static matrix multiplication : "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<setw(3)<<arr[i][j]*multiplier<<" ";
        }
        cout<<"\n";
    }
    return 0;
}