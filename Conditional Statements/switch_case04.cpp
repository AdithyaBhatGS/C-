/*Program to take user input and if the number is 
in the range i.e in b/w 1 and 5 including 1 and 5
print them in words else print "not in range"*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    switch (n)
    {
        case 1:
            cout<<"one";
            break;
        case 2:
            cout<<"two";
            break;
        case 3:
            cout<<"three";
            break;
        case 4:
            cout<<"four";
            break;
        case 5:
            cout<<"five";
            break;
        default:
            cout<<"not in range";
    }
    return 0;
}