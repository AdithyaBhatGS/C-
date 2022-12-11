/* Program to print the star pattern of m rows and n columns:
Pattern:    ex:****
*/
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
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}