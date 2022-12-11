/*Write a C++ program to input electricity unit  and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
Recommended posts*/
#include<iostream>
using namespace std;
int main(){
    float units,unitamt,surcharge,netamt;
    cout<<"Enter the units consumed:";
    cin>>units;
    if(units<=50)
    {
        unitamt=units*0.50;
    }
    else if(units>50 && units<=150)
    {
        unitamt=(25+(0.75*(units-50)));
    }
    else if(units>150 && units<=250)
    {
        unitamt=(100+(1.20*(units-150)));
    }
    else
    {
        unitamt=(220+(1.50*(units-250)));
    }
    surcharge=0.20*unitamt;
    netamt=surcharge+unitamt;
    cout<<"\n Electricity bill="<<netamt;
    return 0;
}
