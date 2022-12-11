/*Program to check wheather a number is 
positive,negative or zero using switch case*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    switch(num>0){
        case 0:
            if(num==0){
                cout<<"Zero";
                break;
            }
            else{
                cout<<"Negative";
                break;
            }
        case 1:
            cout<<"Positive";
    }
    return 0;
}