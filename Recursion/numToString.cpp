/*

Input->12345
Output->one two three four five


How this works?

fun(12345){
    12345==0-->false

    lastDigit=5
    
    1234

    fun(1234)
    cout<<five;//5th
}
fun(1234){
    1234==0-->false

    lastDigit=4

    123

    fun(123)
    cout<<four;//4th
}
fun(123){
    123==0-->false

    lastDigit=3

    12

    fun(12)
    cout<<three;//3rd
}
fun(12){
    12==0-->false

    lastDigit=2

    1

    fun(1)
    cout<<two;2nd
}
fun(1){

    1==0-->false

    lastDigit=1

    0

    fun(0)
    cout<<one;//1st

}
fun(0){
    0==0
        return;
}
*/

#include<iostream>
using namespace std;

void numToString(string arr[],int num){
    if(num==0)
        return;

    //Take lastDigit of the current num value
    int lastDig=num%10;

    //eliminate last digit
    num=num/10;

    //recursive call to reduce value
    numToString(arr,num);

    //printing the string representation of digit
    cout<<arr[lastDig]<<" ";
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int num;
    cin>>num;

    numToString(arr,num);
    return 0;
}