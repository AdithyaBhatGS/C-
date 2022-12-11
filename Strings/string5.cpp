/*Program to remove the vowels in a string using pointers*/
#include<iostream>
using namespace std;
void vowels_remover(char *fast,char*slow){
    while(*fast!='\0'){
        int count=0;
        if(*fast=='a'||*fast=='e'||*fast=='i'||*fast=='o'||*fast=='u'||*fast=='A'||*fast=='E'||*fast=='I'||*fast=='O'||*fast=='U')
            count+=1;
        else{
            *slow=*fast;
            count=0;
            slow+=1;
        }
        fast+=1;
    }
    *slow='\0';
}
int main(){
    char str[100];
    cin.get(str,100);
    vowels_remover(&str[0],&str[0]);
    cout<<str<<endl;
    return 0;
}