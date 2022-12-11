/* Program to print the following patter by taking user input
as rows and columns:
ex:  1 2 3 4 5 
     6 7 8 9 10
     11 12 13 14 15
     16 17 18 19 20*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i,j,m,n,k=1;
    cout<<"Enter the rows and columns:";
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<setw(3)<<k<<" ";
            k++;
        }
        cout<<"\n";
    }
    return 0;
}   