/*Pattern:
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5 */ 
#include<iostream>
using namespace std;
int main(){
    int n,m,z=1;
    cin>>n;
    m=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m-1;j++){
            cout<<" "<<" ";
        }
        for(int k=z;k>0;k--){
            cout<<k<<" ";
        }
        if(i!=1){
            for(int k=2;k<=i;k++){
                cout<<k<<" ";
            }   
        }
        z++;
        m--;
        cout<<endl;
    }
    return 0;
}
