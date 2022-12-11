/*Program to take user input of 
6 subject marks and then compute the total 
marks obtained and calculate the percentage
using the concept of arrays:*/
#include<iostream>
using namespace std;

int main(){
    int marks[6],total=0;
    float percentage=0.0;
    cout<<"Enter the marks scored by you in 6 subjects:"<<endl;
    cout<<"Enter the marks scored in English:";
    cin>>marks[0];
    cout<<"Enter the marks scored in Kannada:";
    cin>>marks[1];
    cout<<"Enter the marks scored in Hindi:";
    cin>>marks[2];
    cout<<"Enter the marks scored in Computer Science:";
    cin>>marks[3];
    cout<<"Enter the marks scored in Mathematics:";
    cin>>marks[4];
    cout<<"Enter the marks scored in Research and Analysis:";
    cin>>marks[5];
    cout<<"The marks in {English,Kannada,Hindi,Computer Science,Mathematics,Research and Analysis} are : ";
    cout<<"{";
    for(int i=0;i<6;i++){
        cout<<marks[i]<<" ";
    }
    cout<<"}"<<endl;
    cout<<"Total marks obtained = ";
    for(int j=0;j<6;j++){
        total=total+marks[j];
    }
    cout<<total<<endl;
    percentage=(total/6.0);
    cout<<"Percentage obtained = "<<percentage<<"%";
    return 0;
}
