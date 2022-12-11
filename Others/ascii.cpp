/*Program to print the ascii value of any
character entered by the user:*/
#include<iostream>
using namespace std;

int main(){
    char ch;
    int i;
    cout<<"Enter the character whose ASCII value should be obtained:";
    cin>>ch;
    i=ch;
    cout<<"\nASCII value of "<<ch<<" is:"<<i<<endl;
    return 0;
}