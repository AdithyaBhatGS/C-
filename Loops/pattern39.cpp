/*PATTERN:
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1 */
#include<iostream>
using namespace std;
int main(){
    int n,m=1,p=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0)
                (j%2==0)?cout<<m<<" ":cout<<p<<" ";
            else
                (j%2==0)?cout<<p<<" ":cout<<m<<" ";
        }
        cout<<endl;
    }
    return 0;
}