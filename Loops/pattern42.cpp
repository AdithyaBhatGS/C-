/* Pattern:
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5 

for n=5*/
#include<iostream>
using namespace std;
int main(){
    int n,m,z;
    cin>>n;
    for(int i=1;i<=n;i++){
        z=i-1,m=0;
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
            m+=1;
        }
        for(int k=1;k<=(i*2)-1;k++){
            if(m+k<=n){
                z+=1;
                cout<<z<<" ";
            }
            else{
                z-=1;
                cout<<z<<" ";
            }
        }
        cout<<endl;
    }
}