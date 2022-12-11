/*Program to take user input and check wheather 
a given triangle is equilateral,isoscele or sc-
-alene triangle*/
#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter s1:";
    cin>>s1;
    cout<<"Enter s2:";
    cin>>s2;
    cout<<"Enter s3:";
    cin>>s3;
    if((s1==s2) && (s2==s3))
    {
        cout<<"Triangle is EQUILATERAL";
    }
    else if(s1==s2 || s2==s3 || s3==s1)
    {
        cout<<"Triangle is ISOSCELES";
    }
    else
    {
        cout<<"Triangle is SCALENE";
    }
    return 0;
}