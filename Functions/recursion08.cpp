/*Program to find the sum of odd or even
series in between a range entered by the 
user:   */
#include<iostream>
using namespace std;
int sum(int,int);
int main(){
    int lowerlimit,upperlimit;
    cout<<"Enter the upperlimit and lowerlimit:";
    cin>>lowerlimit>>upperlimit;
    cout<<sum(lowerlimit,upperlimit);
    return 0;
}
int sum(int lowerlimit,int upperlimit){
    if(lowerlimit>upperlimit)
        return 0;
    return lowerlimit+sum(lowerlimit+2,upperlimit);
}