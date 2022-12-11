/*Program to find the strong numbers in between 
the given range:*/
#include<iostream>
using namespace std;
int fact(int num){
    long int fact=1;
    while(num>0){
    fact=fact*num;
    num--;
    }
    return(fact);
}
bool isstrong(int num){
    int i=num;
    long int sum=0;
    int last_dig;
    while(i>0){
    last_dig=i%10;
    fact(last_dig);
    sum=sum+fact(last_dig);
    i=i/10;
    }
    if(sum==num)
        return true;
    else
        return false;
}
int main(){
    int start,end;
    cout<<"Enter the start and ending numbers i.e range:";
    cin>>start>>end;
    cout<<"Strong numbers in between "<<start<<" and "<<end<<" are:";
    while(start<=end){
        if(isstrong(start)){
            cout<<start<<"\t";
        }
        start++;
    }
    return 0;
}