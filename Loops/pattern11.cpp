/*Pattern:
            1
            22
            333
            4444  */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter the rows and columns:";
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}
