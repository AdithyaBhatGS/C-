/*Program to calculate the area and
perimeter of rectangle and square:-
Formulas:-
Square:-    Area=s*s;   Perimeter=4*s;
Rectangle:- Area=l*b;   Perimeter=2(l+b);
*/
#include<iostream>
using namespace std;
float area(int);
float area(int,int);
float perimeter(int);
float perimeter(int,int);
int main(){
    int side,length,breadth;
    cout<<"Enter the side:";
    cin>>side;
    cout<<"Enter the length and breadth:";
    cin>>length>>breadth;
    cout<<"Area of Square="<<area(side)<<endl;
    cout<<"Area of Rectangle="<<area(length,breadth)<<endl;
    cout<<"Perimeter of Square="<<perimeter(side)<<endl;
    cout<<"Perimeter of Rectangle="<<perimeter(length,breadth)<<endl;
    return 0;
}
float area(int s){
    return(s*s);
}
float area(int l,int b){
    return(l*b);
}
float perimeter(int s){
    return(4*s) ;
}
float perimeter(int l,int b){
    return(2*(l+b));
}

