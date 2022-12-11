/*Program to check wheather a character is an 
alphabet ,digit or special character and if it
is an alphabet the check wheather it is lower
or upper case alphabet using switch case:*/
#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    int n=ch;
    switch(n>64 && n<91 || n>96 && n<123){
        case 0:
            switch(n>47 && n<58){
                case 1:
                    cout<<"Digit";
                    break;
                case 0:
                    cout<<"Special Character";
                    break;
            }
            break;
        case 1:
            switch(n>64 && n<91){
                case 1:
                    cout<<"Upper Case";
                    break;
                case 0:
                    cout<<"Lower Case";
            }
            break;
    }
    return 0;
}
