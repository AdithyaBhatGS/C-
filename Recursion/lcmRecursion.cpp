/*Program to find the lcm of 2 numbers using recursion 

How it works?

LCM of 22 , 122 

lcmOfTwoNos(122,22,1){

    if((122*1)%22==0)
        12==0 false

    i=2
    lcmOfTwoNos(122,22,2)
}

lcmOfTwoNos(122,22,2){
    if((122*2)%22==0)
        2==0 false

    i=3
    lcmOfTwoNos(122,22,3)
}

lcmOfTwoNos(122,22,3){
    if((122*2)%22==0)
        14==0 false

    i=4
    lcmOfTwoNos(122,22,4)
}

lcmOfTwoNos(122,22,4){
    if((122*4)%22==0)
        4==0 false

    i=5
    lcmOfTwoNos(122,22,5)
}

lcmOfTwoNos(122,22,5){
    if((122*5)%22==0)
        16==0 false

    i=6
    lcmOfTwoNos(122,22,6)
}

lcmOfTwoNos(122,22,6){
    if((122*6)%22==0)
        6==0 false

    i=7
    lcmOfTwoNos(122,22,7)
}

lcmOfTwoNos(122,22,8){
    if((122*8)%22==0)
        18==0 false

    i=9
    lcmOfTwoNos(122,22,9)
}

lcmOfTwoNos(122,22,9){
    if((122*9)%22==0)
        8==0 false

    i=10
    lcmOfTwoNos(122,22,10)
}

lcmOfTwoNos(122,22,10){
    if((122*10)%22==0)
        8==0 false

    i=11
    lcmOfTwoNos(122,22,11)
}

lcmOfTwoNos(122,22,11){
    if((122*2)%22==0)
        0==0 true
        return 122*11=1342
}
*/


#include<iostream>
using namespace std;
int lcmOfTwoNos(int num1,int num2,int i){
    /*First let's check if num1 is a multiple of num2
    If true the it will be lcm */
    
    if((num1*i)%num2==0)
        return num1*i;
    i+=1;

    /*else recursively pass same num1,num2
    with changed values of i*/
    
    return lcmOfTwoNos(num1,num2,i);
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    if(num2>num1){
        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;
    }
    cout<<lcmOfTwoNos(num1,num2,1);
    return 0;
}