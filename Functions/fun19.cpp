/*Program to convert a decimal number into
octal using the concept of functions*/
#include<iostream>
#include<math.h>
using namespace std;
int decimal_to_octal(int n){
    float i=0,octal=0,last_dig=0;
    while(n>0){
        last_dig=n%8;
        octal=octal+last_dig*pow(10,i);
        n=n/8;
        i++;
    }
    return octal;
}
int main(){
    int num;
    cin>>num;
    cout<<"Octal equivalent of Decimal "<<num<<" is = "<<decimal_to_octal(num);
    return 0;
}