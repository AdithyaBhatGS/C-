/* Program to convert a decimal to hexadecimal
Note:Here we have not used any functions */
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
    long long decimal=0;
    int val=1,x=0,exp=0;
    char hex[17];
    cout<<"Enter the hexademial number:";
    cin>>hex;
    x=strlen(hex);
    x--;
    exp=x;
    for(int i=0;i<=x;i++){
        if(hex[i]>='0' && hex[i]<='9'){
            val=hex[i]-48;            
        }
        else if(hex[i]>='A' && hex[i]<='F'){
            val=hex[i]-65+10;
        }
        else if(hex[i]>='a' && hex[i]<='f'){
            val=hex[i]-97+10;
        }
        decimal=decimal+val*pow(16,exp);
        exp--;
    }
    cout<<decimal;
    return 0;
}