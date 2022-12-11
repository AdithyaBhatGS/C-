/*Encapsulation
*It is a concept of binding of data member and member function into
a single unit called "Class".
*Fully Encapsulated class->When all the data members of a class
becomes private , it will become a fully encapsulated class.
*Advantages :
    1)By making all the data members of a class private,
    and using getters we can make them a read only class.
    2)By making all data members private we can improve the
    data security as only author can edit the code
    3)Encapsulated code is good for unit testing.
    4)Provides Code Reusability
*/
#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        string usn;
        long long int phno;
    public:
        void setName(string name){
            this->name=name;
        }
        void setUsn(string usn){
            this->usn=usn;
        }
        void setPhno(long long int phono){
            this->phno=phno;
        }
        string getName(){
            return name;
        }
        string getUsn(){
            return usn;
        }
        long long int getPhno(){
            return phno;
        }
};
int main(){
    Student s;
    s.setName("Vaishak");
    s.setUsn("4ZZ10EEE01");
    s.setPhno(9876543210);
    cout<<"Student details are : "<<"\n";
    cout<<"Name : "<<s.getName()<<endl;
    cout<<"Usn : "<<s.getUsn()<<endl;
    cout<<"PhNO : "<<s.getPhno()<<endl;
    return 0;
}