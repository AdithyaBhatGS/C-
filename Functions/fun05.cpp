/*Program to take the user input and determine the cube
using functions:- */
#include<iostream>
using namespace std;
int cube(long long int);
int main(){
    long long num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Cube of num="<<cube(num);
    return 0;
}
int cube(long long int cube){
    return(cube*cube*cube);
}