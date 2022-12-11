/*Hierarchial Inheritance
*It is a type of Inheritance where for a single parent ,multiple children will be present
*It will be in the form of hierarchy
*/
#include<iostream>
using namespace std;
class Member{
    public:
        string name;
        int age;
        char gender;
        Member(string name,int age,char gender):name(name),age(age),gender(gender){

        }
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Gender : "<<gender<<endl;
        }
};
class Staff:public Member{
    public:
        int salary;
        Staff(string name,int age,char gender,int salary):Member(name,age,gender){
            this->salary=salary;
        }
        void display(){
            Member::display();
            cout<<"Salary : "<<salary<<endl;
        }
};
class Student:public Member{
    public:
        float percentile;
        Student(string name,int age,char gender,float percentile):Member(name,age,gender){
            this->percentile=percentile;
        }
        void display(){
            Member::display();
            cout<<"Percentile : "<<percentile<<endl;
        }
};
int main(){
    Staff obj1("Manjunath",35,'m',23000);
    Student obj2("Rohan",21,'m',72.39);
    obj1.display();
    obj2.display();
    return 0;
}