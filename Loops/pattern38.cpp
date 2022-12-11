/*Pattern:
            *         *
             *       *
              *     *
               *   *
                * *
                 * 
                * *
               *   *   
              *     *
             *       *
            *         * for m=5;    */
#include<iostream>
using namespace std;
int main(){
    int i,j,m,count;
    cout<<"Enter the rows:";
    cin>>m;
    count=(m*2)-1;
    for(i=1;i<=count;i++)
    {
        for(j=1;j<=count;j++)
        {
            if(j==i || j==(count-i)+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}