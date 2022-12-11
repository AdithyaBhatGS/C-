/*Program to print the even numbers between
a given range using the concept of recursion:
Ex:If we give range as 10 and 30
we should print all the even numbers between 10 and 30 
including 10 and 30 */
#include<iostream>
using namespace std;
void evenseries(int,int);
int main(){
    int lowerlimit,upperlimit;
    cout<<"Enter the lowerlimit and upperlimit:";
    cin>>lowerlimit>>upperlimit;
    evenseries(lowerlimit,upperlimit);
    return 0;
}
void evenseries(int lowerlimit,int upperlimit){
    if(lowerlimit%2 != 0)
        lowerlimit += 1;
    if(lowerlimit>upperlimit)
        return;
    cout<<lowerlimit<<"\t";
    return(evenseries(lowerlimit+1,upperlimit));
}