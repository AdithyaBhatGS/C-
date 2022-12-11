/*Program to find the list of perfect numbers
in between a given range using functions:
Perfect numbers:
ex----6:-
Step1:Find the divisors of 6
i.e. 1,2,3,6 
now we need to exclude the number which we are 
checking i.e 6

Step 2:find the sum of divisors
i.e. 1+2+3=6

Step 3:Compare the sum with number
i.e 6==6 which is true and 6 is a perfect num
-ber

ex02:10-1,2,5
but 8!=10 hence it is not a perfect number;
*/
#include<iostream>
using namespace std;
/*Function to compute the divisors and find
the sum of divisors*/
int N(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if((num%i)==0)
            sum=sum+i;
    }
    return sum;
}
//Function that checks wheather sum is equal to number
bool perfect(int num){
    int sum=N(num);
    if(num==sum)
        return true;
    else
        return false;
}
int main(){
    int start,end;
    cout<<"Enter the range:";
    cin>>start>>end;
    while(start<=end){
        if(perfect(start)){
            cout<<start<<"\t";
        }
        start++;
    }
    return 0;
}