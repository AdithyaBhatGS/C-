// Program to take user input and display wheather a  
//a triangle is valid or not
//Triangle is said to be valid when sum of 2 sides > 3rd side
#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,valid;
    cout<<"Enter the side1:";
    cin>>s1;
    cout<<"Enter the side2:";
    cin>>s2;
    cout<<"Enter the side3:";
    cin>>s3;
    if((s2+s3)>s1){
        if((s1+s3)>s2){
            if((s2+s1)>s3){
                valid=1;
            }
        }
    }
    if(valid==1)
        cout<<"Triangle is valid!!";
    else 
        cout<<"Invalid triangle!!";
    return 0;
}