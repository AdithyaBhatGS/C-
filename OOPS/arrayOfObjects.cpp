/*Write a program to print the name, salary and date of joining of 5 employees in a company. Use array of objects.*/

#include<iostream>
using namespace std;
class Employee{
    string emp_name;
    float emp_salary;
    int day,month,year;
    public:
        void set_emp_details(string emp_name,float emp_salary,int day,int month,int year){
            this->emp_name=emp_name;
            this->emp_salary=emp_salary;
            this->day=day;
            this->month=month;
            this->year=year;
        }
        void get_emp_details(void){
            cout<<"Name : "<<emp_name<<endl;
            cout<<"Salary : "<<emp_salary<<endl;
            cout<<"Date of Joining : "<<day<<"-"<<month<<"-"<<year<<endl;            
        }
};
int main(){
    string name;
    float salary;
    int day,month,year;
    Employee *ptr_set=new Employee[5];//for setting the details
    Employee *ptr_get=ptr_set;//for displaying through getter
    for (int i = 0; i < 5; i++)
    {
        cin.clear();
        cin.sync();
        /*getline will not work if we try to read multiple times because at first time it will read till it encounters a 
        "\n" then when you read again you again encounter "\n"
        so to solve this we need to use clear() and sync() methods
        */
        cout<<"Enter the employee name : ";
        getline(cin,name);
        cout<<"Enter the and salary : ";
        cin>>salary;
        cout<<"Enter the day,month and year of joining : ";
        cin>>day>>month>>year;
        (ptr_set+i)->set_emp_details(name,salary,day,month,year);    
    }
    /*At the end of the loop the pointer "ptr_set" will be pointing towards an invalid memory block so we need another pointer that points from the beginning to display the details of the Employee*/
    for (int i = 0; i < 5; i++)
    {
        cout<<"Employee "<<i+1<<" details are : "<<endl;
        (ptr_get+i)->get_emp_details();    
    }
    delete[] ptr_set;
    delete[] ptr_get;
    return 0;
}