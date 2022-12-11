//Write a C program to print 
//all alphabets from a to z. - using while loop
#include<iostream>
using namespace std;
int main(){
    char ch='a';
    while((ch>='a') && (ch<='z')){
        cout<<ch<<endl;
        ch++;
    }
    return 0;
}
/* Another method:
#include<iostream>
using namespace std;
int main(){
    char i;
    for(i=97;i<=122;i++){
        cout<<i<<"\n";
    }
    return 0;
}*/