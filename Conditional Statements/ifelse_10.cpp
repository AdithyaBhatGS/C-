#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:"<<endl;
    cin>>ch;
    if((ch>=65) && (ch<=90))
    {
        cout<<"Upper case character!!";
    }
    else if((ch>=97) && (ch<=122))
    {
        cout<<"Lower case character!!";
    }
    else
    {
        cout<<"It is not an alphabet!";
    }
    return 0;
}