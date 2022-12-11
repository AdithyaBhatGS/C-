/*Pattern:
            1
            00
            111
            0000
            11111 for m=5 */
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
            if(i%2==0)
                cout<<"0";
            else
                cout<<"1";
        }
        cout<<"\n";
    }
    return 0;
}