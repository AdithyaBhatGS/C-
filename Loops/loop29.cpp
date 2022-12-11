/*
HCF of 2 numbers 
First compute the difference b/w 2 numbers 
Next compute the factors of the difference(from largest to smallest)
Now the whichever factor divides 2 numbers completely will be the HCF

Ex: 
num1=98 num2=64
diff=34

Step 1:34(1st largest factor)
so 98%34!=0

Step 2:17(2nd largest factor of 34)
so 98%17!=0

Step 3:2(3rd largest factor of 34)
so 98%2==0 and 64%2==0

Hence HCF of 98 and 64 is 2

*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int num1,num2,diff,hcf;
    
    cin>>num1>>num2;
    
    diff=abs(num1-num2);
    
    for(int i=diff;i>0;i--){
        if(diff%i==0){
            if(num1%i==0 && num2%i==0){
                hcf=i;
                break;
            }
        }
    }
    
    cout<<"HCF of "<<num1<<" and "<<num2<<" will be "<<hcf<<endl;
    
    return 0;
}