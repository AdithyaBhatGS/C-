//Program to print Armstrong numbers from 1 to n:
#include<iostream>
using namespace std;
int main(){
    int cube=1,sum=0,i,j,last_dig,num,n1,n0;
    cout<<"Enter the number:";
    cin>>num;
    n0=num;
    n1=num;
    for(j=1;j<=num;j++)
    {
        n0=j;
        while(n0>0)
        {
            last_dig=n0%10;
            for(i=1;i<=3;i++)
            {
                cube=cube*last_dig;
            }
            sum=sum+cube;
            cube=1;
            n0=n0/10;
        }
        if(sum==j)
            cout<<j<<"\n";
        sum=0;
    }
    return 0;
}