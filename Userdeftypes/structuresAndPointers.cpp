// accessing structure data through pointer 

#include<iostream>
#include<string>
using namespace std;

struct Person{
    int heightInCms;
    string name;
    int age;
};

Person* readData(Person *ptr){
    cout<<"Reading data"<<endl;
    cin>>ptr->heightInCms>>ptr->age;
    getline(cin,ptr->name);
    return ptr;
}

void printData(Person *ptr){
    cout<<"Printing the person details:";
    cout<<endl<<ptr->name<<endl<<ptr->heightInCms<<endl<<ptr->age<<endl;
}

int main(){
    Person *ptr,p;
    ptr=&p;
    // cout<<sizeof(ptr)<<" "<<sizeof(p)<<endl;
    ptr=readData(ptr);
    printData(ptr);
    return 0;
}