/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F*/
#include<iostream>
using namespace std;
int main(){
    int phy,chem,bio,maths,cs;
    float total_marks,percentage;
    cout<<"Enter the marks is Physics,Chemistry,Biology,Maths and Computer Science(1-100):";
    cin>>phy>>chem>>bio>>maths>>cs;
    total_marks=phy+chem+bio+maths+cs;
    percentage=((total_marks)/500)*100;
    if(percentage>=90){
        cout<<"Grade A";
    }
    else if((percentage>=80) && (percentage<90)){
        cout<<"Grade B";
    }
    else if((percentage>=70) && (percentage<80)){
        cout<<"Grade C";
    }
    else if(percentage>=60 && (percentage<70)){
        cout<<"Grade D";
    }
    else if((percentage>=40) && (percentage<60)){
        cout<<"Grade E";
    }
    else{
        cout<<"Grade F";
    }
    return 0;
}