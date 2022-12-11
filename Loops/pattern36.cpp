/*Pattern:-
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *      for m=5; */
#include<iostream>
using namespace std;
int main(){
    int i,j,k,m,l;
    cout<<"Enter the rows:";
    cin>>m;
    l=m;
    for(i=1;i<=(m*2)-1;i++)
    {
        if(i<=m){
            for(k=1;k<=m-i;k++)
            {
                cout<<" ";
            }
            for(j=1;j<=(i*2)-1;j++)
            {
                cout<<"*";
            }
        }
        else{
            for(k=1;k<=(i-m);k++)
            {
                cout<<" ";
            }
            for(j=1;j<=(l*2)-3;j++)
            {
                cout<<"*";
            }
            l--;
        }
        cout<<"\n";
    }
    return 0;
}