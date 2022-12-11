/*Program to print ascii values of A-Z and
a-z and 0-9 using the concept of loops:*/
#include<iostream>
using namespace std;

int main(){
    char ch;
    int i;
    for(ch='A';ch<='Z';ch++){
        i=ch;
        cout<<i<<"\t";
    }
    cout<<"\n-------------------------"<<endl;
    for(ch='a';ch<='z';ch++){
        i=ch;
        cout<<i<<"\t";
    }
    cout<<"\n-------------------------"<<endl;
    for(ch='0';ch<='9';ch++){
        i=ch;
        cout<<i<<"\t";
    }
    return 0;
}