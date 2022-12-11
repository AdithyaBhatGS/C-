/* Program to take user input and determine wheather
it is an ARMSTRONG number or not:
Armstrong number ex:153
i.e.(1^3)+(5^3)+(3^3)=1+125+27=153;
1634
i.e.(1^4)+(6^4)+(3^4)+(4^4)*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,m,temp=0,cube=0,count=0,n;
    cin>>num;
    m=num;
    n=num;
    while(num>0){
        num=num/10;
        ++count;
    }
    while(n>0){
        temp=n%10;
        cube=cube+pow(temp,count);
        n=n/10;
    }
    (cube==m)?cout<<"Armstrong Number":cout<<"Not an Armstrong Number";
    return 0;
}