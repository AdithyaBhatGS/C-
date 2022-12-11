// Program to check wheather a number is divisble by both 5 and 11 or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    if((num%5==0) && (num%11==0))
    {
        cout<<"Divisible by both 5 and 11! \n";
    }
    else
    {
        cout<<"Not divisible!!";
    }
    return 0;
}