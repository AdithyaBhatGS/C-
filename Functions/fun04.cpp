/*Program to take user input and display 
multiplication table*/
#include<iostream>
using namespace std;
void multi(int);
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    multi(num);
    return 0;
}
void multi(int num){
    for(int i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<"\n";
    }
}