/*Program to find ascii value of a character using functions
In functions we only pass values in a function call but not
data types.When we pass a character into an integer or pass a
float to an integer it will not result in an error because they
consider only values not the types!*/
#include<iostream>
using namespace std;
int ascii(int c){
    return c;
}
int main(){
    char ch;
    cin>>ch;
    cout<<ascii(ch);   
    return 0;
}