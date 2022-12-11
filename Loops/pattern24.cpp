/*Pattern:
            1
            24
            135
            2468
            13579
            246810 for m=6; */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,k=2,n=1;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                cout<<k;
                k += 2;
            }
            else
            {
                cout<<n;
                n += 2;
            }
        }
        k=2;
        n=1;
        cout<<"\n";
    }
    return 0;
}