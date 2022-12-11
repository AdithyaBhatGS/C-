/*Pattern:
            1
            123
            12345
            1234567
            123456789 for m=5 */
#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=(i*2)-1;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}