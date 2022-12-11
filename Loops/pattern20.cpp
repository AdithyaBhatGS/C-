/* Pattern:
            1
            10
            101
            1010
            10101
            for m=5;    */
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
            if(j%2==0)
                cout<<"0";
            else
                cout<<"1";
        }
        cout<<"\n";
    }
    return 0;
}