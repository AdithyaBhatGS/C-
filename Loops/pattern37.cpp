/*Pattern:
            +
            +
            +
            +
        +++++++++
            +
            +
            +
            + for m=5; */
#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    cout<<"Enter the rows:";
    cin>>m;
    for(i=1;i<=(m*2)-1;i++)
    {
        for(j=1;j<=(m*2)-1;j++)
        {
            if(i==m || j==m)
                cout<<"+";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}