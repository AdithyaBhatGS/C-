/*C++ program to read a string and obtain its length*/
#include<iostream>
using namespace std;
int length_finder(char *ptr){
    int count=0;
    for (int i = 0; *(ptr+i)!='\0'; i++)
    {
        count+=1;
    }
    return count;
}
int main(){
    string str;
    int count=0;
    getline(cin,str);
    count=length_finder(&str[0]);
    cout<<"Length of the string = "<<count<<endl;
    return 0;
}