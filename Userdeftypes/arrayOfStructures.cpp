// array of structures -> each array index holds a structure

// size of each array index is size of the structure

// size of entire array is size of structure*no of ele

// but if a structure has variable lenght string obj in it the each structure lenght might vary

#include<iostream>
#include<string>

using namespace std;

struct Person{
    string name;
    float salary;
    int age;
};

void printData(Person *ptr){
    cout<<"Displaying persons details:"<<endl;
    cout<<ptr->name<<" "<<ptr->age<<" "<<ptr->salary<<endl; 
}
int main(){
    Person p[3];
    for(auto i=0;i<3;i++){
        cout<<"Reading Person"<<i<<":";
        cin>>p[i].salary>>p[i].age;
        getline(cin,p[i].name);
    }
    for(int i=0;i<3;i++){
        printData(&p[i]);      
    }
    return 0;
}