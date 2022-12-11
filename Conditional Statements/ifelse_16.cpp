/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<iostream>
using namespace std;
int main(){
    float Basic_salary,Gross_Salary;
    cout<<"Enter the basic salary:";
    cin>>Basic_salary;
    if(Basic_salary<=10000){
        Gross_Salary=Basic_salary+(0.20*Basic_salary)+(0.80*Basic_salary);
    }
    else if(Basic_salary>10000 && Basic_salary<=20000){
        Gross_Salary=Basic_salary+(0.25*Basic_salary)+(0.90*Basic_salary);
    }
    else{
        Gross_Salary=Basic_salary+(0.30*Basic_salary)+(0.95*Basic_salary);
    }
    cout<<"Gross Salary="<<Gross_Salary;
    return 0;
}
