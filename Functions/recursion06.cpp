/*Program to print natural numbers
in between a range entered by the user
by using the concept of recursion:*/
#include<iostream>
using namespace std;
void natural_numbers_series(int,int);
int main(){
    int lowerlimit,upperlimit;
    cout<<"Enter the lower limit and upper limit:";
    cin>>lowerlimit>>upperlimit;
    cout<<"Natural numbers between "<<lowerlimit<<" and "<<upperlimit<<" are: ";
    natural_numbers_series(lowerlimit,upperlimit);
    return 0;
}
void natural_numbers_series(int lowerlimit,int upperlimit){
    if(lowerlimit==0)
        lowerlimit+=1;
    if(lowerlimit>upperlimit)
        return;
    cout<<lowerlimit<<"\t";
    return natural_numbers_series(lowerlimit+1,upperlimit);
}