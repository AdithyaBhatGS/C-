/*Program to print the odd numbers between the
given range using the concept of recursion: */
#include<iostream>
using namespace std;
void oddseries(int,int);
int main(){
    int lowerlimit,upperlimit;
    cout<<"Enter the lowerlimit and upperlimit:";
    cin>>lowerlimit>>upperlimit;
    oddseries(lowerlimit,upperlimit);
    return 0;
}
void oddseries(int lowerlimit,int upperlimit){
    if(lowerlimit%2 == 0)
        lowerlimit += 1;
    if(lowerlimit>upperlimit)
        return;
    cout<<lowerlimit<<"\t";
    return(oddseries(lowerlimit+1,upperlimit));
}