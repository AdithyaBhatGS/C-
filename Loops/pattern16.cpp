/* Pattern:
            *
            **
            * *
            *  *
            *   *
            ******      */
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
            if(i==1 || i==m || j==1 || j==i)
                cout<<"*";
            else 
                cout<<" ";
        }
            cout<<"\n";           
    }
    return 0;
}    

