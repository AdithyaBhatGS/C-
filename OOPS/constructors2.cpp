//Use of Constructors
#include<iostream>
using namespace std;
class Car{
    public:
        int speed;
        int milege;
        Car(){
            speed=250;
            milege=25;
            cout<<"Hello World!"<<endl;
        }
};
int main(){
    Car c1,c2,c3;
    cout<<c1.speed<<" "<<c1.milege<<endl;
    cout<<c2.speed<<" "<<c2.milege<<endl;
    cout<<c3.speed<<" "<<c3.milege<<endl;
    return 0;
}