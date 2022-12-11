/*Pattern:
                 *
                * *
               *   *
              *     *
             *       *
            *********** for m=6; */
#include<iostream>
using namespace std;
int main(){
    int i,j,k,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(k=1;k<=m-i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=(i*2)-1;j++)
        {
            if(i==m||j==1||j==((i*2)-1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}