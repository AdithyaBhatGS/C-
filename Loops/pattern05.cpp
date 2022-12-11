/*Program to print the below pattern by taking user input
as m rows and n columns:
ex: 123456
    123456
    123456
    for m=3,n=6 */
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
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}