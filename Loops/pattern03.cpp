/* Program to print the below pattern by taking
user input for m rows and n columns:
ex: 0101
    0101
    0101
    for m=3,n=4;*/
#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter the rows and columns:";
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j%2==0)
                cout<<"1";
            else    
                cout<<"0";
        }
        cout<<"\n";
    }
    return 0;
}