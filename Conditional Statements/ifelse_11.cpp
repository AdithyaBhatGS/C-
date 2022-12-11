/* Program to take user input and display wheather a
triangle is valid or not

*We know that sum of the 3 angles of a angles of triangl
-e is equal to 180deg
*Also,each angle should be greater than 0
*/
#include<iostream>
using namespace std;
int main(){
    int ANGLE,ang1,ang2,ang3;
    cout<<"Enter the value of ang1:";
    cin>>ang1;
    cout<<"Enter the value of ang2:";
    cin>>ang2;
    cout<<"Enter the value of ang3:";
    cin>>ang3;
    if(ang1>0 && ang2>0 && ang3>0){
        ANGLE=ang1+ang2+ang3;
        if(ANGLE==180)
            cout<<"Triangle is valid!!!"<<endl;
        else    
            cout<<"Invalid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}
