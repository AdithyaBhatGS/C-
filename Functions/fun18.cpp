/*Program to convert an octal number
to decimal:
Logic:
1)First pass the number to the function
2)Until number is > 0 take remainder and raise it to 8^i
where(i=0,1,2,3...)
3)Sum it up and store in a variable
4)Divide the num so that you'll get the next digit
5)Let i be incrementing in each iteration
Note:
By multiplying each digit with 8's powers
and summing up we get its decimal equivalent.
*/

#include<iostream>
#include<math.h>
using namespace std;
int octal_to_decimal(int n){
    int i=0,last_dig=0,deci=0;
    while(n>0){
        last_dig=n%10;
        deci=deci+last_dig*pow(8,i);
        n=n/10;
        i++;
    }
    return deci;
}
int main(){
    int num;
    cin>>num;
    cout<<"Decimal equivalent of "<<num<<" is = "<<octal_to_decimal(num);
    return 0;
}