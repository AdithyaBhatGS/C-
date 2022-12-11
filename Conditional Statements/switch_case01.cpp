#include<iostream>
using namespace std;
int main(){
    int a,b;
    char choice;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<"----Operations available are:----"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Mod(q)"<<endl;
    cout<<"Enter the choice:"<<endl;
    cin>>choice;
    switch(choice){
        case'1':cout<<"Sum="<<a+b<<endl;
        break;
        case'2':cout<<"Difference="<<a-b<<endl;
        break;
        case'3':cout<<"Product="<<a*b<<endl;
        break;
        case'4':
            if(b==0)
                cout<<"Error:Division by zero!!";
            cout<<"Div="<<a/b<<endl;
            break;
        case'5':
            if(b==0)
                cout<<"Error:Division by zero!!";
            cout<<"Quotient="<<a%b<<endl;
            break;
        default:cout<<"Invalid user input:"<<endl;
        break;
    }
    cout<<"----Finished!!!----"<<endl;   
    return 0;
}