/*Static objects:-
*Whenever we create static objects even after the block ends
the object will never be destroyed.
*It will be destroyed at the end of the program
*/
#include<iostream>
using namespace std;
class Car{
    public:
        Car(){
            cout<<"Constructor invoked!"<<endl;
        }
        ~Car(){
            cout<<"Destructor invoked!"<<endl;
        }
};
int main(){
    int x=0;
    if(x==0){
        static Car c;
    }
    cout<<"End of main"<<endl;
    return 0;
}