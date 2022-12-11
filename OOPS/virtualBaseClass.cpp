/*Virtual Base Class:
Ex:
1)Suppose we have a Class A which has a data member a;
2)Now we have 2 classes B and C that inherits A;
3)If we create another class D that inherits B and C ,as we know that both B and C have data member a as both of them inherits A,now if we create an object of class D ,the compiler will be in ambiguity as it is getting a from both class B and C.
Solution:
So in order to overcome this issue we need to use virtual base class so that only one instance of same data memeber will be passed.*/
#include<iostream>
using namespace std;
class Student{
    protected:
        string name;
        int roll_no;
    public:
        void set_name(string name){
            this->name=name;
        }
        void set_roll_no(int roll_no){
            this->roll_no=roll_no;
        }
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll No : "<<roll_no<<endl;
        }
};
class Mandatory_Subjects_Marks:virtual public Student{
    protected:
        int maths,os,dbms,networks;
    public:    
        void set_mandatory_subjects_marks(int maths,int os,int dbms,int networks){
            this->maths=maths;
            this->os=os;
            this->dbms=dbms;
            this->networks=networks;
        }
        void display(){
            cout<<"Maths : "<<maths<<endl;
            cout<<"Operating System : "<<os<<endl;
            cout<<"DBMS : "<<dbms<<endl;
            cout<<"Networks : "<<networks<<endl;
        }
};
class Elective:virtual public Student{
    protected:
        string sub_name;
        int sub_marks;
    public:
        void set_sub_marks_sub_name(int sub_marks,string sub_name){
            this->sub_marks=sub_marks;
            this->sub_name=sub_name;
        }
        void display(){
            cout<<sub_name<<" : "<<sub_marks<<endl;
        }
};
class Result:public Mandatory_Subjects_Marks,public Elective{
    protected:
        float percentile;
    public:
        void result(){
            Student::display();
            Mandatory_Subjects_Marks::display();
            Elective::display();
            percentile=((float(maths+os+dbms+networks+sub_marks))*100)/500;
            cout<<"You have got "<<percentile<<" % "<<endl;
            if(percentile>=35.0)
                cout<<"Congratulations!You've Passed the exam!"<<endl;
            else
                cout<<"Fail Again,Fail Better!The World is yours!"<<endl;
        }
};
int main(){
    Result r1;
    r1.set_name("Anoop");
    r1.set_roll_no(200); 
    r1.set_mandatory_subjects_marks(95,77,85,65);
    r1.set_sub_marks_sub_name(82,"Java");  
    r1.result();
    return 0;
}