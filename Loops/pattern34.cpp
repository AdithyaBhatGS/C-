/*Pattern:
            *
            **
            ***
            ****
            *****
            ****
            ***
            **
            * for m=5; */
#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,m;
    cout<<"Enter the rows:";
    cin>>m;
    l=m;
    for(i=1;i<=(m*2)-1;i++)
    {
        if(i<=m){
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
        }
        else{
            for(k=l-1;k>0;k--)
            {
                cout<<"*";
            }
            l--;
        }
        cout<<"\n";
    }
    return 0;
}