/*Pattern:
                *
               **
              ***
             ****   */       
#include<iostream>
using namespace std;
int main(){
    int i,j,k,m;
    cout<<"Enter the no of rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(k=i;k<=m;k++)
        {
            cout<<" ";
        }
        for(j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}