// Program to find last and first digits
//  of a number and print the same without using pow
# include<iostream>
using namespace std;
int main(){
    int num,last_dig,first_dig;
    cout<<"Enter the number:";
    cin>>num;
    last_dig=num%10;
    while(num>=10){
        num/=10;
    }
    first_dig=num;
    cout<<"First digit is:"<<first_dig<<"\nLast digit is: "<<last_dig;
    return 0;
}
