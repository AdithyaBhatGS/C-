/*Pattern:
            ****
            ***
            **
            *       */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter the rows and columns:";
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=n;j>0;j--)
        {
            cout<<"*";
        }
        n--;
        cout<<"\n";
    }
    return 0;
}