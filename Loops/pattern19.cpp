/* Pattern:
            *****
            *   *
            *   *
            *   *    
            *****   */
#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
        if(i==1 || i==m || j==1 || j==m)
            cout<<"*";
        else
            cout<<" ";
        }
        cout<<"\n";  
    }
    
    return 0;
}