/*Function to take user input and 
convert degree celcius to farenheit
Used Formula:
F=C*(9/5)+32 */
#include<iostream>
using namespace std;
double temp_farenheit(double);
int main(){
    double temp_deg_cel;
    cout<<"Enter the temparature in degree celcius:";
    cin>>temp_deg_cel;
    cout<<temp_deg_cel<<" degree celcius is = "<<temp_farenheit(temp_deg_cel)<<" farenheit";
    return 0;
}
double temp_farenheit(double temp){
    return(temp*(1.8)+32);
}