/*Program to take a user input and then display wheather 
it is an alphabet or digit or special character

NOTE:
ASCII VALUE(48-57):DIGIT
ASCII VALUE(65-90 & 97-122):ALPHABET
All other characters are considered as "SPECIAL CHARACTERS"*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>=48 && ch<=57)
    {
        cout<<"Entered character is a DIGIT";
    }
    else if((ch>=65 && ch<=90) ||(ch>=97 && ch<=122))
    {
        cout<<"Entered character is an ALPHABET";
    }
    else
        cout<<"Entered character is a SPECIAL CHARACTER";
    return 0;
}