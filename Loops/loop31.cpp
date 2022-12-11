/*Program to swap first and last digits of a number

(int)log10(num)=count-1
pow(base,exponent)->double(return-type)

Ex:
num=123456

    last_dig=num%10
    last_dig=6

    count=(int)log10(num)
    count=5

    first_dig=num/(int)pow(10,count)
    first_dig=123456/(int)pow(10,5)
    first_dig=123456/100000=1

    swapped=last_dig*(int)pow(10,count)
    swapped=6*(int)pow(10,5)
    swapped=600000
    
    swapped=swapped+num%(int)pow(10,count)
    swapped=600000+123456%(int)pow(10,5)
    swapped=600000+23456
    swapped=623456

    swapped-=last_dig
    swapped=623456-6
    swapped=623450

    swapped+=first_dig
    swapped=623450+1
    swapped=623451
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,last_dig,first_dig,power,swapped;
    cin>>num;
    
    last_dig=num%10;
    power=log10(num);
    first_dig=num/(int)pow(10,power);
    
    swapped=last_dig*(int)pow(10,power);
    swapped=swapped+num%(int)(pow(10,power));
    swapped-=last_dig;
    swapped+=first_dig;
    
    cout<<"Number before swapping : "<<num<<endl;
    cout<<"Number after swapping : "<<swapped<<endl;
    
    return 0;
}