// Program to take input from the user and display the week day:
#include <iostream>
using namespace std;
int main(){
    int week_no;
    cout<<"Enter the week day(1-7):";
    cin>>week_no;
    if(week_no==1)
        cout<<"Sunday";
    if(week_no==2)
        cout<<"Monday";
    else if(week_no==3)
        cout<<"Tuesday";
    else if(week_no==4)
        cout<<"Wednesday";
    else if(week_no==5)
        cout<<"Thursday";
    else if(week_no==6)
        cout<<"Friday";
    else if(week_no==7)
        cout<<"Saturday";
    return 0;        
}