/* Pattern:
            55555
            4444
            333
            22
            1       */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"Enter the rows and columns:";
    cin>>m>>n;
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}