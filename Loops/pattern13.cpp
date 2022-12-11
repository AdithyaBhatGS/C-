/* Pattern:
            11111
            2222
            333
            44
            5          */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter the rows:";
    cin>>m;
    n=m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<i;
        }
        n--;
        cout<<"\n";
    }
    return 0;
}
