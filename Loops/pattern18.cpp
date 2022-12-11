/* Pattern:
            111111
            100001
            100001
            100001
            100001
            111111 for m=6 */
#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1 || i==m || j==1 || j==m)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<"\n";
    }
    return 0;
}