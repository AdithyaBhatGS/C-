/*Program to print below pattern by taking
user input of m rows and n columns:
ex: 1111
    0000
    1111
    for m=3,n=4*/
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
            if(i%2==0)
                cout<<"0";
            else
                cout<<"1";
        }
        cout<<"\n";
    }
    return 0;
}