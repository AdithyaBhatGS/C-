/*Program to show the use of default arguments
:
Default arguments:They are the default values
which will be assigned to the variables is the
function call does not have any arguments;
*/
#include<iostream>
using namespace std;
/*Here whenever the transaction time is >5
we will not pass any value for transaction time
hence by default it will be assigned to 6*/

//ERROR:float cashbackfinder(int b=6,int a)
/*When there are multiple arguments then
default arguments must be declared on the right most
side inside the function parameter section
else it will result in error*/

float cashbackfinder(int a,int b=6){
    if(b==1){
        return(a*0.03); 
    }
    else if(b>1 && b<=5)
    {
        return(a*0.01);
    }
    else
    {
        return(a*0.005);
    }
}
int main(){
    int value,transaction_time;
    cout<<"Enter the value of the transaction and transaction time:";
    cin>>value>>transaction_time;
    if(transaction_time>5){
        cout<<"Cashback="<<cashbackfinder(value);
    }
    else{
    cout<<"Cashback="<<cashbackfinder(value,transaction_time);
    }
    return 0;
}