/*Program to check wheather a character is as 
alphabet or not using switch case:*/
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    switch(((ch>='A') && (ch<='Z')) ||((ch>='a') && (ch<='z'))){
        case 0:
            cout<<"Not an Alphabet";
            break;
        case 1:
            cout<<"It's an Alphabet";
            break;
    }
    return 0;
}