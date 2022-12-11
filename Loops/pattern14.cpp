/*Pattern:
            5
            44
            333
            2222
            11111   */
#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=m;i>0;i--)
    {
        for(j=i;j<=m;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}