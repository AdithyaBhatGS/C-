/* Program to print the number pattern by taking user input as 
m rows and n columns:
ex: 1111
    2222
    3333
    4444 */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter the rows and columns:";
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}