/* Pattern:
                *****
               *   *
              *   *
             *   *
            *****
            for m=5 */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,k;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(k=m-i;k>0;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=m;j++)
        {
            if(i==1 || i==m || j==m || j==1)
                cout<<"*";
            else    
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}