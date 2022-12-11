// Program to check wheather a character is vowel or consonant
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:"<<endl;
    cin>>ch;
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')
){
        cout<<"It is a vowel!";
    }
    else if((ch>='a') && (ch<='z') ||(ch>='A') && (ch<='Z'))
    {
        cout<<"It is a consonant! \n";
    }
    else 
        cout<<"It is not an alphabet! \n";
}
