/* Pattern:
            1
            11
            101
            1001
            10001
            111111 for m=6; */
#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==m || j==1 || j==i)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<"\n";
    }
    return 0;
}