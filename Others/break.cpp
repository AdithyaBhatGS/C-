// Program to show the usage of break statement in c++:
/*"Break" is used to skip the entire loop if on certain conditions
whereas "Continue" is used in order to skip the iteration*/
#include<iostream>
using namespace std;

int main(){
    int i,j,weeks=4,days=7;

    for(i=1;i<=weeks;i++)
    {
        cout<<"Week:"<<i<<"\n";
        for(j=1;j<=days;j++){
            if(i==3)
                break;
            cout<<"Day:"<<j<<"\n";
        }  
    }
    return 0;
}