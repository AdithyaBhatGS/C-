// Program to find wheather a number is even or odd using switch case:
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    switch(num%2==0)
    {
        case 1:cout<<num<<"  is even";
                break;
        case 0:cout<<num<<"  is odd";
                break;
    }
    return 0;
}