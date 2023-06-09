// structures are used to bind different type values inside a single block

// in general it is similar to classes but all members are by default public in structures(class->private)

#include<iostream>
#include<cstring>

using namespace std;

// defining a structure
struct Employee{
    string name;
    float salary;
    int age;
};

// function to read the name,age,salary
Employee readData(Employee e){
    cout<<"This function is used to read the data:"<<endl;
    cout<<endl;
    getline(cin,e.name);
    cin>>e.salary>>e.age;
    return e;
}
// function to print the structure data
Employee printData(Employee e){
    cout<<"Employee Details are:"<<endl;
    cout<<e.name<<" "<<e.salary<<" "<<e.age<<endl;
}
int main(){
    // creating 2 Employee type objects
    Employee emp,e;
    // passing emp as parameter and storing the return value in e
    e=readData(emp);
    // copying e to emp
    emp=e;
    // passing emp object to function
    printData(emp);
    
    return 0;
}

