/*Pattern: 
            2
            242
            24642
            2468642
            for m=4 */
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=0,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            n += 2;
            cout<<n;
        }
        for(k=1;k<=i-1;k++)
        {
            n -= 2;
            cout<<n;
        }
        n=0;
        cout<<"\n";
    }
    return 0;
}