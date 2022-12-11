/* Pattern:
            12345
            23456
            34567
            45678
            56789   */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter the rows and columns:";
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<j;
        }
        n++;
        cout<<"\n";
    }
    return 0;
}