/*Multiple Inheritance :
*Concept of inheriting multiple classes by a class
*A single child inherits the properties and behaviour from multiple
parents*/
#include<iostream>
using namespace std;
class Student{
    public:
        int roll_no;
        string name;
        int age;
        void details(){
            cout<<"Enter the student details : ";
            getline(cin,name);
            cin>>age>>roll_no;
        }
};
class Student_Marks{
    public:
        int maths;
        int cs;
        void marks(){
            cout<<"Enter the marks in maths and cs : ";
            cin>>maths>>cs;
        }
};
class Display:public Student,public Student_Marks{
    public:
        void display(){
            cout<<"Name : "<<name<<"\n";
            cout<<"Age : "<<age<<"\n";
            cout<<"Maths : "<<maths<<"\n";
            cout<<"CS : "<<cs<<"\n";
        }
};
int main(){
    Display d;
    d.details();
    d.marks();
    d.display();
    return 0;
}