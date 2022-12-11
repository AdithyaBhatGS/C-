/*Pattern:
            *********
             *     *
              *   *
               * *
                * for m=5; */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,k;
    cout<<"Enter the row:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(k=1;k<=i-1;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=(((m-i)*2)+1);j++)
        {
            if(i==1||j==1||j==(((m-i)*2)+1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}