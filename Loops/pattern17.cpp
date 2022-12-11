/* Pattern:
            11011
            11011
            00000
            11011
            11011   */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,n,centre_row,centre_col;
    cout<<"Enter the rows:";
    cin>>m;
    n=m;
    centre_row=(m+1)/2;
    centre_col=(n+1)/2;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==centre_row|| j==centre_col)
            {
                cout<<"0";
            }
            else
                cout<<"1";
        }
        cout<<"\n";
    }
    return 0;
}