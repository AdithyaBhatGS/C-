/*Pattern:
                *****
               ****
              ***
             **
            *
             **
              ***
               ****
                *****  for m=5 */
#include<iostream>
using namespace std;
int main(){
    int i,j,k,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=(m*2)-1;i++)
    {
        if(i<=m){
            for(k=1;k<=m-i;k++)
            {
                cout<<" ";
            }
            for(j=1;j<=(m-(i-1));j++)
            {
                cout<<"*";
            }
        }
        else{
            for(k=i-m;k>0;k--)
            {
                cout<<" ";
            }
            for(j=(i-m)+1;j>0;j--)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}