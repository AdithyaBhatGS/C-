/*Program to print odd or even number series in 
between the range entered by the user:
Here if user enters an odd number as lowerlimit
the odd series will be generated
else even series will be generated*/

#include<iostream>
using namespace std;
void eve_odd_series(int,int);
int main(){
    int lowerlimit,upperlimit;
    cout<<"Enter the lowerlimit and upperlimit respectively:";
    cin>>lowerlimit>>upperlimit;
    eve_odd_series(lowerlimit,upperlimit);
}
void eve_odd_series(int lowerlimit,int upperlimit){
    if(lowerlimit>upperlimit )
        return;
    cout<<lowerlimit<<"\t";
    eve_odd_series(lowerlimit+2,upperlimit);
}