// Porgram to print 1 to n perfect numbers by taking
// user input:
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0,range;
    cout<<"Enter the n value:";
    cin>>n;
    cout<<"Perfect numbers in between 1 and "<<n<<" are :";
    for(range=2;range<=n;range++)
    {
        for(i=1;i<range;i++)
        {
            if(((range%i)==0))
            {
                sum=sum+i;
            }
        }
        if(sum==range)
        {
            cout<<sum<<"\t";
        }
        sum=0;
    }
}