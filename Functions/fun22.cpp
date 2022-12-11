/*Compound interest calculator:
Note:Formula:
P*(1+(r/n)^(n*t)
Where,
P-Principal
r-rate of interest
n-number of times it compounds per unit
(if you take it as year,then number of times it compounds per year)
t-time(here we have considered it as year)
Note:
In the above formula we have take rate of interest in decimal(convert it by dividing by 100)*/
#include<iostream>
#include<math.h>
using namespace std;
float compound_interest(int years,int freq,float rate,long double Principal){
    float a=(1+(rate/freq));
    int b=years*freq;
    float d=(pow(a,b));
    return(Principal*d-Principal);
}
int main()
{
    int t,n;
    float r;
    long double P;
    cin>>t>>n>>r>>P;
    float c=compound_interest(t,n,r*0.01,P);
    cout<<"Compound interest : "<<c;
    return 0;
}
