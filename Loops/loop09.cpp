// Program to check wheather a number is palindrome or not:
//A number which is same when reversed is known as palindrome
#include<iostream>
using namespace std;
int main(){
    int num,n,rev_num=0;
    cout<<"Enter the number:";
    cin>>num;
    n=num;
    while(n!=0)
    {
        rev_num=(rev_num*10)+(n%10);
        n=n/10;
    }
    if(rev_num==num){
        cout<<num<<"  is a Palindrome";
    }
    else{
            cout<<num<<"  is not a Palindrome";
    }   
    return 0;
}
