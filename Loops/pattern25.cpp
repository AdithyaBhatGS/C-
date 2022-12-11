/*Pattern:
            1
            135
            13579
            1357911
            13579111315 for m=5 */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,k=1;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=(i*2)-1;j++)
        {
            cout<<k;
            k += 2;
        }
        k=1;
        cout<<"\n";
    }
    return 0;
}