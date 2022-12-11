/*Program to store the name of 4 car companies and
print their names acordingly using the concept of
arrays*/
#include<iostream>
using namespace std;
int main(){
    string cars[]={"Maruthi","Tata","Mahindra","Hyundai"};
    for(int i=0;i<4;i++){
        cout<<"Car "<<i<<" is "<<cars[i]<<endl;
    }
}
