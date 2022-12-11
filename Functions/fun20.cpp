/*Program to convert a decimal number to binary using functions:*/
#include<iostream>
#include<math.h>
using namespace std;
int decimal_to_binary(int n){
    float i=0,binary=0,last_dig=0;
    while(n>0){
        last_dig=n%2;
        binary=binary+last_dig*pow(10,i);
        n=n/2;
        i++;
    }
    return binary;
}
int main(){
    int num;
    cin>>num;
    cout<<"Binary equivalent of Decimal "<<num<<" is = "<<decimal_to_binary(num);
    return 0;
}