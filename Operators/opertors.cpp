#include <iostream>
using namespace std;
int main(){
    int a=10,b=12;
    cout<<"Arithmetic operators:"<<endl;
    cout<<"The value of a+b="<<a+b<<endl;
    cout<<"The value of a-b="<<a-b<<endl;
    cout<<"The value of a*b="<<a*b<<endl;
    cout<<"The value of a/b="<<a/b<<endl;
    cout<<"The value of a%b="<<a%b<<endl;
    cout<<endl;
    cout<<"Relational operator:"<<endl;
    cout<<"The value of a==b = "<<(a==b)<<endl;
    cout<<"The value of a!=b = "<<(a!=b)<<endl;
    cout<<"The value of a>b = "<<(a>b)<<endl;
    cout<<"The value of a<b = "<<(a<b)<<endl;
    cout<<"The value of a>=b = "<<(a>=b)<<endl;
    cout<<"The value of a<=b = "<<(a<=b)<<endl;
    cout<<endl;
    cout<<"Logical operators:"<<endl;
    cout<<"The value of a%b="<<((a<b)||(a>b))<<endl;
    cout<<"The value of a%b="<<((a<b)&&(a>=b))<<endl;
    cout<<"The value of a%b="<<(!(a>b))<<endl;
    cout<<endl;
    cout<<"Assignment operator:"<<endl;
    cout<<"The value of a=b = "<<(a=b)<<endl;
    cout<<endl;
    cout<<"Increment and Decrement operators:"<<endl;
    /*First print and then increment
    or First print and then decrement*/
    cout<<"The value of a++ = "<<a++<<endl;
    cout<<"The value of a-- = "<<a--<<endl;
    /*First increment and then print
    or First decrement and then print*/
    cout<<"The value of ++a = "<<++a<<endl;
    cout<<"The value of --a = "<<--a<<endl;
    cout<<endl;
    return 0;
}