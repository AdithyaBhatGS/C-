/*Program to find out wheather a person is eligible to
vote or not based on their age:
note:If his/her age is greater than or equal
to 18 then he/she can vote  */
#include<iostream>
using namespace std;
int iseligible(int);
int main(){
    int age;
    cout<<"Enter the age of voter:";
    cin>>age;
    if(iseligible(age)){
        cout<<"Can vote!";
    }
    else 
        cout<<"Cannot vote!";
    return 0;
}
int iseligible(int a){
    if(a>=18)
        return 1;
    else
        return 0;
}