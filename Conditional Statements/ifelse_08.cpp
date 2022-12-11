// Program to check how many days are there in a month:
#include<iostream>
using namespace std;
int main(){
    int month_num;
    cout<<"Enter the month number(1-12): \n";
    cin>>month_num;
    if((month_num==1)||(month_num==3)||(month_num==5)||(month_num==7)||(month_num==8)||(month_num==10)||(month_num==12))
    {
        cout<<"Total days="<<31;
    }
    else if((month_num==4)||(month_num==6)||(month_num==9)||(month_num==11))
    {
        cout<<"Total days="<<30;
    }
    else
    {
        cout<<"Total days=28 or 29";
    }
    return 0;
}