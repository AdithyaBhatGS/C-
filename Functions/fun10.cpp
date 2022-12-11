/*Simple program using functions to display 
"____"(insert your city) is in India:-
*/
#include<iostream>
using namespace std;
void fun_str(string);
int main(){
    string city;
    cout<<"Enter any city in India:";
    cin>>city;
    fun_str(city);
    return 0;
}
void fun_str(string city){
    cout<<city<<" is in INDIA!!";
}