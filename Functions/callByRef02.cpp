/*Program to generate the ascii value of a 
character using functions(call by reference):
*/
#include <iostream>
using namespace std;
int ascii(char& a){
    return(int(a));
} 
int main() {
	char ch;
	cin>>ch;
	cout<<ascii(ch)<<endl;
	return 0;
}
