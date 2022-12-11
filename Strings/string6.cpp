/*Program to replace all characters of a string by another character*/
#include<string>
#include<iostream>
using namespace std;
void replace_all_occurences(char *s,char ch,char rep){
    for (int i = 0; *(s+i)!='\0'; i++)
    {
        if(*(s+i)==ch)
            *(s+i)=rep;   
    }
}
int main(){
    char ch,rep;
    char s[100];
    cin.get(s,100);
    cin>>ch>>rep;
    cout<<s<<"\n";
    replace_all_occurences(s,ch,rep);
    cout<<s;
    return 0;
}