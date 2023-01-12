/* Static variables inside a function
Value in static variable will be preserved even after the function call ends

f(){
    static a=10;
    a++;
}
value of  a=11;
f(){
    a++;
}
value of a=12 not 11

->So if we have used a normal variable here we would have got 0 ,5 times,but since this is a static variable we can see that values have
not changed */
#include<iostream>
using namespace std;
void fun(){
    static int i=0;
    ++i;
    cout<<i<<endl;
}
int main(){
    for(int i=0;i<5;i++)
        fun();
    return 0;
}