/*Program to illustrate the use of macros
1 feet=12 inches
1 yard=36 inches */
#include<iostream>
#define inches_to_feet 12;
#define inches_to_yard 36;
using namespace std;
int main(){
    float inches,yards,feet;
    cin>>inches;
    yards=inches/inches_to_yard;
    feet=inches/inches_to_feet;

    cout<<"Inches : "<<inches<<" "<<"Yards : "<<yards<<endl;
    cout<<"Inches : "<<inches<<" "<<"Feet : "<<feet<<endl;

    return 0;
}