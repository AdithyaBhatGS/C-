/*Program to add two matrices
Note : To add any two matrices their order must be same*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the rows and columns of matrix : ";
    cin>>row>>col;
    int a1[row][col];
    int a2[row][col];
    int a3[row][col];
    cout<<"Matrix 1 : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a1[i][j];
        }
    }
    cout<<"Matrix 2 : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a2[i][j];
        }
    }
    cout<<"Sum of two matrices : "<<endl;
    for(int i=0;i<row;i++){
        for (int j = 0; j < col; j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
            cout<<setw(2)<<a3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}