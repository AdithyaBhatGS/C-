/*Program to check wheather a character is vowel or consonant
using switch case:*/
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character(a-z) or (A-Z):";
    cin>>ch;
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<"Vowel";
            break;
        default:
            cout<<"Consonant";
    }
    return 0;
}