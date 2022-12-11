// Program which prints number from 1 to 100
// excluding those numbers which are divisible by 4 or 5;
/*Note: Continue is used to skip a particular iteration
In the below example whenver we encounter a number that is divisible by 4
or 5 we will use continue
That means we will skip the iteration control will go to next iteration;    */
#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=100;i++)
    {
        if((i%4)==0 || (i%5)==0)
            continue;
        cout<<i<<"\t";
    }
    return 0;
}