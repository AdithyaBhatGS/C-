// Program to print strong numbers from 1 to n:
#include<iostream>
using namespace std;
int main(){
    int i,n0,j,n,num,last_dig,sum=0,fact=1;
    cout<<"Enter the limit n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        num=i;
        n0=i;
        while(n0>0)
        {
            last_dig=n0%10;
            for(j=last_dig;j>0;j--)
            {
                fact=fact*j;
                if(j==1)
                {
                    sum=sum+fact;
                }
            }
            n0=n0/10;
            fact=1;
        }
        if(sum==num)
        {
            cout<<num<<"\t";
        }
        sum=0;    
    }    
    return 0;
}