/*Pattern:
            *
           ***
          *****
         *******    
        ********* for m=5;  */
#include<iostream>
using namespace std;
int main(){
    int i,j,k,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(k=m-i;k>0;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=(i*2)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}