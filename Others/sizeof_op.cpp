/*Program that shows the use of size of operator
as well as prints the size of primitive data
types along with type modifiers:
--------------------------------
datatypes:
INT----->4 BYTES
FLOAT----->4 BYTES
CHARACTER----->1 BYTE
DOUBLE----->8 BYTES
BOOL----->1 BYTE
--------------------------------
type modifiers:
SHORT----->2 BYTES
LONG----->4 BYTES
UNSIGNED
SIGNED*/
#include<iostream>
using namespace std;
int main(){
    int a=33;
    short int b;
    long int c;
    float d=44.33;
    double e=33.9;
    long double f;
    char g;
    bool h;
    cout<<"The size of int : "<<sizeof(a)<<" bytes"<<endl;
    cout<<"The size of short int : "<<sizeof(b)<<" bytes"<<endl;
    cout<<"The size of long int : "<<sizeof(c)<<" bytes"<<endl;
    cout<<"The size of float : "<<sizeof(d)<<" bytes"<<endl;
    cout<<"The size of double : "<<sizeof(e)<<" bytes"<<endl;
    cout<<"The size of long double : "<<sizeof(f)<<" bytes"<<endl;
    cout<<"The size of character : "<<sizeof(g)<<" bytes"<<endl;
    cout<<"The size of bool : "<<sizeof(h)<<" bytes"<<endl;
    cout<<"The size of 44.33 : "<<sizeof(44.33)<<endl;
    cout<<"The size of 44.33f : "<<sizeof(44.33f)<<endl;
    
    /*The difference in the above 2 statements is 
    that the default type of all decimal values will be 
    "double" hence when we use sizeof w.r.t value ,no matter wheather 
    it is stored in double variable or float variable it will 
    print as "8";But if we use size of operator w.r.t variable 
    ,sizeof variable will be printed*/
    return 0;
}