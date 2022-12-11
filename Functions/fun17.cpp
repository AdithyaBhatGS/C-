/*Program to convert a binary number to decimal:
Logic:
1)First pass the number to the function
2)Until number is > 0 take remainder and raise it to 2^i
where(i=0,1,2,3...)
3)Sum it up and store in a variable
4)Divide the num so that you'll get the next digit
5)Let i be incrementing in each iteration
By multiplying each digit with 2's powers
and summing up we get its decimal equivalent.
*/
#include<iostream>
#include<math.h>
using namespace std;
int bin_to_deci(int n){
    int i=0,deci=0,last_dig=0;
    while(n>0){
        last_dig=n%10;
        deci=last_dig*pow(2,i)+deci;
        n=n/10;
        i++;
    }
    return deci;
}
int main(){
    int num;
    cin>>num;
    cout<<"Decimal equivalent of "<<num<<" is = "<<bin_to_deci(num);
    return 0;
}