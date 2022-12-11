// Program to check wheather a character is an alphabet or not:
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character!! \n";
    cin>>ch;
    if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    {
        cout<<"Character is an alphabet!";
    }
    else
    {
        cout<<"It is not an alphabet!";
    }
    return 0;
}